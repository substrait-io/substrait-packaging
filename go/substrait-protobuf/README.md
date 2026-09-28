# substrait-protobuf (Go)

Generated Go protobuf bindings for the [Substrait](https://substrait.io/) specification.

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

When a new version of the Substrait specification is released, automation generates protobuf bindings for that version, commits them, and pushes a tag formatted like `go/substrait-protobuf/vx.y.z`. Because Go modules are distributed directly from version-control tags, pushing the tag publishes the module — the workflow then warms `proxy.golang.org` so `pkg.go.dev` indexes it promptly.

### Local Generation

The `generate_protobuf.sh` script can be executed locally to check the protobuf generation. Set `SUBSTRAIT_HOME` to a directory containing the Substrait specification (defaults to `../../substrait`).

```sh
pixi run go-generate-protobuf
```
