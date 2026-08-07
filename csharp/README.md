# Substrait Packaging - C#

NuGet package release machinery.

This directory contains three independently published packages, each versioned to
match the Substrait specification release they are generated from:

- [`Substrait.Protobuf`](Substrait.Protobuf) — generated protobuf bindings
  (`Google.Protobuf`, generated at build time by `Grpc.Tools`).
- [`Substrait.Antlr`](Substrait.Antlr) — generated ANTLR parsers
  (`Antlr4.Runtime.Standard`, committed).
- [`Substrait.Extensions`](Substrait.Extensions) — packaged extension YAML files,
  text schemas and test cases, embedded as assembly resources.

Each package has a sibling `*.Tests` project. Shared build settings and NuGet
metadata live in [`Directory.Build.props`](Directory.Build.props).

## Target frameworks

The packages multi-target `netstandard2.0` and `net8.0`. `netstandard2.0` keeps
.NET Framework 4.6.2+, Mono and Unity consumers viable; `net8.0` gives modern
runtimes the current BCL. Generated specification bindings have no reason to be
modern-only.

The test projects target `net10.0` only — a library TFM is not runnable, and the
SDK ships a single runtime. Running on `net10.0` exercises the `net8.0` asset; the
`netstandard2.0` asset is validated at compile time by the library build. None of
the three packages compile differently per TFM, so this is full coverage in
practice, but a `net472` test project would be needed to exercise the
`netstandard2.0` asset at runtime.

## Code Generation

From the repository root:

```sh
# Vendor protobuf definitions for the Substrait.Protobuf package
pixi run csharp-generate-protobuf

# Generate Substrait.Antlr parsers (requires java for the ANTLR tool)
pixi run csharp-generate-antlr

# Package Substrait extension files for the Substrait.Extensions package
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
- **Extensions** vendors the specification data and generates nothing. See that
  package's README for why there is no typed layer.

## Publishing

The publish workflows are driven by the spec release pipeline and publish a final
`x.y.z` package matching the Substrait specification version (NuGet SemVer has no
`v` prefix, so the tag's `v` is stripped). Publishes are idempotent: a package
version that already exists on NuGet is skipped, so a partially failed release can
be re-run safely.
