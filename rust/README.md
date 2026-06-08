# Substrait Packaging - Rust

Rust crate release machinery.

This directory contains three independently published crates, each versioned to
match the Substrait specification release they are generated from:

- [`substrait-prost`](substrait-prost) — generated protobuf bindings
  (`prost`).
- [`substrait-extensions`](substrait-extensions) — packaged extension YAML files
  and types generated from the text schemas (`typify`).
- [`substrait-antlr`](substrait-antlr) — generated ANTLR parsers (`antlr4rust`).
