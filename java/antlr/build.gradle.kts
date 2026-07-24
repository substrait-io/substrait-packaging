plugins {
  id("substrait.java-conventions")
  id("antlr")
}

dependencies {
  antlr(libs.antlr4)
  api(libs.antlr4.runtime)
}

// Generate Java parsers at build time from the attached substrait spec subtree.
// All four grammars are generated into a single package; lexer/parser class names
// are distinct across the type and func-test-case grammars, so there are no collisions.
sourceSets {
  main { antlr { setSrcDirs(listOf(file("${rootProject.projectDir}/../substrait/grammar"))) } }
}

tasks.named<AntlrTask>("generateGrammarSource") {
  arguments = arguments + listOf("-package", "io.substrait.antlr", "-visitor")
}
