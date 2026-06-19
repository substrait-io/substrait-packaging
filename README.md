# Substrait Packaging

Machinery for releasing Substrait code artifacts based on specification releases across multiple languages. This includes things like:
* Generated Protobuf Bindings
* Generated ANTLR Bindings
* Generated YAML Bindings

# How It Works
Artifacts are generated and published using a hierarchy of GitHub Actions:

* publish_artifacts.yml: For releasing artifacts across all languages
  * TODO: java_publish.yml: For releasing Java specific artifacts
    * ...
  * python_publish.yml: For releasing Python specific artifacts
    * python_antlr.yml
    * python_protobuf.yml
    * python_extensions.yml
  * rust_publish.yml: For releasing Rust specific artifacts
    * rust_antlr.yml
    * rust_protobuf.yml
    * rust_extensions.yml

Each of these workflows consumes a required substrait_version input. They are intended to be invoked by their parent workflow, but can be also be invoked directly to release specific artifacts.

The spec_released.yml workflow is a thin-wrapper around publish_artifacts.yml which is designed to be invoked whenever a new version of [substrait](https://github.com/substrait-io/substrait) specification is released.

The ci_python.yml and ci_rust.yml workflows run on pull requests and pushes to `main`. They validate the packaging machinery against the most recent substrait spec release by running the same generate + build + test steps as the publish workflows, but without versioning, committing, tagging or publishing. This catches changes that would break a real release before they are merged. Each only runs when its language's relevant paths change (via a `paths` filter), and a specific spec version can be validated on demand via the `workflow_dispatch` `substrait_version` input.

Re-usable scripts for use across these workflows can be found in `/scripts`.

# Development

[Pixi](https://pixi.sh) is used to manage codegen tooling, both locally and in CI. Install it via the [official instructions](https://pixi.sh/latest/#installation).

```sh
# Install dependencies and update pixi.lock
pixi install
```

## Python Code Generation

```sh
# Generate substrait-antlr Python Package
pixi run python-generate-antlr

# Generate substrait-protobuf Python Package
pixi run python-generate-protobuf

# Generate substrait-extensions Python Package
pixi run python-generate-extensions
```

## Rust Code Generation

```sh
# Generate substrait-antlr Rust crate (requires java; downloads a forked ANTLR JAR)
pixi run rust-generate-antlr

# Vendor protobuf definitions for the substrait-prost Rust crate
pixi run rust-generate-prost

# Package Substrait extensions files for the substrait-extensions Rust crate
pixi run rust-generate-extensions
```

The protobuf and extensions crates generate their Rust code at build time (with
`prost-build` and `typify` respectively), so the generation scripts only vendor
the spec inputs into the crate; building `substrait-prost` requires `protoc`.
The ANTLR parsers cannot be generated at build time (the Rust target needs a
forked ANTLR build and Java), so they are committed by the generation script.