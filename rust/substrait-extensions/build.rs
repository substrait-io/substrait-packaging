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

    let manifest_dir = PathBuf::from(env::var("CARGO_MANIFEST_DIR")?);
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

        // Also expose the raw schema source, so consumers that validate against
        // the JSON schema (rather than the generated types) don't have to vendor
        // it themselves. The const is named after the file stem, e.g.
        // `simple_extensions_schema.yaml` -> `SIMPLE_EXTENSIONS_SCHEMA`.
        let file_name = schema_path
            .file_name()
            .unwrap_or_default()
            .to_string_lossy()
            .to_string();
        let const_name = schema_path
            .file_stem()
            .unwrap_or_default()
            .to_string_lossy()
            .to_uppercase();
        out_file.write_fmt(format_args!(
            r#"
#[doc = "Raw source of the `{file_name}` text schema."]
pub const {const_name}: &str = include_str!({:?});
"#,
            manifest_dir.join(&schema_path)
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
    // Collect the extension files up front and sort them so the generated code
    // (in particular the `SIMPLE_EXTENSIONS` slice below) is deterministic and
    // independent of filesystem iteration order.
    let mut extension_paths: Vec<PathBuf> = WalkDir::new(EXTENSIONS_ROOT)
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
        .collect();
    extension_paths.sort();

    let mut map = HashMap::<String, String>::default();
    // `(urn, const_name)` pairs in sorted order, for the `SIMPLE_EXTENSIONS`
    // slice that maps each extension's URN to its raw YAML source.
    let mut urns: Vec<(String, String)> = Vec::new();
    for extension in &extension_paths {
        println!("cargo:rerun-if-changed={}", extension.display());

        let name = extension
            .file_stem()
            .unwrap_or_default()
            .to_string_lossy()
            .to_string();
        let var_name = name.to_uppercase();
        // The path is emitted via `{:?}` (Debug) so that backslashes in
        // Windows paths are escaped into a valid Rust string literal.
        output.push_str(&format!(
            r#"
/// Included source of the `{name}` extension YAML file.
pub const {var_name}: &str = include_str!({:?});
"#,
            manifest_dir.join(extension)
        ));

        // Extract the top-level `urn` field (a required property of every
        // extension file) so the file can be looked up by its identifier.
        let value = serde_yaml::from_str::<serde_yaml::Value>(&fs::read_to_string(extension)?)?;
        let urn = value
            .get("urn")
            .and_then(serde_yaml::Value::as_str)
            .unwrap_or_else(|| panic!("`urn` missing in `{}`", extension.display()))
            .to_string();
        urns.push((urn, var_name.clone()));

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
});
"#,
    );

    // Add a slice of every core extension as `(urn, raw YAML source)` pairs,
    // keyed by the top-level `urn` field and referencing the raw-source consts
    // emitted above. This lets consumers that work with the raw YAML (e.g. to
    // validate against the JSON schema) enumerate and resolve extensions by URN
    // without re-parsing.
    output.push_str(
        r#"
/// All Substrait core extensions as `(urn, raw YAML source)` pairs, where `urn`
/// is the value of the extension file's top-level `urn` field.
pub static SIMPLE_EXTENSIONS: &[(&str, &str)] = &["#,
    );
    for (urn, var_name) in &urns {
        output.push_str(&format!(
            r#"
    ("{urn}", {var_name}),"#
        ));
    }
    output.push_str(
        r#"
];
"#,
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
