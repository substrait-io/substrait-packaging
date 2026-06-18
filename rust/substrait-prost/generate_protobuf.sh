#!/usr/bin/env sh
set -eu

SUBSTRAIT_HOME="${SUBSTRAIT_HOME:-../../substrait}"
PROTO_DIR="$SUBSTRAIT_HOME/proto"

echo "Vendoring Substrait protobuf definitions from $PROTO_DIR"

# Copy the Substrait protos into the crate so they are shipped in the published
# artifact and compiled at build time by build.rs.
rm -rf proto
mkdir -p proto
cp -r "$PROTO_DIR"/. proto/
