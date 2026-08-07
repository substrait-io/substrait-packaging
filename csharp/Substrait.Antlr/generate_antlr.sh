#!/usr/bin/env sh

set -eu

# Regenerates the committed C# ANTLR parsers from the Substrait grammars.
#
# Like the Rust and C++ ANTLR targets, the generated parsers are committed: the
# ANTLR tool is a Java program, and requiring a JDK to build this package (or to
# pack it) would be a poor trade for consumers and for the publish workflow.
# Uses the stock ANTLR C# target — no fork is required, unlike the Rust crate.
# The generated code compiles against the Antlr4.Runtime.Standard NuGet package.
#
# The two grammar sets get their own namespace (and directory) rather than being
# flattened into one, mirroring the Rust modules and the C++ namespaces.

SUBSTRAIT_HOME="${SUBSTRAIT_HOME:-../../substrait}"
GRAMMAR_DIR="$SUBSTRAIT_HOME/grammar"

TYPE_TARGET="SubstraitType"
FTEST_TARGET="FuncTestCase"

echo "Generating C# ANTLR parsers from $GRAMMAR_DIR"

# Copy grammars to a temp dir (ANTLR writes auxiliary files next to inputs).
# All four are copied because SubstraitType.g4 and FuncTestCaseLexer.g4 both
# `import SubstraitLexer`, which ANTLR resolves from the input directory.
rm -rf tmp
mkdir -p tmp
cp "$GRAMMAR_DIR"/*.g4 tmp

# Generate the parsers. SubstraitType.g4 is a combined grammar, so it yields its
# own lexer; the func-test-case grammars are a lexer/parser pair. The type
# grammar keeps its listener; the test case grammar is visitor-only (matching how
# the other language targets consume them).
(cd tmp && antlr4 -Dlanguage=CSharp -visitor \
  -package Substrait.Antlr.SubstraitType SubstraitType.g4)
(cd tmp && antlr4 -Dlanguage=CSharp -visitor -no-listener \
  -package Substrait.Antlr.FuncTestCase FuncTestCaseLexer.g4 FuncTestCaseParser.g4)

# Reset target directories.
rm -rf "$TYPE_TARGET" "$FTEST_TARGET"
mkdir -p "$TYPE_TARGET" "$FTEST_TARGET"

# Distribute generated sources into per-grammar directories by filename prefix
# and prepend an SPDX header. ANTLR also emits .interp and .tokens files, which
# are only needed when generating (not compiling), so they are dropped.
for f in tmp/SubstraitType*.cs; do
  [ -e "$f" ] || continue
  printf '// SPDX-License-Identifier: Apache-2.0\n\n' | cat - "$f" > "$TYPE_TARGET/$(basename "$f")"
done
for f in tmp/FuncTestCase*.cs; do
  [ -e "$f" ] || continue
  printf '// SPDX-License-Identifier: Apache-2.0\n\n' | cat - "$f" > "$FTEST_TARGET/$(basename "$f")"
done

# Cleanup
rm -rf tmp
