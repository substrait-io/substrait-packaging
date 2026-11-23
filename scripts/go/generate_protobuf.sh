#!/bin/sh
set -eu

MODULE="${1:-substrait-protobuf}"
case "$MODULE" in
  substrait-protobuf|substrait-protobuf-opaque) ;;
  *) echo "Usage: $0 [substrait-protobuf|substrait-protobuf-opaque]" >&2; exit 1 ;;
esac

cd "$(dirname "$0")/../../go/$MODULE"
PROTO_DIR="${SUBSTRAIT_HOME:-../../substrait}/proto"
echo "Generating $MODULE from $PROTO_DIR"
buf generate "$PROTO_DIR"

find substraitpb -name '*.go' | while IFS= read -r file; do
  if ! head -n 1 "$file" | grep -q 'SPDX-License-Identifier'; then
    printf '// SPDX-License-Identifier: Apache-2.0\n\n' | cat - "$file" > "$file.tmp"
    mv "$file.tmp" "$file"
  fi
done
