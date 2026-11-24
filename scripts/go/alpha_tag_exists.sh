#!/bin/sh
set -eu

if [ "$#" -ne 1 ]; then
  echo "Usage: $0 <tag name>"
  exit 1
fi

TAG_NAME="$1"

# Tag names must follow go/<module>/vx.y.z-alpha.N
if ! echo "$TAG_NAME" | grep -qE '^go/[^/]+/v[0-9]+\.[0-9]+\.[0-9]+-alpha\.[0-9]+$'; then
  echo "Error: tag name must follow format go/<module>/vx.y.z-alpha.N, received: $TAG_NAME"
  exit 2
fi

if git show-ref --quiet --tags "$TAG_NAME"; then
  echo true
else
  echo false
fi
