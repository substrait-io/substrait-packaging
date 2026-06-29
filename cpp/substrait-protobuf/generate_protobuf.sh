#!/usr/bin/env sh

set -eu

# Vendors the Substrait protobuf definitions for the C++ package.
#
# Unlike the Go/Python protobuf artifacts, this package does NOT commit
# generated C++ sources: protobuf-generated C++ is ABI-coupled to a specific
# protobuf runtime, so committing `.pb.cc` would lock every consumer to the
# protobuf version we generated against. Instead we vendor the `.proto` files
# as-is and let the CMake target run the consumer's own `protoc` at build time
# (mirroring how substrait-cpp consumes the protos today). The vendored protos
# are committed to the published tag.

SUBSTRAIT_HOME="${SUBSTRAIT_HOME:-../../substrait}"
PROTO_DIR="$SUBSTRAIT_HOME/proto/substrait"

echo "Vendoring Substrait protos from $PROTO_DIR"

# Reset the vendored tree so deletions in the spec are reflected, then copy the
# protos in. Import paths in the protos are rooted at `substrait/`, so they must
# live under proto/substrait.
rm -rf proto
mkdir -p proto
cp -r "$PROTO_DIR" proto/
