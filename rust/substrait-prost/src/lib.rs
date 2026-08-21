// SPDX-License-Identifier: Apache-2.0

#![allow(
    clippy::doc_overindented_list_items,
    clippy::large_enum_variant,
    clippy::needless_borrow,
    clippy::needless_borrows_for_generic_args,
    clippy::needless_lifetimes,
    rustdoc::invalid_html_tags
)]

//! Generated types for the protobuf `substrait` package.
//!
//! The Rust code in this crate is generated at build time with
//! [`prost`](https://docs.rs/prost) from the vendored Substrait `.proto`
//! definitions. By default this requires `protoc` on the `PATH`; enable the
//! `protox` feature to compile with a pure-Rust compiler instead, or the
//! `protoc` feature to build and vendor `protoc` from source.

/// Generated types for the protobuf `substrait.extensions` package.
pub mod extensions {
    include!(concat!(env!("OUT_DIR"), "/substrait.extensions.rs"));

    #[cfg(feature = "serde")]
    include!(concat!(env!("OUT_DIR"), "/substrait.extensions.serde.rs"));
}

include!(concat!(env!("OUT_DIR"), "/substrait.rs"));

#[cfg(feature = "serde")]
include!(concat!(env!("OUT_DIR"), "/substrait.serde.rs"));

/// The encoded file descriptor set for the Substrait protobuf definitions.
///
/// This can be used for protobuf reflection.
#[cfg(feature = "embed-descriptor")]
pub const FILE_DESCRIPTOR_SET: &[u8] =
    include_bytes!(concat!(env!("OUT_DIR"), "/proto_descriptor.bin"));
