#!/bin/sh
set -eu

if [ "$#" -ne 2 ]; then
  echo "Usage: $0 <package id> <version>"
  exit 1
fi

PACKAGE_ID="$1"
VERSION="$2"

# Strip leading 'v' from version if present
VERSION="${VERSION#v}"

# Query the v3 flat container index, which lists every published version of a
# package. Package ids are lowercased in the URL. A 404 means the package has
# never been published.
LOWER_ID=$(echo "$PACKAGE_ID" | tr '[:upper:]' '[:lower:]')
RESPONSE=$(curl --fail --silent \
  "https://api.nuget.org/v3-flatcontainer/$LOWER_ID/index.json" || true)

if [ -z "$RESPONSE" ]; then
  echo false
  exit 0
fi

# Check if the list of versions includes the given $VERSION
if echo "$RESPONSE" | jq --raw-output '.versions[]' | grep -Fx "$VERSION" > /dev/null; then
  echo true
else
  echo false
fi
