# substrait-antlr (C++)

ANTLR-generated C++ parsers for the [Substrait](https://substrait.io/) grammar,
distributed as a CMake source package.

The grammar can be found [here](https://github.com/substrait-io/substrait/tree/main/grammar).
Versions of this package correspond to Substrait
[releases](https://github.com/substrait-io/substrait/releases): the tag
`cpp/substrait-antlr/vx.y.z` contains parsers generated from `vx.y.z` of the
[substrait repository](https://github.com/substrait-io/substrait).

Two parser sets are generated, mirroring the other language targets:

- `substraittype/` — the Substrait type grammar (`SubstraitType.g4`), with
  listener and visitor, in the `substraittype` C++ namespace.
- `functestcase/` — the function test case grammar (`FuncTestCaseParser.g4`),
  visitor-only, in the `functestcase` C++ namespace.

The generated sources are committed (using the **stock** ANTLR C++ target — no
fork, unlike the Rust crate) so consumers don't need the ANTLR tool or a JVM.

## ANTLR C++ runtime

The package builds the ANTLR C++ runtime hermetically via CMake `FetchContent`
(pinned to the ANTLR version the parsers were generated with — see
`SUBSTRAIT_ANTLR_VERSION` in `CMakeLists.txt`). This keeps the runtime in lock
step with the generated code on every platform, with no system ANTLR runtime
required. A consumer that already builds an `antlr4_static`/`antlr4_shared`
target can set `-DSUBSTRAIT_ANTLR_USE_EXISTING_RUNTIME=ON` to reuse it.

## Usage

```cmake
include(FetchContent)
FetchContent_Declare(
  substrait_antlr
  GIT_REPOSITORY https://github.com/substrait-io/substrait-packaging.git
  GIT_TAG cpp/substrait-antlr/vx.y.z
  SOURCE_SUBDIR cpp/substrait-antlr)
FetchContent_MakeAvailable(substrait_antlr)

target_link_libraries(my_target PRIVATE substrait::antlr)
```

```cpp
#include "SubstraitTypeLexer.h"
#include "SubstraitTypeParser.h"
```

## Generation and Publishing

Generation and publishing are handled in the
[substrait-packaging](https://github.com/substrait-io/substrait-packaging)
repository. When a new spec version is released, automation regenerates the
parsers, commits them, and pushes a `cpp/substrait-antlr/vx.y.z` tag.

### Local Generation

```sh
pixi run cpp-generate-antlr
```

`generate_antlr.sh` reads the grammar from `SUBSTRAIT_HOME` (defaults to
`../../substrait`) and requires the `antlr` tool (provided by pixi).
