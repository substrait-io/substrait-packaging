#!/bin/sh
set -eu

if [ "$#" -ne 2 ]; then
  echo "Usage: $0 <crate> <version>"
  exit 1
fi

CRATE="$1"
VERSION="$2"

# Strip leading 'v' from version if present
VERSION="${VERSION#v}"

# Determine the crates.io sparse index path for the crate. See
# https://doc.rust-lang.org/cargo/reference/registry-index.html#index-files
LEN=$(printf '%s' "$CRATE" | wc -c | tr -d ' ')
case "$LEN" in
  1) DIR="1" ;;
  2) DIR="2" ;;
  3) DIR="3/$(printf '%s' "$CRATE" | cut -c1)" ;;
  *) DIR="$(printf '%s' "$CRATE" | cut -c1-2)/$(printf '%s' "$CRATE" | cut -c3-4)" ;;
esac

# Query the sparse index. A 404 means the crate has never been published.
RESPONSE=$(curl --fail --silent --header 'User-Agent: substrait-packaging' \
  "https://index.crates.io/$DIR/$CRATE" || true)

if [ -z "$RESPONSE" ]; then
  echo false
  exit 0
fi

# Each line is a JSON object describing a published version. Check for a
# non-yanked entry matching the requested version.
if echo "$RESPONSE" | jq --raw-output --arg v "$VERSION" \
  'select(.vers == $v and .yanked == false) | .vers' | grep -Fxq "$VERSION"; then
  echo true
else
  echo false
fi
