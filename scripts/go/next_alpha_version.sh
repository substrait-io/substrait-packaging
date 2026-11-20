#!/bin/sh
set -eu

if [ "$#" -ne 2 ]; then
  echo "Usage: $0 <package> <version>" >&2
  exit 1
fi

PACKAGE="$1"   # e.g. substrait-protobuf, substrait-antlr
VERSION="$2"

# Strip leading 'v' from the base spec version if present.
VERSION="${VERSION#v}"

# Validate the base version matches the expected x.y.z format.
if ! echo "$VERSION" | grep -qE '^[0-9]+\.[0-9]+\.[0-9]+$'; then
  echo "Error: version must follow the format x.y.z, received: $VERSION" >&2
  exit 2
fi

# For Go modules a pushed version tag *is* the publish, so the repository's own
# tags are the source of truth for which alpha pre-releases already exist (more
# reliable than the module proxy, which may not list pre-releases). The caller
# must have fetched tags (the workflows check out with fetch-depth: 0).
#
# semver pre-release precedence orders v<base>-alpha < v<base>-alpha.1 < ... so
# the bare `-alpha` (no numeric suffix) is treated as index 0 and `-alpha.N` as
# index N. MAX stays -1 while no alpha release is found.
PREFIX="go/$PACKAGE/v${VERSION}-alpha"
MAX=-1
for tag in $(git tag -l "$PREFIX" "$PREFIX.*"); do
  suffix="${tag#"$PREFIX"}"
  case "$suffix" in
    "") idx=0 ;;            # bare -alpha
    .*) idx="${suffix#.}" ;; # -alpha.N
    *) continue ;;
  esac
  # Skip any non-numeric suffixes (e.g. -alpha.beta).
  case "$idx" in
    ''|*[!0-9]*) continue ;;
  esac
  if [ "$idx" -gt "$MAX" ]; then
    MAX="$idx"
  fi
done

# No prior alpha -> bare suffix; otherwise increment the highest index found.
if [ "$MAX" -lt 0 ]; then
  echo "${VERSION}-alpha"
else
  echo "${VERSION}-alpha.$((MAX + 1))"
fi
