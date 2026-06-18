# antlr

Generated Java [ANTLR](https://www.antlr.org/) bindings for the [Substrait](https://substrait.io/) specification.

The grammar definitions from which the code is generated can be found [here](https://github.com/substrait-io/substrait/tree/main/grammar).

Versions of this artifact correspond to Substrait [releases](https://github.com/substrait-io/substrait/releases). `vx.y.z` of `io.substrait:antlr` will contain code generated from `vx.y.z` of the [substrait repository](https://github.com/substrait-io/substrait).

## Package Usage

The generated lexers, parsers and visitors are available under the `io.substrait.antlr` package:

```java
import io.substrait.antlr.SubstraitTypeLexer;
import io.substrait.antlr.SubstraitTypeParser;
import io.substrait.antlr.FuncTestCaseLexer;
import io.substrait.antlr.FuncTestCaseParser;
```

Maven coordinates:

```
io.substrait:antlr:x.y.z
```

## Generation and Publishing

Code generation and publishing is handled in the [substrait-packaging](https://github.com/substrait-io/substrait-packaging) repository.

When a new version of the Substrait specification is released, automation generates ANTLR bindings for that version and pushes them to GitHub with a tag formatted like `java/antlr/vx.y.z`. The automation then publishes that code to Maven Central.

### Local Generation

The bindings can be generated locally to check ANTLR generation. Set up the Substrait
specification at the repository root (see `scripts/attach_subtree.sh`), then run:

```sh
cd java
./gradlew :antlr:build -Pversion=x.y.z
```
