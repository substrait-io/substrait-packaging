#!/usr/bin/env sh

set -eu

SUBSTRAIT_HOME="${SUBSTRAIT_HOME:-../../substrait}"
GRAMMAR_DIR="$SUBSTRAIT_HOME/grammar"
ANTLR_PATH="${ANTLR_PATH:-../../antlr}"

echo "Generating Python ANTLR files from $GRAMMAR_DIR"

TYPES_TARGET="src/substrait_antlr/type_parser"
FTEST_TARGET="src/substrait_antlr/test_case_parser"

# Clean target directories
rm -rf "$TYPES_TARGET/*"
rm -rf "$FTEST_TARGET/*"

# Generate SubstraitType parser
echo "Generating SubstraitType parser..."
. "$ANTLR_PATH/antlr.sh" -o $TYPES_TARGET -Dlanguage=Python3 "$GRAMMAR_DIR/SubstraitType.g4"

# Generate FuncTestCase parser
echo "Generating FuncTestCase parser..."
. "$ANTLR_PATH/antlr.sh" -o $FTEST_TARGET -Dlanguage=Python3 "$GRAMMAR_DIR/FuncTestCaseParser.g4"

# Clean up .tokens and .interp files
echo "Cleaning up intermediate files..."
find src/substrait_antlr -name "*.tokens" -delete
find src/substrait_antlr -name "*.interp" -delete

echo "ANTLR code generation complete!"
