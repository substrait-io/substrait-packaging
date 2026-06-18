// SPDX-License-Identifier: Apache-2.0

//! Smoke tests for the generated Substrait protobuf bindings.

use prost::Message;
use substrait_prost::{extensions::SimpleExtensionUrn, Plan, Version};

#[test]
fn construct_and_roundtrip_plan() {
    let plan = Plan {
        version: Some(Version {
            minor_number: 85,
            producer: "substrait-packaging".into(),
            ..Default::default()
        }),
        ..Default::default()
    };

    // Encode then decode via prost and confirm the message round-trips.
    let encoded = plan.encode_to_vec();
    let decoded = Plan::decode(encoded.as_slice()).expect("decodes");
    assert_eq!(plan, decoded);
    assert_eq!(decoded.version.unwrap().minor_number, 85);
}

#[test]
fn extensions_package_is_available() {
    // A type from the `substrait.extensions` package must be reachable.
    let urn = SimpleExtensionUrn {
        extension_urn_anchor: 1,
        urn: "extension:io.substrait:functions_arithmetic".into(),
    };
    assert_eq!(urn.extension_urn_anchor, 1);
}
