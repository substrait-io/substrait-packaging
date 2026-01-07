#!/usr/bin/env sh

set -eou pipefail

SUBSTRAIT_HOME="${SUBSTRAIT_HOME:-../../substrait}"
PROTO_DIR="$SUBSTRAIT_HOME/proto/substrait"

echo "Generating Python protobuf files from $PROTO_DIR"

# Copy protos to tmp in order for Buf to access them
rm -rf tmp
mkdir -p tmp/proto/testprotos
cp -r $PROTO_DIR tmp/proto                   # Copy Substrait protos
cp -r testprotos.proto tmp/proto/testprotos  # Copy test protos
buf generate

# Clean target directories
rm -rf src/substrait
rm -rf tests/testprotos
mkdir -p src/substrait

# Copy generated code to final locations
cp -r tmp/gen/substrait/* src/substrait
cp -r tmp/gen/testprotos tests

# Cleanup
rm -rf tmp
