#!/bin/sh
set -eu

if [ "$#" -ne 1 ]; then
  echo "Usage: $0 <tag name>"
  exit 1
fi

TAG_NAME="$1"

# Extract version from tag name (format: <language>/<repo>/vx.y.z)
# Requires exactly 2 path components before the version
VERSION=$(echo "$TAG_NAME" | sed -nE 's|^[^/]+/[^/]+/(v.*)$|\1|p')

# Accept stable versions and prereleases such as vx.y.z-alpha.1.
if ! echo "$VERSION" | grep -qE '^v[0-9]+\.[0-9]+\.[0-9]+(-[0-9A-Za-z]+([.-][0-9A-Za-z]+)*)?$'; then
  echo "Error: tag name must follow format <language>/<repo>/vx.y.z[-prerelease], received: $TAG_NAME" >&2
  exit 2
fi

if git show-ref --verify --quiet "refs/tags/$TAG_NAME"; then
    echo true
else
    echo false
fi