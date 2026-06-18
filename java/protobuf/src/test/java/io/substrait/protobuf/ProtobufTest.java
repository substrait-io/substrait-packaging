package io.substrait.protobuf;

import static org.junit.jupiter.api.Assertions.assertEquals;

import com.google.protobuf.Any;
import io.substrait.proto.Expression;
import io.substrait.proto.Type;
import org.junit.jupiter.api.Test;

class ProtobufTest {

  @Test
  void generatedClassesLoad() {
    // Referencing the generated classes is enough to confirm they were generated and compiled.
    Type.newBuilder().build();
    Expression.newBuilder().build();
  }

  @Test
  void typeUrl() {
    Any any = Any.pack(Type.newBuilder().build());
    assertEquals("type.googleapis.com/substrait.Type", any.getTypeUrl());
  }
}
