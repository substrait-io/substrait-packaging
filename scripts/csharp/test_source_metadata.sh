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
  source_dir=$1
  expected_hash=$2
  shift 2
  [ "$#" -gt 0 ] || set -- .
  sh "$HELPER" "$source_dir" "$@" > "$WORK_DIR/metadata.props"
  grep -Fx "    <SubstraitGitHash>$expected_hash</SubstraitGitHash>" "$WORK_DIR/metadata.props" > /dev/null
}

assert_failure() {
  source_dir=$1
  expected_error=$2
  shift 2
  [ "$#" -gt 0 ] || set -- .
  if sh "$HELPER" "$source_dir" "$@" > "$WORK_DIR/output" 2> "$WORK_DIR/error"; then
    echo "Expected source metadata generation to fail for $source_dir" >&2
    exit 1
  fi
  grep -F "$expected_error" "$WORK_DIR/error" > /dev/null
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

for checkout in "$SOURCE" "$PACKAGING/substrait"; do
  git_dir=$(git -C "$checkout" rev-parse --absolute-git-dir)
  printf '*.proto\n*.g4\n*.yaml\nignored-input\nignored-build/\n' >> "$git_dir/info/exclude"
  mkdir -p "$checkout/ignored-build"
  printf 'build output\n' > "$checkout/ignored-build/output"
  set -- proto/substrait 'grammar/*.g4' 'extensions/*.yaml' 'text/*.yaml' \
    tests/cases dialects/tests site/examples/extensions site/examples/types
  assert_hash "$checkout" "$SPECIFICATION_COMMIT" "$@"

  for input in proto/substrait/ignored.proto grammar/ignored.g4 \
    extensions/ignored.yaml text/ignored.yaml tests/cases/ignored-input \
    dialects/tests/ignored-input site/examples/extensions/ignored.yaml \
    site/examples/types/ignored.yaml; do
    mkdir -p "$(dirname "$checkout/$input")"
    printf 'uncommitted source\n' > "$checkout/$input"
    assert_failure "$checkout" "Ignored generation inputs" "$@"
    rm "$checkout/$input"
  done
done

# Later packaging commits and unrelated local edits must not change provenance.
printf 'packaging\n' > "$PACKAGING/package.txt"
git -C "$PACKAGING" add package.txt
git -C "$PACKAGING" commit -qm "Update packaging"
printf 'unrelated edit\n' >> "$PACKAGING/package.txt"
assert_hash "$PACKAGING/substrait" "$SPECIFICATION_COMMIT" spec.txt

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

BUILD="$WORK_DIR/build"
mkdir -p "$BUILD"
cp "$SCRIPT_DIR/../../csharp/Directory.Build.props" "$BUILD/"
cp "$SCRIPT_DIR/../../csharp/Directory.Build.targets" "$BUILD/"
sh "$HELPER" "$FAKE" substrait > "$BUILD/SubstraitSource.props"
BUILD_COMMIT=$(git -C "$FAKE" rev-parse HEAD)
cat > "$BUILD/metadata.proj" <<'EOF'
<Project>
  <Import Project="Directory.Build.props" />
  <Import Project="Directory.Build.targets" />
  <Target Name="GenerateAssemblyInfo">
    <Error Condition="'%(AssemblyMetadata.Value)' != '$(SubstraitGitHash)'"
           Text="Assembly metadata does not match the validated specification commit." />
  </Target>
  <Target Name="GenerateNuspec" />
</Project>
EOF

assert_build_failure() {
  target=$1
  expected_error=$2
  shift 2
  if dotnet msbuild "$BUILD/metadata.proj" -nologo -v:quiet "-t:$target" "$@" > "$WORK_DIR/build.log" 2>&1; then
    echo "Expected $target to reject invalid specification metadata" >&2
    exit 1
  fi
  if ! grep -F "$expected_error" "$WORK_DIR/build.log" > /dev/null; then
    cat "$WORK_DIR/build.log" >&2
    exit 1
  fi
}

for target in GenerateAssemblyInfo GenerateNuspec; do
  dotnet msbuild "$BUILD/metadata.proj" -nologo -v:quiet "-t:$target"
  dotnet msbuild "$BUILD/metadata.proj" -nologo -v:quiet "-t:$target" "-p:SubstraitGitHash=$BUILD_COMMIT"
  assert_build_failure "$target" "must match the recorded value" "-p:SubstraitGitHash=$SPECIFICATION_COMMIT"
  assert_build_failure "$target" "40-character lowercase Git SHA" "-p:SubstraitGitHash=invalid"
done

printf '<Project />\n' > "$BUILD/SubstraitSource.props"
assert_build_failure GenerateAssemblyInfo "must match the recorded value" "-p:SubstraitGitHash=$BUILD_COMMIT"
printf '<Project><PropertyGroup><SubstraitGitHash>invalid</SubstraitGitHash></PropertyGroup></Project>\n' > "$BUILD/SubstraitSource.props"
assert_build_failure GenerateAssemblyInfo "40-character lowercase Git SHA"
assert_build_failure GenerateAssemblyInfo "must match the recorded value" "-p:SubstraitGitHash=$BUILD_COMMIT"
rm "$BUILD/SubstraitSource.props"
assert_build_failure GenerateAssemblyInfo "Missing SubstraitSource.props" "-p:SubstraitGitHash=$BUILD_COMMIT"

echo "Specification source metadata tests passed."
