# substrait-protobuf: vendored .proto files, C++ generated at build time against
# the consumer's own protobuf runtime (imported from the `protobuf` vcpkg port).
vcpkg_from_git(
    OUT_SOURCE_PATH SOURCE_PATH
    URL https://github.com/substrait-io/substrait-packaging
    REF 095562b0fe6f5f29509184cc6525510f7e0032b2) # cpp/substrait-protobuf/v0.92.0

vcpkg_cmake_configure(
    SOURCE_PATH "${SOURCE_PATH}/cpp/substrait-protobuf"
    OPTIONS -DSUBSTRAIT_PROTOBUF_BUILD_TESTS=OFF)

vcpkg_cmake_install()

vcpkg_cmake_config_fixup(PACKAGE_NAME SubstraitProtobuf CONFIG_PATH lib/cmake/SubstraitProtobuf)

# The generated headers install into include/ and the vendored .proto tree into
# share/; both are duplicated in the debug tree by the debug build. Drop the
# debug-tree copies — headers/data belong only under the shared release paths.
file(REMOVE_RECURSE
    "${CURRENT_PACKAGES_DIR}/debug/include"
    "${CURRENT_PACKAGES_DIR}/debug/share")

vcpkg_install_copyright(FILE_LIST "${SOURCE_PATH}/LICENSE")
