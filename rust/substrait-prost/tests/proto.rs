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

// `enable_type_names()` gives every message an authoritative fully-qualified
// name via `prost::Name`, replacing module-path reconstruction downstream.
#[test]
fn message_type_names_are_authoritative() {
    use prost::Name;
    assert_eq!(Plan::full_name(), "substrait.Plan");
    assert_eq!(Plan::PACKAGE, "substrait");
    // Nested messages carry their enclosing scope in the name.
    assert_eq!(
        substrait_prost::r#type::List::full_name(),
        "substrait.Type.List"
    );
}

// With the `reflect` feature, messages derive `ReflectMessage`, resolving their
// descriptor from the embedded `FILE_DESCRIPTOR_SET` at runtime.
#[cfg(feature = "reflect")]
#[test]
fn reflect_message_descriptor_resolves() {
    use prost_reflect::ReflectMessage;

    let plan = Plan::default();
    let descriptor = plan.descriptor();
    assert_eq!(descriptor.full_name(), "substrait.Plan");
    // The descriptor knows the message's fields by name.
    assert!(descriptor.get_field_by_name("version").is_some());
    // The embedded descriptor set is self-contained (imports resolved).
    let pool = descriptor.parent_pool();
    assert!(pool.get_message_by_name("substrait.Type.List").is_some());
}
