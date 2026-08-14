plugins {
  id("substrait.java-conventions")
}

dependencies {}

// No code generation: bundle the Substrait extension YAMLs, text schemas, function
// test-case files and per-section dialect fixtures from the attached spec subtree as
// classpath resources under `substrait/`.
tasks.named<ProcessResources>("processResources") {
  val specDir = "${rootProject.projectDir}/../substrait"
  from("$specDir/extensions") { into("substrait/extensions") }
  from("$specDir/text") { into("substrait/text") }
  from("$specDir/tests/cases") { into("substrait/tests/cases") }
  // Example extension and type YAML from the spec's documentation. Bundled under
  // examples/ rather than extensions/ because they are illustrations, not catalog
  // entries -- code that enumerates substrait/extensions/ must not see them. The
  // plan examples in site/examples/proto-textformat are protobuf, not
  // simple-extension YAML, so they are not bundled here.
  from("$specDir/site/examples/extensions") { into("substrait/examples/extensions") }
  from("$specDir/site/examples/types") { into("substrait/examples/types") }
  from("$specDir/dialects/tests") { into("substrait/dialects/tests") }
}
