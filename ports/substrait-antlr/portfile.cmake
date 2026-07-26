# substrait-antlr: compiles the committed, generated ANTLR parser sources against
# the ANTLR C++ runtime from the vcpkg `antlr4` port.
#
# SUBSTRAIT_ANTLR_USE_EXISTING_RUNTIME=ON makes the package import that runtime via
# find_package(antlr4-runtime) rather than building it hermetically with FetchContent
# (which cannot run inside vcpkg's network-isolated build). That support is built into
# the package sources as of cpp/substrait-antlr/v0.89.0-alpha.1; earlier release tags
# needed local patches here, which are no longer required now the source handles it.
vcpkg_from_git(
    OUT_SOURCE_PATH SOURCE_PATH
    URL https://github.com/substrait-io/substrait-packaging
    REF 211313255c7c6959ae73d1b3ec15153cddd39dd0) # cpp/substrait-antlr/v0.99.0

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
