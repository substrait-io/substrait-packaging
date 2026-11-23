#!/bin/sh
set -eu

if [ "$#" -ne 1 ]; then
  echo "Usage: $0 <tag name>" >&2
  exit 1
fi

TAG_NAME="$1"
EXISTS=$("$(dirname "$0")/tag_exists.sh" "$TAG_NAME")
if [ "$EXISTS" = true ]; then
  echo "Error: tag already exists: $TAG_NAME" >&2
  exit 1
fi

git tag -a "$TAG_NAME" -m "$TAG_NAME"
git push origin "refs/tags/$TAG_NAME"
