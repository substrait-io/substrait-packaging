#!/usr/bin/env sh

set -eu

SUBSTRAIT_HOME="${SUBSTRAIT_HOME:-../../substrait}"
PROTO_DIR="$SUBSTRAIT_HOME/proto/substrait"

echo "Generating Go protobuf files (Hybrid API) from $PROTO_DIR"

# Copy the Substrait protos into tmp so Buf's module path can reference them
# locally (see buf.yaml). The import paths in the protos are rooted at
# `substrait/`, so they must live under tmp/proto/substrait. The repository's
# fake "external" test protos are copied alongside them under tmp/proto/testprotos.
rm -rf tmp
mkdir -p tmp/proto/testprotos
cp -r "$PROTO_DIR" tmp/proto
cp ../../testprotos.proto tmp/proto/testprotos

# buf.gen.yaml writes the generated Go into ./substraitpb (and the AdvancedExtension
# message into ./substraitpb/extensions) using the Hybrid API
# (default_api_level=API_HYBRID). protoc-gen-go is run with `go run` at the
# google.golang.org/protobuf version in go.mod (see buf.gen.yaml).
buf generate --exclude-path tmp/proto/testprotos

# buf.gen.testprotos.yaml writes the test protos into ./internal/testprotos, used
# by the tests under ./tests. internal/ keeps them out of the public API.
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
