# substrait-antlr: compiles the committed, generated ANTLR parser sources.
#
# The upstream CMakeLists builds the ANTLR C++ runtime hermetically via
# FetchContent, which cannot run inside vcpkg's network-isolated build. The
# patches below make it consume the runtime from the `antlr4` port instead:
#   * use-vcpkg-antlr-runtime.patch   -> find_package(antlr4-runtime) + link the
#                                        antlr4_static/antlr4_shared target it
#                                        provides (selected by triplet linkage).
#   * find-dependency-antlr-runtime.patch -> find_dependency(antlr4-runtime) in
#                                        the installed SubstraitAntlrConfig so
#                                        find_package(SubstraitAntlr) consumers
#                                        pull the runtime target transitively.
# Both changes are recommended upstream so future release tags drop these patches
# (see the registry README, "Release maintenance").
vcpkg_from_git(
    OUT_SOURCE_PATH SOURCE_PATH
    URL https://github.com/substrait-io/substrait-packaging
    REF 5420bfe26717eec7f33a4e51a22da2bb64a3cbfb # cpp/substrait-antlr/v0.97.0-alpha
    PATCHES
        use-vcpkg-antlr-runtime.patch
        find-dependency-antlr-runtime.patch)

vcpkg_cmake_configure(
    SOURCE_PATH "${SOURCE_PATH}/cpp/substrait-antlr"
    OPTIONS
        -DSUBSTRAIT_ANTLR_USE_EXISTING_RUNTIME=ON
        -DSUBSTRAIT_ANTLR_BUILD_TESTS=OFF)

vcpkg_cmake_install()

vcpkg_cmake_config_fixup(PACKAGE_NAME SubstraitAntlr CONFIG_PATH lib/cmake/SubstraitAntlr)

# Headers belong only under the shared include/; drop the debug-tree duplicates.
file(REMOVE_RECURSE
    "${CURRENT_PACKAGES_DIR}/debug/include"
    "${CURRENT_PACKAGES_DIR}/debug/share")

vcpkg_install_copyright(FILE_LIST "${SOURCE_PATH}/LICENSE")
