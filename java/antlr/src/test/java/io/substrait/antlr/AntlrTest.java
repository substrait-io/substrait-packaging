package io.substrait.antlr;

import static org.junit.jupiter.api.Assertions.assertEquals;

import org.antlr.v4.runtime.CharStreams;
import org.antlr.v4.runtime.CommonTokenStream;
import org.junit.jupiter.api.Test;

class AntlrTest {

  // Confirm the -visitor output was generated and is on the classpath.
  static class DummyVisitor extends SubstraitTypeBaseVisitor<Void> {}

  @Test
  void parsesSimpleType() {
    SubstraitTypeLexer lexer = new SubstraitTypeLexer(CharStreams.fromString("i32"));
    SubstraitTypeParser parser = new SubstraitTypeParser(new CommonTokenStream(lexer));

    assertEquals("(scalarType i32)", parser.typeDef().scalarType().toStringTree(parser));
  }
}
