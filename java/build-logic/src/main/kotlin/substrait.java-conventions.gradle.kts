plugins {
  `java-library`
  `maven-publish`
  signing
  id("com.gradleup.nmcp")
}

group = "io.substrait"
version = rootProject.version

repositories { mavenCentral() }

// Type-safe `libs` accessors aren't generated inside precompiled script plugins, so resolve
// the catalog explicitly to share the JUnit dependencies across all subprojects.
val libs = the<org.gradle.api.artifacts.VersionCatalogsExtension>().named("libs")

dependencies {
  "testImplementation"(platform(libs.findLibrary("junit-bom").get()))
  "testImplementation"(libs.findLibrary("junit-jupiter").get())
  "testRuntimeOnly"(libs.findLibrary("junit-platform-launcher").get())
}

// Credentials/keys from the environment in CI, with a gradle property fallback locally.
fun secret(name: String): String =
  System.getenv(name).takeUnless { it.isNullOrEmpty() } ?: (findProperty(name) as String?) ?: ""

java {
  toolchain { languageVersion.set(JavaLanguageVersion.of(21)) }
  withSourcesJar()
  withJavadocJar()
}

// Only set the release for main sources; tests run on the toolchain (21), which JUnit 6 requires.
tasks.named<JavaCompile>("compileJava") { options.release.set(11) }

tasks.withType<Test>().configureEach { useJUnitPlatform() }

// Generated protobuf/ANTLR sources do not pass doclint; don't fail the javadoc jar on them.
tasks.withType<Javadoc>().configureEach {
  (options as StandardJavadocDocletOptions).addBooleanOption("Xdoclint:none", true)
  isFailOnError = false
}

publishing {
  publications {
    create<MavenPublication>("maven") {
      from(components["java"])
      pom {
        name.set(project.name)
        description.set("Generated Substrait ${project.name} artifact")
        url.set("https://github.com/substrait-io/substrait-packaging")
        licenses {
          license {
            name.set("The Apache License, Version 2.0")
            url.set("http://www.apache.org/licenses/LICENSE-2.0.txt")
          }
        }
        developers {
          developer {
            id.set("substrait")
            name.set("Substrait Contributors")
            email.set("substrait@googlegroups.com")
          }
        }
        scm {
          connection.set("scm:git:git://github.com/substrait-io/substrait-packaging.git")
          developerConnection.set("scm:git:ssh://github.com/substrait-io/substrait-packaging.git")
          url.set("https://github.com/substrait-io/substrait-packaging")
        }
      }
    }
  }
}

// Sign publications only when a signing key is available (CI publish). Local builds and
// publishToMavenLocal run unsigned, which keeps developer setups frictionless.
val signingKey = secret("SIGNING_KEY")
if (signingKey.isNotEmpty()) {
  signing {
    useInMemoryPgpKeys(secret("SIGNING_KEY_ID"), signingKey, secret("SIGNING_PASSWORD"))
    sign(publishing.publications["maven"])
  }
}
