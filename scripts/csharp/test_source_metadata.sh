#!/bin/sh
# SPDX-License-Identifier: Apache-2.0
set -eu

SCRIPT_DIR=$(CDPATH= cd -- "$(dirname -- "$0")" && pwd)
HELPER="$SCRIPT_DIR/source_metadata.sh"
WORK_DIR=$(mktemp -d)
trap 'rm -rf "$WORK_DIR"' EXIT

configure_repository() {
  git -C "$1" config user.name "Source metadata tests"
  git -C "$1" config user.email "source-metadata@example.invalid"
  git -C "$1" config commit.gpgsign false
  git -C "$1" config core.hooksPath /dev/null
}

assert_hash() {
  sh "$HELPER" "$1" > "$WORK_DIR/metadata.props"
  grep -Fx "    <SubstraitGitHash>$2</SubstraitGitHash>" "$WORK_DIR/metadata.props" > /dev/null
}

assert_failure() {
  if sh "$HELPER" "$1" > "$WORK_DIR/output" 2> "$WORK_DIR/error"; then
    echo "Expected source metadata generation to fail for $1" >&2
    exit 1
  fi
  grep -F "$2" "$WORK_DIR/error" > /dev/null
  test ! -s "$WORK_DIR/output"
}

SOURCE="$WORK_DIR/specification source"
git init -q "$SOURCE"
configure_repository "$SOURCE"
printf 'specification\n' > "$SOURCE/spec.txt"
git -C "$SOURCE" add spec.txt
git -C "$SOURCE" commit -qm "Specification fixture"
SPECIFICATION_COMMIT=$(git -C "$SOURCE" rev-parse HEAD)
assert_hash "$SOURCE" "$SPECIFICATION_COMMIT"

PACKAGING="$WORK_DIR/packaging"
git init -q "$PACKAGING"
configure_repository "$PACKAGING"
git -C "$PACKAGING" commit -qm "Packaging fixture" --allow-empty
git -C "$PACKAGING" subtree add --prefix=substrait "$SOURCE" HEAD --squash > /dev/null
test "$(git -C "$PACKAGING/substrait" rev-parse HEAD)" != "$SPECIFICATION_COMMIT"
assert_hash "$PACKAGING/substrait" "$SPECIFICATION_COMMIT"

# Later packaging commits and unrelated local edits must not change provenance.
printf 'packaging\n' > "$PACKAGING/package.txt"
git -C "$PACKAGING" add package.txt
git -C "$PACKAGING" commit -qm "Update packaging"
printf 'unrelated edit\n' >> "$PACKAGING/package.txt"
assert_hash "$PACKAGING/substrait" "$SPECIFICATION_COMMIT"

git clone -q --no-hardlinks "$PACKAGING" "$WORK_DIR/modified-subtree"
configure_repository "$WORK_DIR/modified-subtree"
printf 'modified source\n' >> "$WORK_DIR/modified-subtree/substrait/spec.txt"
assert_failure "$WORK_DIR/modified-subtree/substrait" "Substrait sources must be clean"
git -C "$WORK_DIR/modified-subtree" add substrait/spec.txt
git -C "$WORK_DIR/modified-subtree" commit -qm "Modify vendored specification"
assert_failure "$WORK_DIR/modified-subtree/substrait" "no longer match"

printf 'untracked source\n' > "$PACKAGING/substrait/untracked.txt"
assert_failure "$PACKAGING/substrait" "Substrait sources must be clean"
printf 'dirty source\n' >> "$SOURCE/spec.txt"
assert_failure "$SOURCE" "Substrait sources must be clean"

mkdir -p "$WORK_DIR/not-a-repository"
assert_failure "$WORK_DIR/not-a-repository" "not a git repository"
assert_failure "$WORK_DIR/missing" "missing"

FAKE="$WORK_DIR/not-a-subtree"
git init -q "$FAKE"
configure_repository "$FAKE"
mkdir "$FAKE/substrait"
printf 'source without provenance\n' > "$FAKE/substrait/spec.txt"
git -C "$FAKE" add substrait/spec.txt
git -C "$FAKE" commit -qm "Not a subtree import"
assert_failure "$FAKE/substrait" "Cannot find the Substrait subtree's source commit"

echo "Specification source metadata tests passed."
