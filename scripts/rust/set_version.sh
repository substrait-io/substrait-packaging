#!/bin/sh
set -eu

if [ "$#" -ne 2 ]; then
  echo "Usage: $0 <crate-dir> <version>"
  exit 1
fi

CRATE_DIR="$1"
VERSION="$2"

# Strip leading 'v' from version (crates.io versions are bare semver).
VERSION="${VERSION#v}"

# Validate the version matches the expected x.y.z format.
if ! echo "$VERSION" | grep -qE '^[0-9]+\.[0-9]+\.[0-9]+$'; then
  echo "Error: version must follow the format x.y.z, received: $VERSION"
  exit 2
fi

MANIFEST="$CRATE_DIR/Cargo.toml"
if [ ! -f "$MANIFEST" ]; then
  echo "Error: $MANIFEST not found"
  exit 1
fi

# Replace the first `version = "..."` line (the package version) in the
# manifest. The leading anchor avoids touching dependency version specifiers.
sed -i.bak "s/^version = \".*\"/version = \"$VERSION\"/" "$MANIFEST"
rm -f "$MANIFEST.bak"

echo "Set $MANIFEST version to $VERSION"
