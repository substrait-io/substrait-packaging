# substrait-extensions

Packaged [Substrait](https://substrait.io/) extension files for Rust.

This crate bundles the Substrait specification's
[extension YAML files](https://github.com/substrait-io/substrait/tree/main/extensions),
the [text-based JSON schemas](https://github.com/substrait-io/substrait/tree/main/text),
the function test cases and the documentation's
[example extensions](https://github.com/substrait-io/substrait/tree/main/site/examples),
alongside Rust types generated from the schemas with
[`typify`](https://docs.rs/typify).

Versions of this crate correspond to Substrait
[releases](https://github.com/substrait-io/substrait/releases). `vx.y.z` of
`substrait-extensions` contains the files from `vx.y.z` of the
[substrait repository](https://github.com/substrait-io/substrait).

## Usage

```rust
use substrait_extensions::extensions::{EXTENSIONS, FUNCTIONS_ARITHMETIC};
use substrait_extensions::text::simple_extensions::SimpleExtensions;
use substrait_extensions::testcases::TESTCASES;
use substrait_extensions::examples::EXAMPLES;

// Parse a bundled extension file into the generated type.
let arithmetic: SimpleExtensions = serde_yaml::from_str(FUNCTIONS_ARITHMETIC).unwrap();

// Or look it up by file stem in the prebuilt map.
let arithmetic = &EXTENSIONS["functions_arithmetic"];
```

- `text` — types generated from the text schemas (e.g.
  `text::simple_extensions::SimpleExtensions`, `text::dialect::Dialect`).
- `extensions` — the embedded extension YAML files (as `&str` constants) and the
  `EXTENSIONS` lookup map.
- `testcases` — the embedded function test case files (an `include_dir::Dir`).
- `examples` — the embedded example extension and type YAML files (an
  `include_dir::Dir`), under `extensions/` and `types/`.

Examples are **not** catalog entries: their URNs use the `extension:org.example:` owner rather than `extension:io.substrait:`, they are deliberately absent from the extension lookups, and their contents and URNs may change without a deprecation cycle. They ship as fixtures for exercising an extension parser against the corners of the simple-extension schema.

## Generation and Publishing

Code generation and publishing is handled in the
[substrait-packaging](https://github.com/substrait-io/substrait-packaging)
repository.

When a new version of the Substrait specification is released, automation vendors
the extension files for that version and pushes them to GitHub with a tag
formatted like `rust/substrait-extensions/vx.y.z`. The automation then publishes
that crate to [crates.io](https://crates.io/crates/substrait-extensions).

### Local Generation

The `generate_extensions.sh` script can be executed locally to vendor the
extension files. Set `SUBSTRAIT_HOME` to a directory containing the Substrait
specification (defaults to `../../substrait`).
