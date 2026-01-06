#!/usr/bin/env sh

set -eou pipefail

SUBSTRAIT_HOME="${SUBSTRAIT_HOME:-../substrait}"
GRAMMAR_SRC="$SUBSTRAIT_HOME/grammar"

TYPES_TARGET="substrait-antlr/src/substrait-antlr/extension-types"
FUNCTIONS_TARGET="substrait-antlr/src/substrait-antlr/functions"

echo "Generating ANTLR bindings from $GRAMMAR_SRC"

rm -rf tmp/antlr
mkdir -p tmp/antlr
cp -r "$GRAMMAR_SRC"/*.g4 tmp/antlr

cd tmp/antlr
antlr -visitor -Dlanguage=Python3 SubstraitLexer.g4 SubstraitType.g4
antlr -visitor -Dlanguage=Python3 FuncTestCaseLexer.g4 FuncTestCaseParser.g4
cd ../..

rm -rf $TYPES_TARGET
mkdir -p $TYPES_TARGET
cp tmp/antlr/Substrait*.py $TYPES_TARGET

rm -rf $FUNCTIONS_TARGET
mkdir -p $FUNCTIONS_TARGET
cp tmp/antlr/FuncTestCase*.py $FUNCTIONS_TARGET

rm -rf tmp/antlr
