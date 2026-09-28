#!/bin/sh
# SPDX-License-Identifier: Apache-2.0
set -eu

if [ "$#" -ne 1 ]; then
  echo "Usage: $0 <Substrait source directory>" >&2
  exit 1
fi

SOURCE_DIR=$(cd "$1" && pwd -P)
REPOSITORY_DIR=$(git -C "$SOURCE_DIR" rev-parse --show-toplevel)
REPOSITORY_DIR=$(cd "$REPOSITORY_DIR" && pwd -P)

SOURCE_STATUS=$(git -C "$SOURCE_DIR" status --porcelain --untracked-files=all -- .)
if [ -n "$SOURCE_STATUS" ]; then
  echo "Substrait sources must be clean to record their specification commit." >&2
  exit 1
fi

if [ "$SOURCE_DIR" = "$REPOSITORY_DIR" ]; then
  SPECIFICATION_COMMIT=$(git -C "$SOURCE_DIR" rev-parse HEAD)
elif [ "$SOURCE_DIR" = "$REPOSITORY_DIR/substrait" ]; then
  # A squashed subtree retains the upstream SHA in its squash commit's message.
  # Its tree must still match the sources being vendored, even after later commits.
  SUBTREE_COMMIT=$(git -C "$REPOSITORY_DIR" log -1 --format=%H \
    --grep='^git-subtree-dir: substrait/*$')
  if [ -z "$SUBTREE_COMMIT" ]; then
    echo "Cannot find the Substrait subtree's source commit." >&2
    exit 1
  fi
  SPECIFICATION_COMMIT=$(git -C "$REPOSITORY_DIR" show -s --format=%B "$SUBTREE_COMMIT" |
    sed -n 's/^git-subtree-split: //p')
  SOURCE_TREE=$(git -C "$REPOSITORY_DIR" rev-parse HEAD:substrait)
  SUBTREE_TREE=$(git -C "$REPOSITORY_DIR" rev-parse "$SUBTREE_COMMIT^{tree}")
  if [ "$SOURCE_TREE" != "$SUBTREE_TREE" ]; then
    echo "Substrait sources no longer match the imported specification commit." >&2
    exit 1
  fi
else
  echo "Expected a standalone Substrait checkout or the packaging repository's substrait subtree." >&2
  exit 1
fi

if [ "${#SPECIFICATION_COMMIT}" -ne 40 ] ||
   ! printf '%s\n' "$SPECIFICATION_COMMIT" | grep -Eq '^[0-9a-f]{40}$'; then
  echo "The specification commit must be a 40-character lowercase Git SHA." >&2
  exit 1
fi

cat <<EOF
<!-- SPDX-License-Identifier: Apache-2.0 -->
<!-- Generated with the vendored specification sources. Do not edit. -->
<Project>
  <PropertyGroup>
    <SubstraitGitHash>$SPECIFICATION_COMMIT</SubstraitGitHash>
  </PropertyGroup>
</Project>
EOF
