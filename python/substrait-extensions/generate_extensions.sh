#!/usr/bin/env sh

set -eu

SUBSTRAIT_HOME="${SUBSTRAIT_HOME:-../../substrait}"
EXTENSIONS_DIR="$SUBSTRAIT_HOME/extensions"
TEXT_DIR="$SUBSTRAIT_HOME/text"
TESTCASES_DIR="$SUBSTRAIT_HOME/tests/cases"

DIALECT_TARGET="src/substrait_extensions/dialects"
EXTENSIONS_TARGET="src/substrait_extensions/extensions"
TESTCASES_TARGET="src/substrait_extensions/testcases"

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
