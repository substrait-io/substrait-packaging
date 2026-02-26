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
    * ...
  * TODO: rust_publish.yml: For releasing Rust specific artifacts
    * ...

Each of these workflows consumes a required substrait_version input. They are intended to be invoked by their parent workflow, but can be also be invoked directly to release specific artifacts.

The spec_released.yml workflow is a thin-wrapper around publish_artifacts.yml which is designed to be invoked whenever a new version of [substrait](https://github.com/substrait-io/substrait) specification is released.

Re-usable scripts for use across these workflows can be found in `/scripts`.

# Development

[Pixi](https://pixi.sh) is used to manage codegen tooling, both locally and in CI. Install it via the [official instructions](https://pixi.sh/latest/#installation).

## Python Code Generation

```sh
# Generate ANTLR Python parsers
pixi run python-generate-antlr

# Generate protobuf Python bindings
pixi run python-generate-protobuf
```