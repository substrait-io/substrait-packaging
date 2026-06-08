// SPDX-License-Identifier: Apache-2.0

//! Smoke tests for the packaged Substrait extension files.

use substrait_extensions::extensions::{EXTENSIONS, FUNCTIONS_ARITHMETIC};
use substrait_extensions::testcases::TESTCASES;
use substrait_extensions::text::simple_extensions::SimpleExtensions;

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
fn testcases_are_embedded() {
    // At least one function test case file must be embedded.
    let count = TESTCASES
        .find("**/*.test")
        .expect("valid glob")
        .filter(|entry| entry.as_file().is_some())
        .count();
    assert!(count > 0, "expected embedded .test files");
}
