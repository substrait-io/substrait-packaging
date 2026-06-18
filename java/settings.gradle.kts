rootProject.name = "substrait-packaging-java"

includeBuild("build-logic")

include(
  "protobuf",
  "antlr",
  "extensions",
)
