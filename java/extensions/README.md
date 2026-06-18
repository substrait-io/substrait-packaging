# extensions

Packages Substrait extension files, along with associated test cases and schemas, as JAR
resources for the [Substrait](https://substrait.io/) specification.

Versions of this artifact correspond to Substrait [releases](https://github.com/substrait-io/substrait/releases). `vx.y.z` of `io.substrait:extensions` will contain the files from `vx.y.z` of the [substrait repository](https://github.com/substrait-io/substrait).

## Contents

Files are bundled on the classpath under the `substrait/` prefix:

- `substrait/extensions/` — Substrait extension YAML files (functions, types, type variations).
- `substrait/text/` — Substrait schema files (`simple_extensions_schema.yaml`, `dialect_schema.yaml`).
- `substrait/tests/cases/` — Substrait function test case files.

Maven coordinates:

```
io.substrait:extensions:x.y.z
```

## Usage

```java
import java.io.InputStream;

try (InputStream in =
    getClass().getClassLoader().getResourceAsStream("substrait/extensions/functions_arithmetic.yaml")) {
  // ...
}
```

## Generation and Publishing

Packaging and publishing is handled in the [substrait-packaging](https://github.com/substrait-io/substrait-packaging) repository.

When a new version of the Substrait specification is released, automation packages the extension files for that version and pushes them to GitHub with a tag formatted like `java/extensions/vx.y.z`. The automation then publishes that artifact to Maven Central.

### Local Generation

The artifact can be built locally to check packaging. Set up the Substrait specification at the
repository root (see `scripts/attach_subtree.sh`), then run:

```sh
cd java
./gradlew :extensions:build -Pversion=x.y.z
```
