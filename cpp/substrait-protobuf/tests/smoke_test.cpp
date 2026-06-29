// SPDX-License-Identifier: Apache-2.0

// Includes a generated Substrait proto header and round-trips a message to
// confirm the generated C++ sources compile and link against the protobuf
// runtime.
#include "substrait/plan.pb.h"

#include <cassert>

int main() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  substrait::Plan plan;
  plan.mutable_version()->set_minor_number(42);

  std::string serialized;
  assert(plan.SerializeToString(&serialized));

  substrait::Plan parsed;
  assert(parsed.ParseFromString(serialized));
  assert(parsed.version().minor_number() == 42);

  google::protobuf::ShutdownProtobufLibrary();
  return 0;
}
