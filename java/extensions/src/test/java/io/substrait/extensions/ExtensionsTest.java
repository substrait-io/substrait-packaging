package io.substrait.extensions;

import static org.junit.jupiter.api.Assertions.assertNotNull;
import static org.junit.jupiter.api.Assertions.assertNull;
import static org.junit.jupiter.api.Assertions.assertTrue;

import java.io.InputStream;
import java.nio.charset.StandardCharsets;
import org.junit.jupiter.api.Test;

class ExtensionsTest {

  private String readResource(String path) throws Exception {
    try (InputStream in = getClass().getClassLoader().getResourceAsStream(path)) {
      assertNotNull(in, "resource not on classpath: " + path);
      return new String(in.readAllBytes(), StandardCharsets.UTF_8);
    }
  }

  @Test
  void extensionFileBundled() throws Exception {
    assertTrue(readResource("substrait/extensions/functions_arithmetic.yaml").length() > 0);
  }

  @Test
  void schemaFileBundled() throws Exception {
    assertTrue(readResource("substrait/text/simple_extensions_schema.yaml").length() > 0);
  }

  @Test
  void testCaseFileBundled() throws Exception {
    assertTrue(readResource("substrait/tests/cases/arithmetic/add.test").length() > 0);
  }

  @Test
  void exampleFilesBundled() throws Exception {
    // Documentation examples ship as fixtures for testing an extension parser.
    assertTrue(readResource("substrait/examples/extensions/distance_functions.yaml").length() > 0);
    assertTrue(readResource("substrait/examples/types/user_defined_point.yaml").length() > 0);
  }

  @Test
  void examplesAreNotBundledAsExtensions() throws Exception {
    // An example must not be reachable where a consumer enumerates the catalog.
    try (InputStream in =
        getClass()
            .getClassLoader()
            .getResourceAsStream("substrait/extensions/distance_functions.yaml")) {
      assertNull(in, "example leaked into substrait/extensions/");
    }
  }
}
