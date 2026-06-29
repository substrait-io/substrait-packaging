# substrait-extensions (C++)

The [Substrait](https://substrait.io/) extension definitions, text schemas and
function test cases, distributed as a CMake source package.

Versions of this package correspond to Substrait
[releases](https://github.com/substrait-io/substrait/releases): the tag
`cpp/substrait-extensions/vx.y.z` contains the data vendored from `vx.y.z` of
the [substrait repository](https://github.com/substrait-io/substrait).

## Data only

C++ has no canonical YAML/JSON schema code generation (unlike Rust's `typify`
or Python's `datamodel-code-generator`), so this package ships the **raw spec
data only** — no generated types. Typed parsing lives downstream in the
consumer. This mirrors the Go and Java extensions artifacts.

The package vendors:

- `extensions/` — extension definition YAML files
- `text/` — text schema YAML files (e.g. `simple_extensions_schema.yaml`)
- `tests/cases/` — function test case files

## Usage

```cmake
include(FetchContent)
FetchContent_Declare(
  substrait_extensions
  GIT_REPOSITORY https://github.com/substrait-io/substrait-packaging.git
  GIT_TAG cpp/substrait-extensions/vx.y.z
  SOURCE_SUBDIR cpp/substrait-extensions)
FetchContent_MakeAvailable(substrait_extensions)

# SubstraitExtensions_DATA_DIR points at the directory containing
# extensions/, text/ and tests/cases/.
target_compile_definitions(
  my_target PRIVATE "MY_DATA_DIR=\"${SubstraitExtensions_DATA_DIR}\"")
```

`find_package(SubstraitExtensions)` consumers get `SubstraitExtensions_DATA_DIR`
pointing at the installed `share/substrait` location instead. The package also
installs the files to `${CMAKE_INSTALL_DATADIR}/substrait`.

## Generation and Publishing

Generation and publishing are handled in the
[substrait-packaging](https://github.com/substrait-io/substrait-packaging)
repository. When a new spec version is released, automation vendors the data,
commits it, and pushes a `cpp/substrait-extensions/vx.y.z` tag.

### Local Generation

```sh
pixi run cpp-generate-extensions
```

`generate_extensions.sh` reads the data from `SUBSTRAIT_HOME` (defaults to
`../../substrait`).
