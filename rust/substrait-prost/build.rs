// SPDX-License-Identifier: Apache-2.0

use prost_build::Config;
use std::{env, error::Error, path::PathBuf};
use walkdir::{DirEntry, WalkDir};

// The Substrait `.proto` files are vendored into this directory by
// `generate_protobuf.sh`, so they are shipped in the published crate and
// compiled at build time.
const PROTO_ROOT: &str = "proto";

#[cfg(feature = "serde")]
/// Serialize and deserialize implementations for proto types using `pbjson`.
fn serde(protos: &[impl AsRef<std::path::Path>], descriptor_path: PathBuf) -> Result<(), Box<dyn Error>> {
    use pbjson_build::Builder;
    use std::fs;

    let mut cfg = Config::new();
    cfg.file_descriptor_set_path(&descriptor_path);
    cfg.compile_well_known_types()
        .extern_path(".google.protobuf", "::pbjson_types")
        .compile_protos(protos, &[PROTO_ROOT])?;

    Builder::new()
        .register_descriptors(&fs::read(descriptor_path)?)?
        .ignore_unknown_fields()
        .build(&[".substrait"])?;

    Ok(())
}

fn main() -> Result<(), Box<dyn Error>> {
    // for use in docker build where file changes can be wonky
    println!("cargo:rerun-if-env-changed=FORCE_REBUILD");

    #[cfg(feature = "protoc")]
    unsafe {
        std::env::set_var("PROTOC", protobuf_src::protoc())
    };

    let out_dir = PathBuf::from(env::var("OUT_DIR").unwrap());

    let protos = WalkDir::new(PROTO_ROOT)
        .into_iter()
        .filter_map(Result::ok)
        .filter(|entry| entry.file_type().is_file() || entry.file_type().is_symlink())
        .filter(|entry| {
            entry
                .path()
                .extension()
                .filter(|&extension| extension == "proto")
                .is_some()
        })
        .map(DirEntry::into_path)
        .inspect(|entry| {
            println!("cargo:rerun-if-changed={}", entry.display());
        })
        .collect::<Vec<_>>();

    let descriptor_path = out_dir.join("proto_descriptor.bin");

    #[cfg(feature = "serde")]
    serde(&protos, descriptor_path)?;

    #[cfg(not(feature = "serde"))]
    Config::new()
        .file_descriptor_set_path(&descriptor_path)
        .compile_protos(&protos, &[PROTO_ROOT])?;

    Ok(())
}
