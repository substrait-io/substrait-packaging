#!/usr/bin/env sh
set -eu

SUBSTRAIT_HOME="${SUBSTRAIT_HOME:-../../substrait}"
EXTENSIONS_DIR="$SUBSTRAIT_HOME/extensions"
TEXT_DIR="$SUBSTRAIT_HOME/text"
TESTCASES_DIR="$SUBSTRAIT_HOME/tests/cases"
EXAMPLES_DIR="$SUBSTRAIT_HOME/site/examples"

echo "Vendoring Substrait extension files from $SUBSTRAIT_HOME"

# Copy the extension YAML files. The build script embeds these and generates a
# lookup map from them.
rm -rf extensions
mkdir -p extensions
cp "$EXTENSIONS_DIR"/*.yaml extensions/

# Copy the text-based JSON schemas. The build script generates Rust types from
# these with typify.
rm -rf text
mkdir -p text
cp "$TEXT_DIR"/*.yaml text/

# Copy the function test case files. The crate embeds these via include_dir.
rm -rf testcases
mkdir -p testcases
cp -r "$TESTCASES_DIR"/. testcases/

# Copy the example extension and type YAML files. The crate embeds these via
# include_dir. They live outside `extensions/` on purpose: `build.rs` walks that
# directory to build the EXTENSIONS map and the SIMPLE_EXTENSIONS URN table, and
# examples are documentation illustrations rather than catalog entries. The plan
# examples in `site/examples/proto-textformat` are not vendored here -- they are
# protobuf, not simple-extension YAML.
rm -rf examples
mkdir -p examples
cp -r "$EXAMPLES_DIR/extensions" examples/
cp -r "$EXAMPLES_DIR/types" examples/
