#!/bin/sh
set -eu

# Point a vcpkg port at a newly published C++ release: set its version and pin
# its portfile REF to the release tag's dereferenced commit SHA. Used by the
# registry-update automation (cpp_registry.yml); safe to run by hand too.
#
# It edits only the version and REF — it never touches a port's PATCHES. When an
# upstream release first ships the CMake changes that the antlr patches carry
# (see cpp/substrait-antlr), drop that port's PATCHES block by hand once; from
# then on this script just bumps it like the others.

if [ "$#" -lt 3 ] || [ "$#" -gt 4 ]; then
  echo "Usage: $0 <package> <version> <commit-sha> [registry-dir]" >&2
  echo "  e.g. $0 substrait-protobuf 0.96.0 a59c0622... ." >&2
  exit 1
fi

PACKAGE="$1"   # substrait-protobuf | substrait-antlr | substrait-extensions
VERSION="$2"   # x.y.z (no leading 'v')
SHA="$3"       # dereferenced (peeled) commit SHA of the annotated release tag
REGISTRY_DIR="${4:-.}"

# vcpkg_from_git needs the commit a tag points at, not the tag object; validate
# it is a full 40-hex commit SHA so a tag-object SHA or short SHA can't slip in.
if ! printf '%s' "$SHA" | grep -qE '^[0-9a-f]{40}$'; then
  echo "Error: commit-sha must be a full 40-hex SHA, received: $SHA" >&2
  exit 2
fi

# Match the tag/version grammar used elsewhere (see scripts/tag_exists.sh).
if ! printf '%s' "$VERSION" | grep -qE '^[0-9]+\.[0-9]+\.[0-9]+$'; then
  echo "Error: version must be x.y.z, received: $VERSION" >&2
  exit 2
fi

PORT_DIR="$REGISTRY_DIR/ports/$PACKAGE"
MANIFEST="$PORT_DIR/vcpkg.json"
PORTFILE="$PORT_DIR/portfile.cmake"
for f in "$MANIFEST" "$PORTFILE"; do
  if [ ! -f "$f" ]; then
    echo "Error: $f not found (is '$PACKAGE' a port under $REGISTRY_DIR/ports?)" >&2
    exit 2
  fi
done

# --- vcpkg.json: set the published version.
tmp="$(mktemp)"
jq --arg v "$VERSION" '.["version-semver"] = $v' "$MANIFEST" > "$tmp"
mv "$tmp" "$MANIFEST"

# --- portfile.cmake: repoint the REF line's SHA and its trailing tag comment.
# Both port shapes keep the SHA and a `# cpp/<package>/vX.Y.Z` comment on the
# REF line, whether or not a PATCHES block follows:
#   REF <sha>) # cpp/substrait-protobuf/v0.89.0      (protobuf/extensions)
#   REF <sha> # cpp/substrait-antlr/v0.89.0          (antlr, PATCHES below)
SHA="$SHA" VERSION="$VERSION" PACKAGE="$PACKAGE" perl -i -pe '
  next unless /^\s*REF\s+[0-9a-f]{40}\b/;
  s/[0-9a-f]{40}/$ENV{SHA}/;
  s{(#\s*cpp/\Q$ENV{PACKAGE}\E/v)[^\s)]+}{$1 . $ENV{VERSION}}e;
' "$PORTFILE"

# Fail loudly if the REF did not end up as requested (e.g. an unexpected portfile
# shape) rather than silently publishing a stale pin.
if ! grep -qE "^\s*REF\s+$SHA\b" "$PORTFILE"; then
  echo "Error: failed to set REF to $SHA in $PORTFILE" >&2
  exit 3
fi

echo "Bumped $PACKAGE -> $VERSION @ $SHA"
