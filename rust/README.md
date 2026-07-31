# Substrait Packaging - Rust

Rust crate release machinery.

This directory contains three independently published crates, each versioned to
match the Substrait specification release they are generated from:

- [`substrait-prost`](substrait-prost) — generated protobuf bindings
  (`prost`).
- [`substrait-extensions`](substrait-extensions) — packaged extension YAML files
  and types generated from the text schemas (`typify`).
- [`substrait-antlr`](substrait-antlr) — generated ANTLR parsers (`antlr4rust`).

## Publishing

The publish workflows are driven by the spec release pipeline and publish a
final `x.y.z` crate matching the Substrait specification version. Publishes are
idempotent: a crate version that already exists on crates.io is skipped, so a
partially failed release can be re-run safely.
