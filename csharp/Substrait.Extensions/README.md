# Substrait.Extensions

Packaged [Substrait](https://substrait.io/) extension definitions, text schemas
and test cases for .NET.

The files this package ships come from the
[substrait repository](https://github.com/substrait-io/substrait):
[`extensions/`](https://github.com/substrait-io/substrait/tree/main/extensions),
[`text/`](https://github.com/substrait-io/substrait/tree/main/text),
[`tests/cases/`](https://github.com/substrait-io/substrait/tree/main/tests/cases)
and
[`dialects/tests/`](https://github.com/substrait-io/substrait/tree/main/dialects/tests).

Versions of this package correspond to Substrait
[releases](https://github.com/substrait-io/substrait/releases). `x.y.z` of
`Substrait.Extensions` contains the files from `vx.y.z` of the
[substrait repository](https://github.com/substrait-io/substrait).

## Usage

```sh
dotnet add package Substrait.Extensions
```

The files are embedded in the assembly as resources under `substrait/`, using the
same layout as the specification repository. `SubstraitExtensions` locates and
reads them:

```csharp
using Substrait.Extensions;

foreach (var name in SubstraitExtensions.ExtensionFiles)
{
    var yaml = SubstraitExtensions.ReadExtensionFile(name);
    // ... hand to your YAML parser of choice
}

var schema = SubstraitExtensions.ReadTextSchema("simple_extensions_schema.yaml");
var addCases = SubstraitExtensions.ReadTestCase("arithmetic/add.test");
```

The package has no dependencies and targets `netstandard2.0` and `net8.0`, so it
is usable from .NET Framework 4.6.2+, Mono/Unity and modern .NET alike.

## No generated type layer

Unlike the Rust crate (`typify`) and the Python package
(`datamodel-code-generator`), this package ships **data only** — the same choice
the Java and C++ extensions artifacts made.

The obstacle is not YAML or the schemas' Draft 2020-12 dialect, both of which are
tractable. It is `oneOf`: `simple_extensions_schema.yaml` models a function
argument as a union of `enumeration_arg | value_arg | type_arg` with no
discriminator property, and .NET's JSON Schema generators collapse that union to
its first branch. The resulting `Arguments` type would expose only
`enumeration_arg`'s members and silently drop the `value` field that nearly every
real extension file uses. Publishing that as package API would be worse than
publishing none, so typed models are left to consumers for now.

## Generation and Publishing

Code generation and publishing is handled in the
[substrait-packaging](https://github.com/substrait-io/substrait-packaging)
repository.

When a new version of the Substrait specification is released, automation
packages the extension files for that version and pushes them to GitHub with a
tag formatted like `csharp/Substrait.Extensions/vx.y.z`. The automation then
publishes the package to
[NuGet](https://www.nuget.org/packages/Substrait.Extensions).

### Local Generation

The `generate_extensions.sh` script can be executed locally to vendor the
specification files. Set `SUBSTRAIT_HOME` to a directory containing the Substrait
specification (defaults to `../../substrait`).
