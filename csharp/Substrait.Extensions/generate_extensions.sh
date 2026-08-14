#!/usr/bin/env sh

set -eu

# Packages the Substrait extension files for the Substrait.Extensions NuGet
# package.
#
# This package ships the raw spec data only, like the Java and C++ extensions
# artifacts and unlike Rust's typify-generated types and Python's
# datamodel-code-generator dataclasses. .NET's JSON Schema code generators do
# have to be pointed at Draft-07 rather than the 2020-12 the spec declares, but
# the blocker is `oneOf`: NJsonSchema collapses the `args` union
# (enumeration_arg | value_arg | type_arg) to its first branch, which would
# silently mis-deserialize most real extension files. Publishing that as package
# API would be worse than publishing no API, so the typed layer is left to
# downstream consumers for now.
#
# The vendored files are embedded into the assembly as resources; see
# SubstraitExtensions.cs for the accessors.

SUBSTRAIT_HOME="${SUBSTRAIT_HOME:-../../substrait}"
EXTENSIONS_DIR="$SUBSTRAIT_HOME/extensions"
TEXT_DIR="$SUBSTRAIT_HOME/text"
TESTCASES_DIR="$SUBSTRAIT_HOME/tests/cases"
DIALECT_TESTS_DIR="$SUBSTRAIT_HOME/dialects/tests"
EXAMPLES_DIR="$SUBSTRAIT_HOME/site/examples"

echo "Packaging Substrait extension files from $SUBSTRAIT_HOME"

# Each directory is reset before copying so deletions in the spec are reflected.

# Extension definition YAML files.
rm -rf extensions
mkdir -p extensions
cp "$EXTENSIONS_DIR"/*.yaml extensions/

# Text schema YAML files (simple_extensions_schema.yaml, dialect_schema.yaml).
rm -rf text
mkdir -p text
cp "$TEXT_DIR"/*.yaml text/

# Function test case files.
rm -rf testcases
mkdir -p testcases
cp -r "$TESTCASES_DIR"/. testcases/

# Per-section dialect test fixtures.
rm -rf dialects
mkdir -p dialects
cp -r "$DIALECT_TESTS_DIR"/. dialects/

# Example extension and type YAML files from the specification's documentation.
# Kept in their own directory, and embedded under their own resource prefix, so
# that a consumer enumerating ExtensionFiles never sees them: they are
# illustrations of the schema, not entries in the Substrait extension catalog.
# The plan examples in site/examples/proto-textformat are protobuf text format
# rather than simple-extension YAML, so they are not vendored here.
rm -rf examples
mkdir -p examples
cp -r "$EXAMPLES_DIR/extensions" examples/
cp -r "$EXAMPLES_DIR/types" examples/
