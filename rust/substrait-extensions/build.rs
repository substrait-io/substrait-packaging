// SPDX-License-Identifier: Apache-2.0

use std::{
    env,
    error::Error,
    fs::{self, File},
    io::Write,
    path::{Path, PathBuf},
};
use walkdir::{DirEntry, WalkDir};

// These directories are populated by `generate_extensions.sh`, which vendors the
// schemas and extension files from the Substrait specification into the crate.
const EXTENSIONS_ROOT: &str = "extensions";
const TEXT_ROOT: &str = "text";

/// Generate Rust types from the text-based JSON schemas (e.g.
/// `simple_extensions_schema.yaml`, `dialect_schema.yaml`).
fn text(out_dir: &Path) -> Result<(), Box<dyn Error>> {
    use heck::ToSnakeCase;
    use schemars::schema::{RootSchema, Schema};
    use typify::{TypeSpace, TypeSpaceSettings};

    let mut out_file = File::create(out_dir.join("substrait_text").with_extension("rs"))?;

    for schema_path in WalkDir::new(TEXT_ROOT)
        .into_iter()
        .filter_map(Result::ok)
        .filter(|entry| entry.file_type().is_file() || entry.file_type().is_symlink())
        .filter(|entry| {
            entry
                .path()
                .extension()
                .filter(|&extension| extension == "yaml") // Option::contains
                .is_some()
        })
        .map(DirEntry::into_path)
        .inspect(|entry| {
            println!("cargo:rerun-if-changed={}", entry.display());
        })
    {
        let schema = serde_yaml::from_reader::<_, RootSchema>(File::open(&schema_path)?)?;
        let metadata = schema.schema.metadata.as_ref();
        let id = metadata
            .and_then(|metadata| metadata.id.as_ref())
            .map(ToString::to_string)
            .unwrap_or_else(|| {
                panic!(
                    "$id missing in schema metadata (`{}`)",
                    schema_path.display()
                )
            });
        let title = metadata
            .and_then(|metadata| metadata.title.as_ref())
            .map(|title| title.to_snake_case())
            .unwrap_or_else(|| {
                panic!(
                    "title missing in schema metadata (`{}`)",
                    schema_path.display()
                )
            });
        let mut type_space = TypeSpace::new(
            TypeSpaceSettings::default()
                // Preserve field order in YAML objects (see Substrait #915) so
                // struct field ordinals remain stable across parsers.
                .with_map_type("::indexmap::IndexMap")
                .with_struct_builder(true)
                .with_derive("PartialEq".to_string()),
        );
        type_space.add_ref_types(schema.definitions)?;
        type_space.add_type(&Schema::Object(schema.schema))?;
        out_file.write_fmt(format_args!(
            r#"
#[doc = "Generated types for `{id}`"]
pub mod {title} {{
    {}
}}"#,
            prettyplease::unparse(&syn::parse2::<syn::File>(type_space.to_stream())?),
        ))?;
    }
    Ok(())
}

/// Embed the Substrait core extension YAML files and build a lookup map from
/// the file stem (e.g. `functions_arithmetic`) to the parsed extension.
fn extensions(out_dir: &Path) -> Result<(), Box<dyn Error>> {
    use std::collections::HashMap;

    let substrait_extensions_file = out_dir.join("extensions.in");
    let manifest_dir = PathBuf::from(env::var("CARGO_MANIFEST_DIR")?);

    let mut output = String::from(
        r#"// SPDX-License-Identifier: Apache-2.0
// Note that this file is auto-generated and auto-synced using `build.rs`. It is
// included in `extensions.rs`.
"#,
    );
    let mut map = HashMap::<String, String>::default();
    for extension in WalkDir::new(EXTENSIONS_ROOT)
        .into_iter()
        .filter_map(Result::ok)
        .filter(|entry| entry.file_type().is_file())
        .filter(|entry| {
            entry
                .path()
                .extension()
                .filter(|&extension| extension == "yaml")
                .is_some()
        })
        .map(DirEntry::into_path)
        .inspect(|entry| {
            println!("cargo:rerun-if-changed={}", entry.display());
        })
    {
        let name = extension
            .file_stem()
            .unwrap_or_default()
            .to_string_lossy()
            .to_string();
        let var_name = name.to_uppercase();
        output.push_str(&format!(
            r#"
/// Included source of the `{name}` extension YAML file.
pub const {var_name}: &str = include_str!("{}/{}");
"#,
            manifest_dir.display(),
            extension.display()
        ));
        map.insert(name, var_name);
    }

    // Add a static lookup map from extension name to parsed extension.
    output.push_str(
        r#"
use std::collections::HashMap;
use std::sync::LazyLock;
use crate::text::simple_extensions::SimpleExtensions;

/// Map with the Substrait core extensions, keyed by file stem (e.g.
/// `functions_arithmetic`).
pub static EXTENSIONS: LazyLock<HashMap<&'static str, SimpleExtensions>> = LazyLock::new(|| {
    let mut map = HashMap::new();"#,
    );
    for (name, var_name) in map {
        output.push_str(&format!(
            r#"
    map.insert("{name}", serde_yaml::from_str({var_name}).expect("a valid core extension"));"#
        ));
    }
    output.push_str(
        r#"
    map
});"#,
    );

    fs::write(substrait_extensions_file, output)?;
    Ok(())
}

fn main() -> Result<(), Box<dyn Error>> {
    println!("cargo:rerun-if-env-changed=FORCE_REBUILD");

    let out_dir = PathBuf::from(env::var("OUT_DIR")?);

    text(out_dir.as_path())?;
    extensions(out_dir.as_path())?;

    Ok(())
}
