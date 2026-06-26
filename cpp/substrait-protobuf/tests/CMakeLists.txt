# SPDX-License-Identifier: Apache-2.0

# A minimal compile-and-run test that includes a generated proto header and
# instantiates a Substrait message, proving the target's generated sources and
# include paths are wired up correctly.
add_executable(substrait_proto_smoke smoke_test.cpp)
target_link_libraries(substrait_proto_smoke PRIVATE substrait::proto)
target_compile_features(substrait_proto_smoke PRIVATE cxx_std_17)

add_test(NAME substrait_proto_smoke COMMAND substrait_proto_smoke)
