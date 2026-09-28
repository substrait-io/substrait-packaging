#!/usr/bin/env sh

set -eu

SUBSTRAIT_HOME="${SUBSTRAIT_HOME:-../../substrait}"
EXTENSIONS_DIR="$SUBSTRAIT_HOME/extensions"
TEXT_DIR="$SUBSTRAIT_HOME/text"
TESTCASES_DIR="$SUBSTRAIT_HOME/tests/cases"
DIALECT_TESTS_DIR="$SUBSTRAIT_HOME/dialects/tests"
EXAMPLES_DIR="$SUBSTRAIT_HOME/site/examples"

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

# Per-section dialect test fixtures (embedded via //go:embed dialects/tests).
rm -rf dialects/tests
mkdir -p dialects/tests
cp -r "$DIALECT_TESTS_DIR"/. dialects/tests/

# Example extension and type YAML files (embedded via //go:embed examples). These
# are documentation illustrations rather than catalog entries, so they are kept in
# their own directory and their own embed.FS: a consumer walking the extensions FS
# must not encounter them. The plan examples in site/examples/proto-textformat are
# protobuf, not simple-extension YAML, and are not vendored here.
rm -rf examples
mkdir -p examples
cp -r "$EXAMPLES_DIR/extensions" examples/
cp -r "$EXAMPLES_DIR/types" examples/
