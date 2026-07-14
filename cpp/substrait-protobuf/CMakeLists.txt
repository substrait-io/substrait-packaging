# SPDX-License-Identifier: Apache-2.0
cmake_minimum_required(VERSION 3.24)

project(
  SubstraitProtobuf
  LANGUAGES CXX
  DESCRIPTION "Substrait protobuf bindings for C++")

# C++ protobuf generated code is ABI-coupled to a protobuf runtime, so this
# package vendors the `.proto` files (see generate_protobuf.sh) and generates
# C++ here, against the consumer's own protobuf via protobuf_generate.
#
# CONFIG mode uses protobuf's own CMake package (protobuf-config.cmake), which
# ships protobuf_generate and the protobuf::libprotobuf / protobuf::protoc
# imported targets. This is more reliable than CMake's bundled FindProtobuf
# module, which fails to locate a conda/abseil-based protobuf install.
find_package(Protobuf CONFIG REQUIRED)

option(SUBSTRAIT_PROTOBUF_BUILD_TESTS
       "Build substrait-protobuf tests" ${PROJECT_IS_TOP_LEVEL})

# The vendored protos live under proto/substrait/**; import paths are rooted at
# `substrait/`, so proto/ is the import root.
set(SUBSTRAIT_PROTO_ROOT "${CMAKE_CURRENT_SOURCE_DIR}/proto")
file(GLOB_RECURSE SUBSTRAIT_PROTO_FILES CONFIGURE_DEPENDS
     "${SUBSTRAIT_PROTO_ROOT}/substrait/*.proto")

if(NOT SUBSTRAIT_PROTO_FILES)
  message(
    FATAL_ERROR
      "No vendored .proto files found under ${SUBSTRAIT_PROTO_ROOT}. "
      "Run `pixi run cpp-generate-protobuf` (or generate_protobuf.sh) first.")
endif()

set(SUBSTRAIT_PROTO_GEN_DIR "${CMAKE_CURRENT_BINARY_DIR}/generated")
file(MAKE_DIRECTORY "${SUBSTRAIT_PROTO_GEN_DIR}")

add_library(substrait_proto)
add_library(substrait::proto ALIAS substrait_proto)
# Export as substrait::proto (matching the build-tree ALIAS) for find_package()
# consumers, instead of the default substrait::substrait_proto.
set_target_properties(substrait_proto PROPERTIES EXPORT_NAME proto)

# Generate the C++ sources into the build tree and attach them to the target.
protobuf_generate(
  TARGET substrait_proto
  LANGUAGE cpp
  IMPORT_DIRS "${SUBSTRAIT_PROTO_ROOT}"
  PROTOC_OUT_DIR "${SUBSTRAIT_PROTO_GEN_DIR}"
  PROTOS ${SUBSTRAIT_PROTO_FILES})

target_include_directories(
  substrait_proto
  PUBLIC $<BUILD_INTERFACE:${SUBSTRAIT_PROTO_GEN_DIR}>
         $<INSTALL_INTERFACE:include>)
target_link_libraries(substrait_proto PUBLIC protobuf::libprotobuf)
target_compile_features(substrait_proto PUBLIC cxx_std_17)

# --- Install / export ------------------------------------------------------
# Lets the package be consumed via find_package(SubstraitProtobuf) in addition
# to FetchContent/add_subdirectory. Generated headers preserve the
# substrait/...pb.h layout under the install include dir.
include(GNUInstallDirs)
include(CMakePackageConfigHelpers)

install(
  TARGETS substrait_proto
  EXPORT SubstraitProtobufTargets
  ARCHIVE DESTINATION "${CMAKE_INSTALL_LIBDIR}"
  LIBRARY DESTINATION "${CMAKE_INSTALL_LIBDIR}"
  RUNTIME DESTINATION "${CMAKE_INSTALL_BINDIR}")

# Generated headers mirror the proto tree (substrait/algebra.pb.h, ...).
install(
  DIRECTORY "${SUBSTRAIT_PROTO_GEN_DIR}/substrait"
  DESTINATION "${CMAKE_INSTALL_INCLUDEDIR}"
  FILES_MATCHING
  PATTERN "*.pb.h")

# The vendored protos are installed too, so consumers can re-import them.
install(DIRECTORY "${SUBSTRAIT_PROTO_ROOT}/substrait"
        DESTINATION "${CMAKE_INSTALL_DATADIR}/substrait/proto")

install(
  EXPORT SubstraitProtobufTargets
  NAMESPACE substrait::
  DESTINATION "${CMAKE_INSTALL_LIBDIR}/cmake/SubstraitProtobuf")

configure_package_config_file(
  "${CMAKE_CURRENT_SOURCE_DIR}/cmake/SubstraitProtobufConfig.cmake.in"
  "${CMAKE_CURRENT_BINARY_DIR}/SubstraitProtobufConfig.cmake"
  INSTALL_DESTINATION "${CMAKE_INSTALL_LIBDIR}/cmake/SubstraitProtobuf")

install(FILES "${CMAKE_CURRENT_BINARY_DIR}/SubstraitProtobufConfig.cmake"
        DESTINATION "${CMAKE_INSTALL_LIBDIR}/cmake/SubstraitProtobuf")

if(SUBSTRAIT_PROTOBUF_BUILD_TESTS)
  enable_testing()
  add_subdirectory(tests)
endif()
