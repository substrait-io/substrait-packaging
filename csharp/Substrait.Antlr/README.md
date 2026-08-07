# Substrait.Antlr

Generated .NET [ANTLR](https://www.antlr.org/) parsers for the
[Substrait](https://substrait.io/) specification's grammars.

The grammars from which the parsers are generated can be found
[here](https://github.com/substrait-io/substrait/tree/main/grammar).

Versions of this package correspond to Substrait
[releases](https://github.com/substrait-io/substrait/releases). `x.y.z` of
`Substrait.Antlr` contains parsers generated from `vx.y.z` of the
[substrait repository](https://github.com/substrait-io/substrait).

## Usage

```sh
dotnet add package Substrait.Antlr
```

Each grammar set gets its own namespace:

- `Substrait.Antlr.SubstraitType` — the type grammar (`SubstraitType.g4`, which
  is a combined grammar and so supplies its own lexer). Both a visitor and a
  listener are generated.
- `Substrait.Antlr.FuncTestCase` — the function test case grammar
  (`FuncTestCaseLexer.g4` + `FuncTestCaseParser.g4`). Visitor only, matching the
  other language targets.

```csharp
using Antlr4.Runtime;
using Substrait.Antlr.SubstraitType;

var lexer = new SubstraitTypeLexer(new AntlrInputStream("list?<any1>>"));
var parser = new SubstraitTypeParser(new CommonTokenStream(lexer));
var tree = parser.typeDef();
```

The package targets `netstandard2.0` and `net8.0`, so it is usable from .NET
Framework 4.6.2+, Mono/Unity and modern .NET alike.

## Generation and Publishing

Code generation and publishing is handled in the
[substrait-packaging](https://github.com/substrait-io/substrait-packaging)
repository.

When a new version of the Substrait specification is released, automation
generates the parsers for that version and pushes them to GitHub with a tag
formatted like `csharp/Substrait.Antlr/vx.y.z`. The automation then publishes the
package to [NuGet](https://www.nuget.org/packages/Substrait.Antlr).

The parsers are generated with the stock ANTLR C# target — no fork is required,
unlike the Rust crate — and are **committed** to the repository rather than
generated at build time, because the ANTLR tool is a Java program and neither
consumers nor the publish workflow should need a JDK. This matches the Rust and
C++ ANTLR artifacts.

### Local Generation

The `generate_antlr.sh` script can be executed locally to regenerate the parsers.
It needs the ANTLR tool and a JRE on the `PATH`; `pixi run csharp-generate-antlr`
from the repository root supplies both. Set `SUBSTRAIT_HOME` to a directory
containing the Substrait specification (defaults to `../../substrait`).

### Runtime version coupling

`Antlr4.Runtime.Standard` trails the ANTLR tool: 4.13.1 is the newest published
runtime while the tool is pinned at `>=4.13.2`. That combination is safe because
ANTLR's `RuntimeMetaData.CheckVersion` only compares major and minor versions,
but a tool bump to 4.14 would need a matching C# runtime release before it could
be picked up here.
