# substrait-protobuf (Go)

Generated [Substrait](https://substrait.io/) protobuf bindings using the
[Hybrid API](https://go.dev/blog/protobuf-opaque#publishing). The module includes
both Hybrid and Opaque generated code at the same import paths.

By default, messages expose struct fields as well as builders and accessors.
Build with `-tags=protoopaque` to select the Opaque API, which hides struct fields.
All callers, including dependencies, must use builders and accessors before
building with this tag.

```go
import (
    proto "github.com/substrait-io/substrait-packaging/go/substrait-protobuf/substraitpb"
    "github.com/substrait-io/substrait-packaging/go/substrait-protobuf/substraitpb/extensions"
)
```

Module versions follow the specification version. For example, `v0.85.0`
contains bindings generated from spec `v0.85.0`.

```sh
go get github.com/substrait-io/substrait-packaging/go/substrait-protobuf@v0.85.0
```

See [Go code generation](../../README.md#go-code-generation) for local generation,
publishing, and restrictions on linking legacy bindings.
