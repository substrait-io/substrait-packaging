# substrait-antlr (Go)

Generated Go [ANTLR](https://www.antlr.org/) parsers for the [Substrait](https://substrait.io/) grammars, built against the [`antlr4-go/antlr`](https://github.com/antlr4-go/antlr) runtime.

The grammars from which the code is generated can be found [here](https://github.com/substrait-io/substrait/tree/main/grammar).

Versions of this module correspond to Substrait [releases](https://github.com/substrait-io/substrait/releases). `vx.y.z` of this module contains code generated from `vx.y.z` of the [substrait repository](https://github.com/substrait-io/substrait).

## Module Usage

```go
import (
	"github.com/substrait-io/substrait-packaging/go/substrait-antlr/substraittype"
	"github.com/substrait-io/substrait-packaging/go/substrait-antlr/functestcase"
)
```

- `substraittype` — lexer, parser, listeners and visitors for the Substrait type grammar (`SubstraitType.g4`).
- `functestcase` — lexer, parser, listeners and visitors for the function test case grammar (`FuncTestCaseParser.g4`).

Add the dependency with:

```sh
go get github.com/substrait-io/substrait-packaging/go/substrait-antlr@vx.y.z
```

## Generation and Publishing

Code generation and publishing is handled in the [substrait-packaging](https://github.com/substrait-io/substrait-packaging) repository.

When a new version of the Substrait specification is released, automation generates the parsers for that version, commits them, and pushes the commit to a pre-release branch named like `go/substrait-antlr/x.y.z`. No versions of this module are released yet: the branch exists so the module can be tried out, e.g. from [substrait-go](https://github.com/substrait-io/substrait-go), before releases begin. Reference it by branch name, which Go records as a pseudo-version:

```sh
go get github.com/substrait-io/substrait-packaging/go/substrait-antlr@go/substrait-antlr/x.y.z
```

Pre-release branches are force-pushed when regenerated and will be deleted once releases begin. Releases will be tags formatted like `go/substrait-antlr/vx.y.z`.

### Local Generation

The `generate_antlr.sh` script can be executed locally to check the parser generation. It requires the stock ANTLR Go target (provided by the pixi environment). Set `SUBSTRAIT_HOME` to a directory containing the Substrait specification (defaults to `../../substrait`).

```sh
pixi run go-generate-antlr
```
