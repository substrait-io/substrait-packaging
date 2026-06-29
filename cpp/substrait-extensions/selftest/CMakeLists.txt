# SPDX-License-Identifier: Apache-2.0

# Verifies a known extension data file is resolvable under the data dir exposed
# by the package, confirming the vendored data is present and locatable.
add_executable(substrait_extensions_smoke smoke_test.cpp)
target_compile_features(substrait_extensions_smoke PRIVATE cxx_std_17)
target_compile_definitions(
  substrait_extensions_smoke
  PRIVATE "SUBSTRAIT_EXTENSIONS_DATA_DIR=\"${SubstraitExtensions_DATA_DIR}\"")

add_test(NAME substrait_extensions_smoke COMMAND substrait_extensions_smoke)
