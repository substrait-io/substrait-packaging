# substrait-protobuf

Generated Java protobuf bindings for the [Substrait](https://substrait.io/) specification.

The protobuf definitions from which the code is generated can be found [here](https://github.com/substrait-io/substrait/tree/main/proto/substrait).

Versions of this artifact correspond to Substrait [releases](https://github.com/substrait-io/substrait/releases). `vx.y.z` of substrait-protobuf will contain code generated from `vx.y.z` of the [substrait repository](https://github.com/substrait-io/substrait).

## Package Usage

The generated code is available under the `io.substrait.proto` package:

```java
import io.substrait.proto.Plan;
import io.substrait.proto.Type;
import io.substrait.proto.Expression;
```

Maven coordinates:

```
io.substrait:substrait-protobuf:x.y.z
```

## Generation and Publishing

Code generation and publishing is handled in the [substrait-packaging](https://github.com/substrait-io/substrait-packaging) repository.

When a new version of the Substrait specification is released, automation generates protobuf bindings for that version and pushes them to GitHub with a tag formatted like `java/substrait-protobuf/vx.y.z`. The automation then publishes that code to Maven Central.

### Local Generation

The bindings can be generated locally to check protobuf generation. Set up the Substrait
specification at the repository root (see `scripts/attach_subtree.sh`), then run:

```sh
cd java
./gradlew :substrait-protobuf:build -Pversion=x.y.z
```
