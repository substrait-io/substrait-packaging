// SPDX-License-Identifier: Apache-2.0

// Lexes and parses a simple Substrait type expression to confirm the generated
// parser sources compile and link against the ANTLR C++ runtime.
#include "SubstraitTypeLexer.h"
#include "SubstraitTypeParser.h"
#include "antlr4-runtime.h"

#include <cassert>

int main() {
  antlr4::ANTLRInputStream input("i32");
  substraittype::SubstraitTypeLexer lexer(&input);
  antlr4::CommonTokenStream tokens(&lexer);
  substraittype::SubstraitTypeParser parser(&tokens);

  substraittype::SubstraitTypeParser::StartRuleContext* tree =
      parser.startRule();

  assert(tree != nullptr);
  assert(parser.getNumberOfSyntaxErrors() == 0);
  return 0;
}
