#!/bin/sh
set -eu

MODULE="${1:-substrait-protobuf}"
case "$MODULE" in
  substrait-protobuf|substrait-protobuf-opaque) ;;
  *) echo "Usage: $0 [substrait-protobuf|substrait-protobuf-opaque]" >&2; exit 1 ;;
esac

cd "$(dirname "$0")/../../go/$MODULE"
PROTO_DIR="${SUBSTRAIT_HOME:-../../substrait}/proto/substrait"
echo "Generating $MODULE from $PROTO_DIR"

# Buf resolves imports rooted at substrait/ from this temporary module.
trap 'rm -rf tmp' EXIT
rm -rf tmp
mkdir -p tmp/proto
cp -R "$PROTO_DIR" tmp/proto/
buf generate

find substraitpb -name '*.go' | while IFS= read -r file; do
  if ! head -n 1 "$file" | grep -q 'SPDX-License-Identifier'; then
    printf '// SPDX-License-Identifier: Apache-2.0\n\n' | cat - "$file" > "$file.tmp"
    mv "$file.tmp" "$file"
  fi
done
