# Substrait Packaging - Rust

Rust crate release machinery.

This directory contains three independently published crates, each versioned to
match the Substrait specification release they are generated from:

- [`substrait-prost`](substrait-prost) — generated protobuf bindings
  (`prost`).
- [`substrait-extensions`](substrait-extensions) — packaged extension YAML files
  and types generated from the text schemas (`typify`).
- [`substrait-antlr`](substrait-antlr) — generated ANTLR parsers (`antlr4rust`).

## Alpha pre-releases

The publish workflows accept an `alpha` input (currently defaulting to `true`)
that publishes auto-incrementing alpha pre-releases so a spec version can be
published repeatedly while the pipeline is validated. The first alpha for a spec
version is `x.y.z-alpha`, and each subsequent publish bumps the index
(`x.y.z-alpha.1`, `x.y.z-alpha.2`, …) past whatever already exists on crates.io
for that version. Set `alpha: false` to publish a final `x.y.z` release instead.
