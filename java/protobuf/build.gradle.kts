plugins {
  id("substrait.java-conventions")
  alias(libs.plugins.protobuf)
}

dependencies {
  api(libs.protobuf.java)
}

// Generate Java bindings at build time from the attached substrait spec subtree.
// The .proto files carry `option java_package = "io.substrait.proto"`.
sourceSets { main { proto { srcDir("${rootProject.projectDir}/../substrait/proto") } } }

protobuf { protoc { artifact = "com.google.protobuf:protoc:" + libs.protoc.get().version } }
