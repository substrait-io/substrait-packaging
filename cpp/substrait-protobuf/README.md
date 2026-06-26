# substrait-protobuf (C++)

Substrait protobuf bindings for C++, distributed as a CMake source package.

The protobuf definitions can be found [here](https://github.com/substrait-io/substrait/tree/main/proto/substrait).

Versions of this package correspond to Substrait [releases](https://github.com/substrait-io/substrait/releases): the tag `cpp/substrait-protobuf/vx.y.z` contains the protos vendored from `vx.y.z` of the [substrait repository](https://github.com/substrait-io/substrait).

## What this package ships

Unlike the Go and Python protobuf artifacts, this package does **not** ship
pre-generated C++ sources. Protobuf-generated C++ is ABI-coupled to a specific
protobuf runtime, so committing `.pb.cc` would lock every consumer to the
protobuf version we generated against. Instead, the package vendors the
`.proto` files and the `CMakeLists.txt` generates C++ at build time via
`protobuf_generate`, against **your** protobuf. This matches how substrait-cpp
consumes the protos today.

## Usage

Pull the package at a released tag with CMake `FetchContent` and link the
`substrait::proto` target:

```cmake
include(FetchContent)
FetchContent_Declare(
  substrait_protobuf
  GIT_REPOSITORY https://github.com/substrait-io/substrait-packaging.git
  GIT_TAG cpp/substrait-protobuf/vx.y.z
  SOURCE_SUBDIR cpp/substrait-protobuf)
FetchContent_MakeAvailable(substrait_protobuf)

target_link_libraries(my_target PRIVATE substrait::proto)
```

Generated headers preserve the proto layout, e.g.:

```cpp
#include "substrait/plan.pb.h"
```

A `find_package(Protobuf)` is required in your project (the package links
`protobuf::libprotobuf` transitively). The package also installs a
`find_package(SubstraitProtobuf)` config for non-FetchContent consumers.

## Generation and Publishing

Generation and publishing are handled in the
[substrait-packaging](https://github.com/substrait-io/substrait-packaging)
repository. When a new spec version is released, automation vendors the protos
for that version, commits them, and pushes a `cpp/substrait-protobuf/vx.y.z`
tag. Because the package is consumed directly from version-control tags,
pushing the tag publishes it.

### Local Generation

```sh
pixi run cpp-generate-protobuf
```

`generate_protobuf.sh` vendors the protos from `SUBSTRAIT_HOME` (defaults to
`../../substrait`).
