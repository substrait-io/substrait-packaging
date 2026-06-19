# substrait-prost

Generated Rust [protobuf](https://protobuf.dev/) bindings for the
[Substrait](https://substrait.io/) specification, using
[`prost`](https://docs.rs/prost).

The protobuf definitions from which the code is generated can be found
[here](https://github.com/substrait-io/substrait/tree/main/proto/substrait).

Versions of this crate correspond to Substrait
[releases](https://github.com/substrait-io/substrait/releases). `vx.y.z` of
`substrait-prost` contains code generated from `vx.y.z` of the
[substrait repository](https://github.com/substrait-io/substrait).

## Usage

The generated types are available under the `substrait` package (crate root) and
`substrait.extensions` (the `extensions` module):

```rust
use substrait_prost::{Plan, Version};
use substrait_prost::extensions::SimpleExtensionUrn;
```

The Rust code is generated at build time with `prost-build` from the vendored
`.proto` files, so **building this crate requires `protoc`** to be available on
the `PATH`. Alternatively, enable the `protoc` feature to build and vendor
`protoc` from source.

### Features

- `serde` — derive `serde` `Serialize`/`Deserialize` for the proto types via
  [`pbjson`](https://docs.rs/pbjson), following the Protobuf JSON Mapping.
- `protoc` — build and vendor `protoc` from source (used by docs.rs).
- `embed-descriptor` — embed the protobuf file descriptor set
  (`FILE_DESCRIPTOR_SET`) for reflection.

## Generation and Publishing

Code generation and publishing is handled in the
[substrait-packaging](https://github.com/substrait-io/substrait-packaging)
repository.

When a new version of the Substrait specification is released, automation
vendors the protobuf definitions for that version and pushes them to GitHub with
a tag formatted like `rust/substrait-prost/vx.y.z`. The automation then
publishes that crate to [crates.io](https://crates.io/crates/substrait-prost).

### Local Generation

The `generate_protobuf.sh` script can be executed locally to vendor the protobuf
definitions. Set `SUBSTRAIT_HOME` to a directory containing the Substrait
specification (defaults to `../../substrait`).
