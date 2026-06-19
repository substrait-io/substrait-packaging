#!/bin/sh
set -eu

if [ "$#" -ne 2 ]; then
  echo "Usage: $0 <crate> <version>" >&2
  exit 1
fi

CRATE="$1"
VERSION="$2"

# Strip leading 'v' from version if present (crates.io versions are bare semver).
VERSION="${VERSION#v}"

# Validate the base version matches the expected x.y.z format.
if ! echo "$VERSION" | grep -qE '^[0-9]+\.[0-9]+\.[0-9]+$'; then
  echo "Error: version must follow the format x.y.z, received: $VERSION" >&2
  exit 2
fi

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

# Find the highest existing alpha index for this base version among non-yanked
# releases. The bare `<base>-alpha` (no numeric suffix) is treated as index 0;
# `<base>-alpha.N` as index N. MAX stays -1 while no alpha release is found.
MAX=-1
if [ -n "$RESPONSE" ]; then
  INDICES=$(echo "$RESPONSE" | jq --raw-output --arg base "$VERSION" '
    select(.yanked == false)
    | .vers
    | if . == ($base + "-alpha") then "0"
      elif startswith($base + "-alpha.") then ltrimstr($base + "-alpha.")
      else empty end
  ')
  for idx in $INDICES; do
    # Skip any non-numeric suffixes (e.g. <base>-alpha.beta).
    case "$idx" in
      ''|*[!0-9]*) continue ;;
    esac
    if [ "$idx" -gt "$MAX" ]; then
      MAX="$idx"
    fi
  done
fi

# No prior alpha -> bare suffix; otherwise increment the highest index found.
if [ "$MAX" -lt 0 ]; then
  echo "${VERSION}-alpha"
else
  echo "${VERSION}-alpha.$((MAX + 1))"
fi
