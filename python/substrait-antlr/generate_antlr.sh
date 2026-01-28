#!/usr/bin/env sh

set -eu

SUBSTRAIT_HOME="${SUBSTRAIT_HOME:-../../substrait}"
GRAMMAR_DIR="$SUBSTRAIT_HOME/grammar"

TYPES_TARGET="src/substrait_antlr/substrait_type"
FTEST_TARGET="src/substrait_antlr/func_test_case"

echo "Generating Python ANTLR files from $GRAMMAR_DIR"

# Copy grammars to tmp directory
rm -rf tmp
mkdir -p tmp
cp -r "$GRAMMAR_DIR"/*.g4 tmp

# Generate ANTLR parsers in tmp directory
cd tmp
ANTLR_PATH="${ANTLR_PATH:-../../../antlr}"
"$ANTLR_PATH/antlr.sh" -Dlanguage=Python3 -visitor SubstraitLexer.g4 SubstraitType.g4
"$ANTLR_PATH/antlr.sh" -Dlanguage=Python3 -visitor FuncTestCaseLexer.g4 FuncTestCaseParser.g4
cd ..

# Clean target directories
rm -rf $TYPES_TARGET
mkdir -p $TYPES_TARGET

rm -rf $FTEST_TARGET
mkdir -p $FTEST_TARGET

# Copy generated Python files to target directories
cp tmp/Substrait*.py $TYPES_TARGET
cp tmp/FuncTestCase*.py $FTEST_TARGET

# Cleanup
rm -rf tmp
