#!/usr/bin/env sh

set -eu

SUBSTRAIT_HOME="${SUBSTRAIT_HOME:-../../substrait}"
PROTO_DIR="$SUBSTRAIT_HOME/proto/substrait"

echo "Generating Go protobuf files (Hybrid API) from $PROTO_DIR"

# Copy protos to tmp in order for Buf to access them
rm -rf tmp
mkdir -p tmp/proto/testprotos
cp -r "$PROTO_DIR" tmp/proto
cp ../../testprotos.proto tmp/proto/testprotos

# Generate protos
buf generate --exclude-path tmp/proto/testprotos
buf generate --template buf.gen.testprotos.yaml --path tmp/proto/testprotos

# Prepend an SPDX license header to every generated file. protoc-gen-go emits its
# own "Code generated ... DO NOT EDIT." line as the first line; the SPDX header
# goes above it.
find substraitpb internal/testprotos -name '*.go' | while IFS= read -r f; do
  if ! head -n 1 "$f" | grep -q 'SPDX-License-Identifier'; then
    printf '// SPDX-License-Identifier: Apache-2.0\n\n' | cat - "$f" > "$f.tmp"
    mv "$f.tmp" "$f"
  fi
done

# Cleanup
rm -rf tmp
