# substrait-protobuf-opaque (Go)

Generated [Substrait](https://substrait.io/) protobuf bindings using the
[Opaque API](https://protobuf.dev/reference/go/opaque-migration/), with builders
and Get/Set accessors. For exported struct fields, use the sibling
[`substrait-protobuf`](../substrait-protobuf) module instead.

```go
import (
    proto "github.com/substrait-io/substrait-packaging/go/substrait-protobuf-opaque/substraitpb"
    "github.com/substrait-io/substrait-packaging/go/substrait-protobuf-opaque/substraitpb/extensions"
)
```

Module versions follow the specification version. For example, `v0.85.0`
contains bindings generated from spec `v0.85.0`.

```sh
go get github.com/substrait-io/substrait-packaging/go/substrait-protobuf-opaque@v0.85.0
```

See [Go code generation](../../README.md#go-code-generation) for local generation,
publishing, and restrictions on linking multiple binding variants.
