plugins { alias(libs.plugins.nmcp.aggregation) }

repositories { mavenCentral() }

// Maven Central Portal credentials (env in CI, gradle property fallback locally).
fun secret(name: String): String =
  System.getenv(name).takeUnless { it.isNullOrEmpty() } ?: (findProperty(name) as String?) ?: ""

nmcpAggregation {
  centralPortal {
    username = secret("MAVENCENTRAL_USERNAME")
    password = secret("MAVENCENTRAL_PASSWORD")
    publishingType = "AUTOMATIC"
  }
}

// Publish a single artifact with -PpublishArtifact=protobuf, or all by default.
val publishTargets =
  (findProperty("publishArtifact") as String?)?.let { listOf(":$it") }
    ?: listOf(":protobuf", ":antlr", ":extensions")

dependencies { publishTargets.forEach { nmcpAggregation(project(it)) } }
