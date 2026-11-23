# substrait-protobuf (Go)

Generated [Substrait](https://substrait.io/) protobuf bindings using the Open
(struct) API. For builders and setters, use the sibling
[`substrait-protobuf-opaque`](../substrait-protobuf-opaque) module instead.

```go
import (
    proto "github.com/substrait-io/substrait-packaging/go/substrait-protobuf/substraitpb"
    "github.com/substrait-io/substrait-packaging/go/substrait-protobuf/substraitpb/extensions"
)
```

Module versions follow the specification version. For example, `v0.85.0-alpha`
contains bindings generated from spec `v0.85.0`.

```sh
go get github.com/substrait-io/substrait-packaging/go/substrait-protobuf@v0.85.0-alpha
```

See [Go code generation](../../README.md#go-code-generation) for local generation,
publishing, and restrictions on linking multiple binding variants.
