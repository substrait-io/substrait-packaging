plugins {
  id("substrait.java-conventions")
}

dependencies {}

// No code generation: bundle the Substrait extension YAMLs, text schemas and function
// test-case files from the attached spec subtree as classpath resources under `substrait/`.
tasks.named<ProcessResources>("processResources") {
  val specDir = "${rootProject.projectDir}/../substrait"
  from("$specDir/extensions") { into("substrait/extensions") }
  from("$specDir/text") { into("substrait/text") }
  from("$specDir/tests/cases") { into("substrait/tests/cases") }
}
