// SPDX-License-Identifier: Apache-2.0

//! Smoke tests for the packaged Substrait extension files.

use substrait_extensions::examples::EXAMPLES;
use substrait_extensions::extensions::{EXTENSIONS, FUNCTIONS_ARITHMETIC, SIMPLE_EXTENSIONS};
use substrait_extensions::testcases::TESTCASES;
use substrait_extensions::text::simple_extensions::SimpleExtensions;
use substrait_extensions::text::SIMPLE_EXTENSIONS_SCHEMA;

#[test]
fn arithmetic_extension_is_embedded_and_parses() {
    // The raw YAML is embedded as a constant...
    assert!(FUNCTIONS_ARITHMETIC.contains("scalar_functions"));

    // ...and parses into the generated `SimpleExtensions` type.
    let parsed: SimpleExtensions =
        serde_yaml::from_str(FUNCTIONS_ARITHMETIC).expect("functions_arithmetic.yaml parses");
    assert!(parsed.scalar_functions.iter().any(|f| f.name == "add"));
}

#[test]
fn lookup_map_contains_core_extensions() {
    // The lazily-built lookup map exposes every bundled extension.
    let arithmetic = EXTENSIONS
        .get("functions_arithmetic")
        .expect("functions_arithmetic present in EXTENSIONS");
    assert!(arithmetic.scalar_functions.iter().any(|f| f.name == "add"));
}

#[test]
fn simple_extensions_slice_is_keyed_by_urn() {
    // Every bundled extension appears in the URN-keyed slice, and the raw
    // source it points at is the same const exposed individually.
    assert_eq!(SIMPLE_EXTENSIONS.len(), EXTENSIONS.len());

    let (urn, yaml) = SIMPLE_EXTENSIONS
        .iter()
        .find(|(urn, _)| *urn == "extension:io.substrait:functions_arithmetic")
        .expect("functions_arithmetic present in SIMPLE_EXTENSIONS");
    assert_eq!(*yaml, FUNCTIONS_ARITHMETIC);

    // Each URN matches the parsed extension's own `urn` field, and the raw
    // source parses into the generated type.
    for (urn, yaml) in SIMPLE_EXTENSIONS {
        let parsed: SimpleExtensions =
            serde_yaml::from_str(yaml).expect("bundled extension parses");
        assert_eq!(&parsed.urn, urn);
    }
    let _ = urn;
}

#[test]
fn simple_extensions_schema_is_exposed() {
    // The raw JSON schema source is available for consumers that validate raw
    // YAML against it (rather than using the generated types).
    assert!(SIMPLE_EXTENSIONS_SCHEMA.contains("urn"));
    let _: serde_yaml::Value =
        serde_yaml::from_str(SIMPLE_EXTENSIONS_SCHEMA).expect("schema is valid YAML");
}

#[test]
fn testcases_are_embedded() {
    // At least one function test case file must be embedded.
    let count = TESTCASES
        .find("**/*.test")
        .expect("valid glob")
        .filter(|entry| entry.as_file().is_some())
        .count();
    assert!(count > 0, "expected embedded .test files");
}

#[test]
fn examples_are_embedded_and_parse() {
    // Both example trees are embedded...
    let yamls: Vec<_> = EXAMPLES
        .find("**/*.yaml")
        .expect("valid glob")
        .filter_map(|entry| entry.as_file())
        .collect();
    assert!(!yamls.is_empty(), "expected embedded example .yaml files");
    assert!(EXAMPLES.get_dir("extensions").is_some());
    assert!(EXAMPLES.get_dir("types").is_some());

    // ...and every one parses as a simple extension, which is what makes them
    // usable as parser fixtures.
    for file in yamls {
        let source = file.contents_utf8().expect("example is UTF-8");
        let _: SimpleExtensions = serde_yaml::from_str(source)
            .unwrap_or_else(|e| panic!("{} parses: {e}", file.path().display()));
    }
}

#[test]
fn examples_are_not_registered_as_catalog_entries() {
    // The examples are illustrations, not catalog entries, so they must not
    // appear in the lookups `build.rs` builds by walking `extensions/`. Keyed by
    // file stem, which is what this crate controls; whether an example's *URN*
    // collides with an official one is the specification's invariant to keep.
    for file in EXAMPLES
        .find("**/*.yaml")
        .expect("valid glob")
        .filter_map(|entry| entry.as_file())
    {
        let stem = file
            .path()
            .file_stem()
            .expect("example has a file stem")
            .to_string_lossy()
            .to_string();
        assert!(
            !EXTENSIONS.contains_key(stem.as_str()),
            "example {stem} is registered in EXTENSIONS"
        );
    }
}
