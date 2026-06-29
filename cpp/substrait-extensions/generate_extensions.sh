#!/usr/bin/env sh

set -eu

SUBSTRAIT_HOME="${SUBSTRAIT_HOME:-../../substrait}"
EXTENSIONS_DIR="$SUBSTRAIT_HOME/extensions"
TEXT_DIR="$SUBSTRAIT_HOME/text"
TESTCASES_DIR="$SUBSTRAIT_HOME/tests/cases"

echo "Vendoring Substrait extension files from $SUBSTRAIT_HOME"

# This package ships the raw spec data only. C++ has no canonical YAML/JSON
# schema code generation (unlike Rust's typify or Python's
# datamodel-code-generator), so there is no generated type layer here — the
# typed parsing lives downstream in the consumer, mirroring the Go and Java
# extensions artifacts. The CMakeLists installs these files and exposes their
# location via the substrait::extensions interface target.

# Extension definition YAML files.
rm -rf extensions
mkdir -p extensions
cp "$EXTENSIONS_DIR"/*.yaml extensions/

# Text schema YAML files.
rm -rf text
mkdir -p text
cp "$TEXT_DIR"/*.yaml text/

# Function test case files.
rm -rf tests/cases
mkdir -p tests/cases
cp -r "$TESTCASES_DIR"/. tests/cases/
