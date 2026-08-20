// SPDX-License-Identifier: Apache-2.0

use prost_build::Config;
use std::{
    env,
    error::Error,
    path::{Path, PathBuf},
};
use walkdir::{DirEntry, WalkDir};

// The Substrait `.proto` files are vendored into this directory by
// `generate_protobuf.sh`, so they are shipped in the published crate and
// compiled at build time.
const PROTO_ROOT: &str = "proto";

/// Applies the configuration shared by every build variant:
///
/// - the descriptor-set output path,
/// - `prost::Name` impls (via `enable_type_names`) so consumers get
///   authoritative fully-qualified type names instead of reconstructing them
///   from Rust module paths, and
/// - with the `reflect` feature, `prost_reflect::ReflectMessage` derives that
///   read the crate's embedded `FILE_DESCRIPTOR_SET` for runtime introspection.
fn configure_common(
    config: &mut Config,
    protos: &[impl AsRef<Path>],
    descriptor_path: &Path,
) -> Result<(), Box<dyn Error>> {
    config.file_descriptor_set_path(descriptor_path);
    config.enable_type_names();

    #[cfg(feature = "protox")]
    {
        config.skip_protoc_run();
        let file_descriptors = protox::Compiler::new([PROTO_ROOT])?
            .include_source_info(true)
            .include_imports(true)
            .open_files(protos)?
            .encode_file_descriptor_set();
        std::fs::write(descriptor_path, file_descriptors)?;
    }

    #[cfg(feature = "reflect")]
    prost_reflect_build::Builder::new()
        .file_descriptor_set_path(descriptor_path)
        .file_descriptor_set_bytes("crate::FILE_DESCRIPTOR_SET")
        .configure(config, protos, &[PROTO_ROOT])?;

    let _ = protos;

    Ok(())
}

#[cfg(feature = "serde")]
/// Serialize and deserialize implementations for proto types using `pbjson`.
fn serde(
    protos: &[impl AsRef<std::path::Path>],
    descriptor_path: PathBuf,
) -> Result<(), Box<dyn Error>> {
    use pbjson_build::Builder;
    use std::fs;

    let mut cfg = Config::new();
    configure_common(&mut cfg, protos, &descriptor_path)?;
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
    {
        let mut config = Config::new();
        configure_common(&mut config, &protos, &descriptor_path)?;
        config.compile_protos(&protos, &[PROTO_ROOT])?;
    }

    Ok(())
}
