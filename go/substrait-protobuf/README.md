# substrait-protobuf (Go)

Generated Go protobuf bindings for the [Substrait](https://substrait.io/) specification.

The code is generated with the protobuf-go [Hybrid API](https://protobuf.dev/reference/go/opaque-migration/): messages expose both the Open API (exported struct fields) and the Opaque API (`Get*`/`Set*`/`Has*`/`Clear*` accessors and `Builder` types). Consumers can use either style, and migrate from struct fields to accessors incrementally. Building with `-tags protoopaque` drops the Open API and compiles the Opaque-only variant, which is useful for checking that a codebase has fully migrated.

The protobuf definitions from which the code is generated can be found [here](https://github.com/substrait-io/substrait/tree/main/proto/substrait).

Versions of this module correspond to Substrait [releases](https://github.com/substrait-io/substrait/releases). `vx.y.z` of this module contains code generated from `vx.y.z` of the [substrait repository](https://github.com/substrait-io/substrait).

## Module Usage

```go
import (
	proto "github.com/substrait-io/substrait-packaging/go/substrait-protobuf/substraitpb"
	"github.com/substrait-io/substrait-packaging/go/substrait-protobuf/substraitpb/extensions"
)
```

Add the dependency with:

```sh
go get github.com/substrait-io/substrait-packaging/go/substrait-protobuf@vx.y.z
```

## Generation and Publishing

Code generation and publishing is handled in the [substrait-packaging](https://github.com/substrait-io/substrait-packaging) repository.

When a new version of the Substrait specification is released, automation generates protobuf bindings for that version, commits them, and pushes the commit to a pre-release branch named like `go/substrait-protobuf/x.y.z`. No versions of this module are released yet: the branch exists so the module can be tried out, e.g. from [substrait-go](https://github.com/substrait-io/substrait-go), before releases begin. Reference it by branch name, which Go records as a pseudo-version:

```sh
go get github.com/substrait-io/substrait-packaging/go/substrait-protobuf@go/substrait-protobuf/x.y.z
```

Pre-release branches are force-pushed when regenerated and will be deleted once releases begin. Releases will be tags formatted like `go/substrait-protobuf/vx.y.z`.

### Local Generation

The `generate_protobuf.sh` script can be executed locally to check the protobuf generation. Set `SUBSTRAIT_HOME` to a directory containing the Substrait specification (defaults to `../../substrait`).

```sh
pixi run go-generate-protobuf
```

The tests under `tests/` cover both API variants, and exercise the repository's `testprotos.proto` (generated into `internal/testprotos`) to check that a downstream schema importing the Substrait protos composes with this module's types:

```sh
go test ./...
go test -tags protoopaque ./...
```
