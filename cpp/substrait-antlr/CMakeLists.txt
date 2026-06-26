# SPDX-License-Identifier: Apache-2.0
cmake_minimum_required(VERSION 3.24)

project(
  SubstraitAntlr
  LANGUAGES CXX
  DESCRIPTION "Substrait ANTLR parsers for C++")

option(SUBSTRAIT_ANTLR_BUILD_TESTS "Build substrait-antlr tests"
       ${PROJECT_IS_TOP_LEVEL})

# Version of the ANTLR C++ runtime to build. Keep aligned with the `antlr` tool
# version in pixi.toml that generates the committed parsers — the generated code
# and the runtime must come from the same ANTLR release.
set(SUBSTRAIT_ANTLR_VERSION
    "4.13.2"
    CACHE STRING "ANTLR C++ runtime version")

# Build the ANTLR C++ runtime hermetically. This avoids depending on a system
# antlr runtime (which is not packaged for every platform) and guarantees the
# runtime matches the generator version, on every platform and for downstream
# consumers. A consumer that already provides an antlr4_static/antlr4_shared
# target can set SUBSTRAIT_ANTLR_USE_EXISTING_RUNTIME to skip this.
option(SUBSTRAIT_ANTLR_USE_EXISTING_RUNTIME
       "Link an antlr4 runtime target provided by the parent project" OFF)

if(NOT SUBSTRAIT_ANTLR_USE_EXISTING_RUNTIME)
  include(FetchContent)
  set(ANTLR_BUILD_CPP_TESTS
      OFF
      CACHE BOOL "" FORCE)
  set(ANTLR4_INSTALL
      ON
      CACHE BOOL "" FORCE)
  set(WITH_DEMO
      OFF
      CACHE BOOL "" FORCE)
  FetchContent_Declare(
    antlr4_runtime
    GIT_REPOSITORY https://github.com/antlr/antlr4.git
    GIT_TAG ${SUBSTRAIT_ANTLR_VERSION}
    GIT_SHALLOW TRUE
    SOURCE_SUBDIR runtime/Cpp)
  FetchContent_MakeAvailable(antlr4_runtime)
endif()

# Compile the committed, generated parser sources.
file(GLOB SUBSTRAIT_ANTLR_SOURCES CONFIGURE_DEPENDS
     "${CMAKE_CURRENT_SOURCE_DIR}/substraittype/*.cpp"
     "${CMAKE_CURRENT_SOURCE_DIR}/functestcase/*.cpp")

if(NOT SUBSTRAIT_ANTLR_SOURCES)
  message(
    FATAL_ERROR
      "No generated ANTLR sources found. "
      "Run `pixi run cpp-generate-antlr` (or generate_antlr.sh) first.")
endif()

add_library(substrait_antlr ${SUBSTRAIT_ANTLR_SOURCES})
add_library(substrait::antlr ALIAS substrait_antlr)
target_link_libraries(substrait_antlr PUBLIC antlr4_static)
target_compile_features(substrait_antlr PUBLIC cxx_std_17)
target_include_directories(
  substrait_antlr
  PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/substraittype>
         $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/functestcase>
         $<INSTALL_INTERFACE:include/substrait-antlr/substraittype>
         $<INSTALL_INTERFACE:include/substrait-antlr/functestcase>)

# --- Install / export ------------------------------------------------------
include(GNUInstallDirs)
include(CMakePackageConfigHelpers)

install(
  TARGETS substrait_antlr
  EXPORT SubstraitAntlrTargets
  ARCHIVE DESTINATION "${CMAKE_INSTALL_LIBDIR}"
  LIBRARY DESTINATION "${CMAKE_INSTALL_LIBDIR}"
  RUNTIME DESTINATION "${CMAKE_INSTALL_BINDIR}")

install(
  DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/substraittype"
            "${CMAKE_CURRENT_SOURCE_DIR}/functestcase"
  DESTINATION "${CMAKE_INSTALL_INCLUDEDIR}/substrait-antlr"
  FILES_MATCHING
  PATTERN "*.h")

install(
  EXPORT SubstraitAntlrTargets
  NAMESPACE substrait::
  DESTINATION "${CMAKE_INSTALL_LIBDIR}/cmake/SubstraitAntlr")

configure_package_config_file(
  "${CMAKE_CURRENT_SOURCE_DIR}/cmake/SubstraitAntlrConfig.cmake.in"
  "${CMAKE_CURRENT_BINARY_DIR}/SubstraitAntlrConfig.cmake"
  INSTALL_DESTINATION "${CMAKE_INSTALL_LIBDIR}/cmake/SubstraitAntlr")

install(FILES "${CMAKE_CURRENT_BINARY_DIR}/SubstraitAntlrConfig.cmake"
        DESTINATION "${CMAKE_INSTALL_LIBDIR}/cmake/SubstraitAntlr")

if(SUBSTRAIT_ANTLR_BUILD_TESTS)
  enable_testing()
  add_subdirectory(tests)
endif()
