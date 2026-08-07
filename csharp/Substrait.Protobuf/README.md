# Substrait.Protobuf

Generated .NET [protobuf](https://protobuf.dev/) bindings for the
[Substrait](https://substrait.io/) specification, using
[Google.Protobuf](https://www.nuget.org/packages/Google.Protobuf).

The protobuf definitions from which the code is generated can be found
[here](https://github.com/substrait-io/substrait/tree/main/proto/substrait).

Versions of this package correspond to Substrait
[releases](https://github.com/substrait-io/substrait/releases). `x.y.z` of
`Substrait.Protobuf` contains code generated from `vx.y.z` of the
[substrait repository](https://github.com/substrait-io/substrait).

## Usage

```sh
dotnet add package Substrait.Protobuf
```

All generated types live in the `Substrait.Protobuf` namespace, which comes from
the specification's own `option csharp_namespace` — including the messages from
`substrait/extensions/extensions.proto`, which the spec maps into the same
namespace rather than a nested one:

```csharp
using Substrait.Protobuf;

var plan = new Plan { Version = new Version { MajorNumber = 0, MinorNumber = 99 } };
var bytes = plan.ToByteArray();
var roundTripped = Plan.Parser.ParseFrom(bytes);
```

The package targets `netstandard2.0` and `net10.0`, so it is usable from .NET
Framework 4.6.2+, Mono/Unity and modern .NET alike — anything older than .NET 10
resolves the `netstandard2.0` asset.

The `.proto` files are shipped in the package under `proto/` so they can be fed
to other tooling (or another protobuf implementation) without needing a second
copy of the specification.

## Generation and Publishing

Code generation and publishing is handled in the
[substrait-packaging](https://github.com/substrait-io/substrait-packaging)
repository.

When a new version of the Substrait specification is released, automation
vendors the protobuf definitions for that version and pushes them to GitHub with
a tag formatted like `csharp/Substrait.Protobuf/vx.y.z`. The automation then
publishes the package to
[NuGet](https://www.nuget.org/packages/Substrait.Protobuf).

The C# sources are generated at build time by
[Grpc.Tools](https://www.nuget.org/packages/Grpc.Tools), which supplies `protoc`
and the C# plugin as a build-only dependency, so no generated code is committed
and no `protoc` needs to be installed to build this project.

### Local Generation

The `generate_protobuf.sh` script can be executed locally to vendor the protobuf
definitions. Set `SUBSTRAIT_HOME` to a directory containing the Substrait
specification (defaults to `../../substrait`).
