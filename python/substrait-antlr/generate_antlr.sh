#!/usr/bin/env sh

set -eu

SUBSTRAIT_HOME="${SUBSTRAIT_HOME:-../../substrait}"
GRAMMAR_DIR="$SUBSTRAIT_HOME/grammar"

echo "Generating Python ANTLR files from $GRAMMAR_DIR"

# Clean target directories
rm -rf src/substrait_antlr/type_parser/*
rm -rf src/substrait_antlr/test_case_parser/*

# Generate SubstraitType parser
echo "Generating SubstraitType parser..."
antlr4 -o src/substrait_antlr/type_parser -Dlanguage=Python3 "$GRAMMAR_DIR/SubstraitType.g4"

# Generate FuncTestCase parser
echo "Generating FuncTestCase parser..."
antlr4 -o src/substrait_antlr/test_case_parser -Dlanguage=Python3 "$GRAMMAR_DIR/FuncTestCaseParser.g4"

# Clean up .tokens and .interp files
echo "Cleaning up intermediate files..."
find src/substrait_antlr -name "*.tokens" -delete
find src/substrait_antlr -name "*.interp" -delete

echo "ANTLR code generation complete!"
