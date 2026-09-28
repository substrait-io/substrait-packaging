#!/usr/bin/env sh

set -eu

SUBSTRAIT_HOME="${SUBSTRAIT_HOME:-../../substrait}"
EXTENSIONS_DIR="$SUBSTRAIT_HOME/extensions"
TEXT_DIR="$SUBSTRAIT_HOME/text"
TESTCASES_DIR="$SUBSTRAIT_HOME/tests/cases"
EXAMPLES_DIR="$SUBSTRAIT_HOME/site/examples"

DIALECT_TARGET="src/substrait_extensions/dialects"
EXTENSIONS_TARGET="src/substrait_extensions/extensions"
TESTCASES_TARGET="src/substrait_extensions/testcases"
EXAMPLES_TARGET="src/substrait_extensions/examples"

echo "Generating substrait-extensions from $SUBSTRAIT_HOME"

# Step 1: Copy extension YAML files, schema and generate bindings
rm -rf "$EXTENSIONS_TARGET"
mkdir -p "$EXTENSIONS_TARGET"
cp "$TEXT_DIR/simple_extensions_schema.yaml" "$EXTENSIONS_TARGET/"
cp -r "$EXTENSIONS_DIR"/. "$EXTENSIONS_TARGET/"
touch "$EXTENSIONS_TARGET/__init__.py"

datamodel-codegen \
    --input-file-type jsonschema \
    --input "$TEXT_DIR/simple_extensions_schema.yaml" \
    --output "$EXTENSIONS_TARGET/simple_extensions.py" \
    --output-model-type dataclasses.dataclass \
    --target-python-version 3.10 \
    --disable-timestamp \
    --formatters ruff-format

# Step 2: Copy dialect schema and generate bindings
rm -rf "$DIALECT_TARGET"
mkdir -p "$DIALECT_TARGET"
cp "$TEXT_DIR/dialect_schema.yaml" "$DIALECT_TARGET/"
touch "$DIALECT_TARGET/__init__.py"

datamodel-codegen \
    --input-file-type jsonschema \
    --input "$TEXT_DIR/dialect_schema.yaml" \
    --output "$DIALECT_TARGET/dialect.py" \
    --output-model-type dataclasses.dataclass \
    --target-python-version 3.10 \
    --disable-timestamp \
    --formatters ruff-format

# Step 3: Copy testcase files
rm -rf "$TESTCASES_TARGET"
mkdir -p "$TESTCASES_TARGET"
cp -r "$TESTCASES_DIR"/. "$TESTCASES_TARGET/"
touch "$TESTCASES_TARGET/__init__.py"

# Step 4: Copy the example extension and type YAML files. These are documentation
# examples rather than catalog entries -- they are kept in a separate package so a
# consumer that enumerates `substrait_extensions.extensions` never sees them --
# and are useful as fixtures for testing an extension parser. The plan examples in
# `site/examples/proto-textformat` are deliberately not vendored here: they are
# protobuf, not simple-extension YAML, and belong with the protobuf artifact.
rm -rf "$EXAMPLES_TARGET"
mkdir -p "$EXAMPLES_TARGET"
cp -r "$EXAMPLES_DIR/extensions" "$EXAMPLES_TARGET/"
cp -r "$EXAMPLES_DIR/types" "$EXAMPLES_TARGET/"
touch "$EXAMPLES_TARGET/__init__.py"
