# Substrait Packaging - C#

NuGet package release machinery.

This directory contains three independently published packages, each versioned to
match the Substrait specification release they are generated from:

- [`Substrait.Net.Protobuf`](Substrait.Protobuf) — generated protobuf bindings
  (`Google.Protobuf`, generated at build time by `Grpc.Tools`).
- [`Substrait.Net.Antlr`](Substrait.Antlr) — generated ANTLR parsers
  (`Antlr4.Runtime.Standard`, committed).
- [`Substrait.Net.Extensions`](Substrait.Extensions) — packaged extension YAML files,
  text schemas and test cases, embedded as assembly resources.

Each package has a sibling `*.Tests` project. Shared build settings and NuGet
metadata live in [`Directory.Build.props`](Directory.Build.props).

## Target frameworks

The packages multi-target `netstandard2.0` and `net10.0`.

`netstandard2.0` does the real work: it keeps .NET Framework 4.6.2+, Mono and
Unity consumers viable, and it is also what .NET 8 and .NET 9 consumers resolve.
Generated specification bindings have no reason to be modern-only.

The modern leg is `net10.0` rather than `net8.0` deliberately — .NET 8 leaves
support in November 2026, and these packages are published on every spec release
for years. Choosing `net10.0` excludes nobody, because anything older falls back
to `netstandard2.0`.

Today that leg earns little: none of the sources use an API `netstandard2.0`
lacks, `Antlr4.Runtime.Standard` publishes no modern asset at all (`net45` and
`netstandard2.0` only), and a dependency's asset is selected by the consumer's
own framework rather than by ours. It is kept as headroom for trimming/AOT
annotations or source generators, and so the package does not advertise an
out-of-support framework.

### Test coverage of both assets

The test projects target `net10.0` only — a library TFM is not runnable, and the
SDK ships a single runtime — so they exercise the `net10.0` asset.

The `netstandard2.0` asset gets its runtime coverage from
`scripts/csharp/smoke_test.sh`, which consumes each packed package twice: once
from a `net8.0` project, which resolves `netstandard2.0` since `net10.0` is not
compatible, and once from a `net10.0` project. Between the two passes both
published assets are executed, not merely compiled.

## Code Generation

From the repository root:

```sh
# Vendor protobuf definitions for the Substrait.Net.Protobuf package
pixi run csharp-generate-protobuf

# Generate Substrait.Net.Antlr parsers (requires java for the ANTLR tool)
pixi run csharp-generate-antlr

# Package Substrait extension files for the Substrait.Net.Extensions package
pixi run csharp-generate-extensions

# Build and test all C# artifacts
pixi run csharp-build
```

What each generation step commits differs by package, following the same
reasoning as the other language targets:

- **Protobuf** vendors the `.proto` files only. `dotnet build`/`dotnet pack` runs
  `protoc` via `Grpc.Tools`, so the compiled bindings are always generated from
  the protos in the same commit, and no generated C# is committed. Unlike C++
  there is no ABI concern — generated C# is ordinary managed source — so this is
  for tidiness rather than correctness.
- **ANTLR** commits the generated parsers. The ANTLR tool is a Java program, and
  neither consumers nor the publish workflow should need a JDK. Uses the stock
  ANTLR C# target; no fork is required, unlike the Rust crate.
- **Extensions** vendors the specification data without generating a typed
  layer. See that package's README for why there is no typed layer.

### Specification provenance

Every package assembly, for both target frameworks, includes an
`AssemblyMetadataAttribute` with key `SubstraitGitHash`. Its value is the full
40-character lowercase commit ID of the **Substrait specification**, not the
packaging repository:

```csharp
using System.Linq;
using System.Reflection;
using Substrait.Protobuf;

var specificationCommit = typeof(Plan).Assembly
    .GetCustomAttributes<AssemblyMetadataAttribute>()
    .SingleOrDefault(attribute => attribute.Key == "SubstraitGitHash")
    ?.Value;
```

Older published packages may not include this attribute. The example returns
`null` in that case; consumers must handle missing specification provenance.

Use a type from `Substrait.Net.Antlr` or `Substrait.Net.Extensions` to inspect
those assemblies instead. The ordinary NuGet repository metadata and assembly
informational version retain their packaging-repository provenance.

Each generation script writes a `SubstraitSource.props` beside its project.
The release workflow commits it with that package's generated or vendored
files, so a later build or pack does not need the original specification
checkout or a network lookup. Do not edit the stamp independently of its
sources. Builds and packing fail if it is missing or malformed, or if a
`SubstraitGitHash` override differs from the recorded value.

Generation accepts either a clean standalone Git checkout supplied through
`SUBSTRAIT_HOME`, or the standard `substrait` squash subtree created by
`scripts/attach_subtree.sh`. Standalone checkouts use their `HEAD`; subtrees use
the upstream `git-subtree-split` commit and verify the imported tree still
matches. Dirty sources, source archives without Git provenance, and modified
subtrees are rejected rather than assigned a misleading hash. Ignored files
that match a package's generation inputs are also rejected; ignored build
artifacts outside those inputs do not affect provenance.

Run `pixi run sh scripts/csharp/test_source_metadata.sh` from the repository
root to test both source layouts, ignored inputs, and build-time stamp
validation. The package smoke tests compare the embedded metadata against the
recorded source stamp for both assets.

## Publishing

The publish workflows are driven by the spec release pipeline and publish a final
`x.y.z` package matching the Substrait specification version (NuGet SemVer has no
`v` prefix, so the tag's `v` is stripped). Publishes are idempotent: a package
version that already exists on NuGet is skipped, so a partially failed release can
be re-run safely.
