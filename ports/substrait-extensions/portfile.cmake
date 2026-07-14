# substrait-extensions: data-only package. No compiled artifacts — installs the
# vendored spec data (extensions/, text/, tests/cases/) plus an INTERFACE target
# and a SubstraitExtensions_DATA_DIR variable via find_package(SubstraitExtensions).
vcpkg_from_git(
    OUT_SOURCE_PATH SOURCE_PATH
    URL https://github.com/substrait-io/substrait-packaging
    REF 24b8a8cbfd5155dc405408a415a3bbfb93bc0786) # cpp/substrait-extensions/v0.96.0-alpha

vcpkg_cmake_configure(
    SOURCE_PATH "${SOURCE_PATH}/cpp/substrait-extensions"
    OPTIONS -DSUBSTRAIT_EXTENSIONS_BUILD_TESTS=OFF)

vcpkg_cmake_install()

vcpkg_cmake_config_fixup(PACKAGE_NAME SubstraitExtensions CONFIG_PATH lib/cmake/SubstraitExtensions)

# Data-only: no compiled artifacts. config_fixup moves the CMake package into
# share/, leaving an empty lib/; drop it along with the (empty) debug tree so no
# empty directories are shipped.
file(REMOVE_RECURSE "${CURRENT_PACKAGES_DIR}/debug" "${CURRENT_PACKAGES_DIR}/lib")

# This package installs spec data and a CMake config, but no headers under
# include/ — that is intentional, not a broken install.
set(VCPKG_POLICY_EMPTY_INCLUDE_FOLDER enabled)

vcpkg_install_copyright(FILE_LIST "${SOURCE_PATH}/LICENSE")
