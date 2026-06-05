# Substrait Packaging - Java

Java package release machinery.

A single [Gradle](https://gradle.org/) (9.5.1, Kotlin DSL) multi-project build producing three
independently published Maven Central artifacts under the `io.substrait` group:

- `substrait-protobuf` — generated Java protobuf bindings
- `substrait-antlr` — generated Java ANTLR parsers
- `substrait-extensions` — bundled Substrait extension YAMLs, schemas and test cases

Generated sources are produced at build time from the Substrait specification; nothing
generated is committed to the repository.

## Local Build

The build reads the Substrait specification from `../substrait` (the spec subtree attached by
`scripts/attach_subtree.sh`, or a checkout/symlink placed at the repository root).

```sh
cd java

# Build, generate code and run tests for all three artifacts.
# -Pversion sets the artifact version (the spec version with any leading 'v' stripped).
./gradlew build -Pversion=0.78.0

# Install all artifacts to the local Maven repository (~/.m2) for inspection.
./gradlew publishToMavenLocal -Pversion=0.78.0
```

## Publishing

Publishing to Maven Central is handled by GitHub Actions (see `.github/workflows/java_*.yml`).
A single artifact is published with:

```sh
./gradlew publishAggregationToCentralPortal -PpublishArtifact=substrait-protobuf -Pversion=0.78.0
```

Publishing requires `MAVENCENTRAL_USERNAME` / `MAVENCENTRAL_PASSWORD` (Central Portal token) and
`SIGNING_KEY_ID` / `SIGNING_KEY` / `SIGNING_PASSWORD` (PGP signing key), supplied via environment
variables in CI.
