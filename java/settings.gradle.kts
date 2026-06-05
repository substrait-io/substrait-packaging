rootProject.name = "substrait-packaging-java"

includeBuild("build-logic")

include(
  "substrait-protobuf",
  "substrait-antlr",
  "substrait-extensions",
)
