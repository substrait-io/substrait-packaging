#!/usr/bin/env sh

set -eu

# Regenerates the committed C++ ANTLR parsers from the Substrait grammar.
#
# Like the other ANTLR targets, the generated parsers are committed to the
# repository (the package is distributed as source from version-control tags,
# so there is no build-time generation step for consumers). Uses the stock
# ANTLR C++ target — no fork is required, unlike the Rust crate. The generated
# code is compiled against the ANTLR C++ runtime, which the CMakeLists builds
# hermetically via FetchContent.

SUBSTRAIT_HOME="${SUBSTRAIT_HOME:-../../substrait}"
GRAMMAR_DIR="$SUBSTRAIT_HOME/grammar"

TYPE_TARGET="substraittype"
FTEST_TARGET="functestcase"

echo "Generating C++ ANTLR parsers from $GRAMMAR_DIR"

# Copy grammars to a temp dir (ANTLR writes auxiliary files next to inputs).
rm -rf tmp
mkdir -p tmp
cp "$GRAMMAR_DIR"/*.g4 tmp

# Generate the parsers. The type grammar keeps its listener; the test case
# grammar is visitor-only (matching how the other language targets consume
# them). The C++ target namespaces the generated classes by -package.
(cd tmp && antlr4 -Dlanguage=Cpp -visitor -package substraittype SubstraitLexer.g4 SubstraitType.g4)
(cd tmp && antlr4 -Dlanguage=Cpp -visitor -no-listener -package functestcase FuncTestCaseLexer.g4 FuncTestCaseParser.g4)

# Reset target directories.
rm -rf "$TYPE_TARGET" "$FTEST_TARGET"
mkdir -p "$TYPE_TARGET" "$FTEST_TARGET"

# Distribute generated files into per-grammar directories by filename prefix and
# prepend an SPDX header. ANTLR emits both headers (.h) and sources (.cpp), plus
# interp/token auxiliary files which are not needed to compile.
for f in tmp/Substrait*.cpp tmp/Substrait*.h; do
  [ -e "$f" ] || continue
  printf '// SPDX-License-Identifier: Apache-2.0\n\n' | cat - "$f" > "$TYPE_TARGET/$(basename "$f")"
done
for f in tmp/FuncTestCase*.cpp tmp/FuncTestCase*.h; do
  [ -e "$f" ] || continue
  printf '// SPDX-License-Identifier: Apache-2.0\n\n' | cat - "$f" > "$FTEST_TARGET/$(basename "$f")"
done

# Cleanup
rm -rf tmp
