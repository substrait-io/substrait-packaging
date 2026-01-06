#!/usr/bin/env sh

set -eou pipefail

SUBSTRAIT_HOME="${SUBSTRAIT_HOME:-../substrait}"
PROTO_DIR="$SUBSTRAIT_HOME/proto/substrait"

echo "Generating Python protobuf files from $PROTO_DIR"

rm -rf tmp/proto
mkdir -p tmp/proto
cp -r "$PROTO_DIR" tmp/proto
buf generate
rm -rf tmp/proto