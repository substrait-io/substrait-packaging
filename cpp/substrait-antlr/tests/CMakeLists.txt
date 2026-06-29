# SPDX-License-Identifier: Apache-2.0

# A minimal compile-and-run test that lexes and parses a type expression,
# proving the generated parsers and the ANTLR runtime link together correctly.
add_executable(substrait_antlr_smoke smoke_test.cpp)
target_link_libraries(substrait_antlr_smoke PRIVATE substrait::antlr)
target_compile_features(substrait_antlr_smoke PRIVATE cxx_std_17)

add_test(NAME substrait_antlr_smoke COMMAND substrait_antlr_smoke)
