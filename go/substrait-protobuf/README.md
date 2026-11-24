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

The `go_publish.yml` workflow generates protobuf bindings for a given Substrait version, commits them, and pushes a tag formatted like `go/substrait-protobuf/vx.y.z`. Because Go modules are distributed directly from version-control tags, pushing the tag publishes the module — the workflow then warms `proxy.golang.org` so `pkg.go.dev` indexes it promptly. The workflow is run manually; it is not yet triggered by Substrait releases.

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
