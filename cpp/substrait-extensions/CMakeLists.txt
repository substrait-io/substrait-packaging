# SPDX-License-Identifier: Apache-2.0
cmake_minimum_required(VERSION 3.24)

project(
  SubstraitExtensions
  LANGUAGES CXX
  DESCRIPTION "Substrait extension definitions, text schemas and test cases")

option(SUBSTRAIT_EXTENSIONS_BUILD_TESTS "Build substrait-extensions tests"
       ${PROJECT_IS_TOP_LEVEL})

# Data-only package: C++ has no canonical schema codegen for the extension /
# text YAMLs (unlike Rust's typify or Python's datamodel-code-generator), so
# this package only vendors and installs the raw spec data. Consumers do their
# own typed parsing. The substrait::extensions INTERFACE target carries the
# location of the data so a consumer can find the files at runtime.
set(SUBSTRAIT_EXTENSIONS_DATA_DIR "${CMAKE_CURRENT_SOURCE_DIR}")

add_library(substrait_extensions INTERFACE)
add_library(substrait::extensions ALIAS substrait_extensions)
# Export as substrait::extensions (matching the build-tree ALIAS) for
# find_package() consumers, instead of substrait::substrait_extensions.
set_target_properties(substrait_extensions PROPERTIES EXPORT_NAME extensions)

# Exposed to consumers (build tree). The install-tree path is set by the
# package config file for find_package() consumers.
set(SubstraitExtensions_DATA_DIR
    "${SUBSTRAIT_EXTENSIONS_DATA_DIR}"
    CACHE INTERNAL "Directory containing the Substrait extension data files")

include(GNUInstallDirs)
include(CMakePackageConfigHelpers)

set(SUBSTRAIT_EXTENSIONS_INSTALL_DATADIR
    "${CMAKE_INSTALL_DATADIR}/substrait")

install(TARGETS substrait_extensions EXPORT SubstraitExtensionsTargets)

# Install the vendored data. Missing dirs (e.g. on a scaffolding-only checkout)
# are tolerated so configuring without generated data does not error. Only the
# data dirs are installed — the package's own self-test lives under selftest/,
# kept out of the installed data tree.
install(
  DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/extensions"
            "${CMAKE_CURRENT_SOURCE_DIR}/examples"
            "${CMAKE_CURRENT_SOURCE_DIR}/text"
  DESTINATION "${SUBSTRAIT_EXTENSIONS_INSTALL_DATADIR}"
  OPTIONAL)
install(
  DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/tests/cases"
  DESTINATION "${SUBSTRAIT_EXTENSIONS_INSTALL_DATADIR}/tests"
  OPTIONAL)

install(
  EXPORT SubstraitExtensionsTargets
  NAMESPACE substrait::
  DESTINATION "${CMAKE_INSTALL_LIBDIR}/cmake/SubstraitExtensions")

configure_package_config_file(
  "${CMAKE_CURRENT_SOURCE_DIR}/cmake/SubstraitExtensionsConfig.cmake.in"
  "${CMAKE_CURRENT_BINARY_DIR}/SubstraitExtensionsConfig.cmake"
  INSTALL_DESTINATION "${CMAKE_INSTALL_LIBDIR}/cmake/SubstraitExtensions"
  PATH_VARS SUBSTRAIT_EXTENSIONS_INSTALL_DATADIR)

install(FILES "${CMAKE_CURRENT_BINARY_DIR}/SubstraitExtensionsConfig.cmake"
        DESTINATION "${CMAKE_INSTALL_LIBDIR}/cmake/SubstraitExtensions")

if(SUBSTRAIT_EXTENSIONS_BUILD_TESTS)
  enable_testing()
  add_subdirectory(selftest)
endif()
