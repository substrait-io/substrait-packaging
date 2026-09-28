#!/usr/bin/env sh

set -eu

SUBSTRAIT_HOME="${SUBSTRAIT_HOME:-../../substrait}"
PROTO_DIR="$SUBSTRAIT_HOME/proto/substrait"

echo "Generating Go protobuf files (Opaque API) from $PROTO_DIR"

# Copy the Substrait protos into tmp so Buf's module path can reference them
# locally (see buf.yaml). The import paths in the protos are rooted at
# `substrait/`, so they must live under tmp/proto/substrait.
rm -rf tmp
mkdir -p tmp/proto
cp -r "$PROTO_DIR" tmp/proto

# buf.gen.yaml writes the generated Go into ./substraitpb (and the AdvancedExtension
# message into ./substraitpb/extensions). This module uses the Opaque API
# (default_api_level=API_OPAQUE). Remote plugin execution means no local protoc
# or protoc-gen-go is required.
buf generate

# Prepend an SPDX license header to every generated file. protoc-gen-go emits its
# own "Code generated ... DO NOT EDIT." line as the first line; the SPDX header
# goes above it.
find substraitpb -name '*.go' | while IFS= read -r f; do
  if ! head -n 1 "$f" | grep -q 'SPDX-License-Identifier'; then
    printf '// SPDX-License-Identifier: Apache-2.0\n\n' | cat - "$f" > "$f.tmp"
    mv "$f.tmp" "$f"
  fi
done

# Cleanup
rm -rf tmp
