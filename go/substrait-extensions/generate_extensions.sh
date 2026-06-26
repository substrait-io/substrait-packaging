#!/usr/bin/env sh

set -eu

SUBSTRAIT_HOME="${SUBSTRAIT_HOME:-../../substrait}"
EXTENSIONS_DIR="$SUBSTRAIT_HOME/extensions"
TEXT_DIR="$SUBSTRAIT_HOME/text"
TESTCASES_DIR="$SUBSTRAIT_HOME/tests/cases"

echo "Vendoring Substrait extension files from $SUBSTRAIT_HOME"

# Vendor the data embedded by embed.go. No code is generated — the typed
# parsing lives downstream (e.g. in substrait-go); this module ships the raw
# spec data only, mirroring the Java extensions artifact.

# Extension definition YAML files (embedded via //go:embed extensions).
rm -rf extensions
mkdir -p extensions
cp "$EXTENSIONS_DIR"/*.yaml extensions/

# Text schema YAML files (embedded via //go:embed text).
rm -rf text
mkdir -p text
cp "$TEXT_DIR"/*.yaml text/

# Function test case files (embedded via //go:embed tests/cases).
rm -rf tests/cases
mkdir -p tests/cases
cp -r "$TESTCASES_DIR"/. tests/cases/
