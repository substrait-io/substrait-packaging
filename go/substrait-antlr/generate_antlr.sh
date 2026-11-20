#!/usr/bin/env sh

set -eu

# Regenerates the committed Go ANTLR parsers from the Substrait grammar.
#
# Like the other ANTLR targets, the generated parsers are committed to the
# repository (Go modules are served as source from version-control tags, so
# there is no build-time generation step). Uses the stock ANTLR Go target — no
# fork is required, unlike the Rust crate.

SUBSTRAIT_HOME="${SUBSTRAIT_HOME:-../../substrait}"
GRAMMAR_DIR="$SUBSTRAIT_HOME/grammar"

TYPE_TARGET="substraittype"
FTEST_TARGET="functestcase"

echo "Generating Go ANTLR parsers from $GRAMMAR_DIR"

# Copy grammars to a temp dir (ANTLR writes auxiliary files next to inputs).
rm -rf tmp
mkdir -p tmp
cp "$GRAMMAR_DIR"/*.g4 tmp

# Generate the parsers. The type grammar keeps its listener; the test case
# grammar is visitor-only (matching how substrait-go consumes them).
(cd tmp && antlr4 -Dlanguage=Go -visitor -package substraittype SubstraitLexer.g4 SubstraitType.g4)
(cd tmp && antlr4 -Dlanguage=Go -visitor -no-listener -package functestcase FuncTestCaseLexer.g4 FuncTestCaseParser.g4)

# Reset target package directories.
rm -rf "$TYPE_TARGET" "$FTEST_TARGET"
mkdir -p "$TYPE_TARGET" "$FTEST_TARGET"

# Distribute generated files into per-grammar packages by filename prefix and
# prepend an SPDX header (above ANTLR's own "DO NOT EDIT" line).
for f in tmp/substrait*.go; do
  printf '// SPDX-License-Identifier: Apache-2.0\n\n' | cat - "$f" > "$TYPE_TARGET/$(basename "$f")"
done
for f in tmp/functestcase*.go; do
  printf '// SPDX-License-Identifier: Apache-2.0\n\n' | cat - "$f" > "$FTEST_TARGET/$(basename "$f")"
done

# Cleanup
rm -rf tmp
