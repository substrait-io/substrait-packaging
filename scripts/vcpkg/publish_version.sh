#!/bin/sh
set -eu

# Publish a C++ release to the vcpkg registry branch: bump the port, append the
# version to the versions DB (vcpkg x-add-version), and push to the registry
# branch. Idempotent, and safe to run concurrently for different packages — on a
# rejected push it re-syncs to the remote branch tip and re-applies, so the
# per-package runs of a spec release serialize onto the branch without conflicts
# (the shared versions/baseline.json is regenerated from the current tip each
# time rather than textually merged).
#
# Run from a checkout of the registry branch whose `origin` is the packaging
# repo. Requires VCPKG_ROOT set (for `vcpkg x-add-version`) and push credentials
# configured on `origin`.

if [ "$#" -lt 3 ] || [ "$#" -gt 4 ]; then
  echo "Usage: $0 <package> <version> <commit-sha> [registry-dir]" >&2
  exit 1
fi

PACKAGE="$1"
VERSION="$2"
SHA="$3"
REGISTRY_DIR="${4:-.}"

REGISTRY_BRANCH="${REGISTRY_BRANCH:-vcpkg-registry}"
MAX_ATTEMPTS="${MAX_ATTEMPTS:-5}"
VCPKG="${VCPKG_ROOT:?VCPKG_ROOT must be set}/vcpkg"
SCRIPT_DIR="$(dirname -- "$0")"
SCRIPT_DIR="$(cd -- "$SCRIPT_DIR" && pwd)"

cd "$REGISTRY_DIR"

attempt=0
while :; do
  attempt=$((attempt + 1))

  # Re-sync to the current remote tip so a bump computed against a stale base is
  # discarded and recomputed (this is what makes concurrent per-package runs safe).
  git fetch --quiet origin "$REGISTRY_BRANCH"
  git reset --quiet --hard "origin/$REGISTRY_BRANCH"

  "$SCRIPT_DIR/bump_port.sh" "$PACKAGE" "$VERSION" "$SHA" .

  # Commit the port bump first: x-add-version reads the port's committed git-tree.
  committed=0
  if ! git diff --quiet -- "ports/$PACKAGE"; then
    git add "ports/$PACKAGE"
    git commit --quiet -m "publish $PACKAGE $VERSION to the vcpkg registry"
    committed=1
  fi

  "$VCPKG" x-add-version "$PACKAGE" \
    --x-builtin-ports-root=./ports \
    --x-builtin-registry-versions-dir=./versions

  if ! git diff --quiet -- versions; then
    git add versions
    if [ "$committed" = 1 ]; then
      git commit --quiet --amend --no-edit   # fold the version entry into the bump commit
    else
      # Port was already current but the version entry was missing (e.g. a prior
      # partial run) — commit the versions update on its own.
      git commit --quiet -m "register $PACKAGE $VERSION in the vcpkg registry"
      committed=1
    fi
  fi

  if [ "$committed" = 0 ]; then
    echo "$PACKAGE $VERSION already published; nothing to do"
    exit 0
  fi

  if git push origin "HEAD:$REGISTRY_BRANCH"; then
    echo "Published $PACKAGE $VERSION to $REGISTRY_BRANCH"
    exit 0
  fi

  if [ "$attempt" -ge "$MAX_ATTEMPTS" ]; then
    echo "Error: push to $REGISTRY_BRANCH still rejected after $attempt attempts" >&2
    exit 1
  fi
  echo "Push rejected (branch advanced); re-syncing and retrying ($attempt/$MAX_ATTEMPTS)..." >&2
done
