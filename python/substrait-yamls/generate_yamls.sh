#!/usr/bin/env sh

set -eu

SUBSTRAIT_HOME="${SUBSTRAIT_HOME:-../../substrait}"
EXTENSIONS_DIR="$SUBSTRAIT_HOME/extensions"
TEXT_DIR="$SUBSTRAIT_HOME/text"

EXTENSIONS_TARGET="src/substrait_yamls/extensions"
SCHEMA_TARGET="src/substrait_yamls/schema"
DATACLASSES_TARGET="src/substrait_yamls/dataclasses"

echo "Generating substrait-yamls from $SUBSTRAIT_HOME"

# Step 1: Copy extension YAML files
rm -rf "$EXTENSIONS_TARGET"
mkdir -p "$EXTENSIONS_TARGET"
cp -r "$EXTENSIONS_DIR"/. "$EXTENSIONS_TARGET/"
touch "$EXTENSIONS_TARGET/__init__.py"

# Step 2: Copy schema YAML files
rm -rf "$SCHEMA_TARGET"
mkdir -p "$SCHEMA_TARGET"
cp "$TEXT_DIR/simple_extensions_schema.yaml" "$SCHEMA_TARGET/"
cp "$TEXT_DIR/dialect_schema.yaml" "$SCHEMA_TARGET/"
touch "$SCHEMA_TARGET/__init__.py"

# Step 3: Generate simple_extensions dataclasses
rm -rf "$DATACLASSES_TARGET"
mkdir -p "$DATACLASSES_TARGET"
touch "$DATACLASSES_TARGET/__init__.py"

datamodel-codegen \
    --input-file-type jsonschema \
    --input "$TEXT_DIR/simple_extensions_schema.yaml" \
    --output "$DATACLASSES_TARGET/simple_extensions.py" \
    --output-model-type dataclasses.dataclass \
    --target-python-version 3.10 \
    --disable-timestamp \
    --formatters ruff-format

# Step 4: Generate dialect dataclasses
datamodel-codegen \
    --input-file-type jsonschema \
    --input "$TEXT_DIR/dialect_schema.yaml" \
    --output "$DATACLASSES_TARGET/dialect.py" \
    --output-model-type dataclasses.dataclass \
    --target-python-version 3.10 \
    --disable-timestamp \
    --formatters ruff-format
