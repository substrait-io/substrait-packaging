# substrait-extensions (Go)

Go access to the [Substrait](https://substrait.io/) specification's extension definitions, text schemas, function test cases and documentation examples, bundled via [`embed.FS`](https://pkg.go.dev/embed).

This module ships the raw spec **data only** — it does not generate Go types from the extension schema. Unlike the Python and Rust extensions packages (which generate types with datamodel-code-generator and typify), Go has no canonical JSON-schema code generator, and the extension schema's polymorphic function definitions do not map cleanly onto Go's type system. The typed parsing therefore lives downstream (e.g. in [substrait-go](https://github.com/substrait-io/substrait-go)). This mirrors the Java extensions artifact, which also bundles the data as resources without generating types.

It is a drop-in replacement for the legacy `embed.FS` module that lived at the root of the substrait specification repository (`github.com/substrait-io/substrait`): the package is named `substrait` and exposes the same accessors, so consumers only change the import path.

The data is sourced from [extensions](https://github.com/substrait-io/substrait/tree/main/extensions), [text](https://github.com/substrait-io/substrait/tree/main/text), [tests/cases](https://github.com/substrait-io/substrait/tree/main/tests/cases) and [site/examples](https://github.com/substrait-io/substrait/tree/main/site/examples) in the substrait repository. Versions of this module correspond to Substrait [releases](https://github.com/substrait-io/substrait/releases).

## Module Usage

```go
import "github.com/substrait-io/substrait-packaging/go/substrait-extensions"

func example() {
	extFS := substrait.GetSubstraitExtensionsFS() // extensions/*.yaml
	textFS := substrait.GetSubstraitTextFS()      // text/*.yaml
	testsFS := substrait.GetSubstraitTestsFS()    // tests/cases/**/*.test
	exFS := substrait.GetSubstraitExamplesFS()    // examples/{extensions,types}/*.yaml
	_ = extFS
	_ = textFS
	_ = testsFS
	_ = exFS
}
```

```sh
go get github.com/substrait-io/substrait-packaging/go/substrait-extensions@vx.y.z
```

The examples returned by `GetSubstraitExamplesFS` are **not** catalog entries: their URNs use an example owner rather than `extension:io.substrait:`, they are deliberately absent from the FS returned by `GetSubstraitExtensionsFS`, and their contents and URNs may change without a deprecation cycle. They ship as fixtures for exercising an extension parser against the corners of the simple-extension schema.

## Generation and Publishing

Code generation and publishing is handled in the [substrait-packaging](https://github.com/substrait-io/substrait-packaging) repository.

When a new version of the Substrait specification is released, automation vendors the data files for that version, commits them, and pushes a tag formatted like `go/substrait-extensions/vx.y.z`. Because Go modules are distributed directly from version-control tags, pushing the tag publishes the module — the workflow then warms `proxy.golang.org` so `pkg.go.dev` indexes it promptly.

The data files are committed only on release tags; on the default branch only `.gitkeep` placeholders are tracked. As a result the package compiles only after the data has been vendored (`//go:embed` requires matching files) — run the generation step first.

### Local Generation

```sh
pixi run go-generate-extensions
```

Set `SUBSTRAIT_HOME` to a directory containing the Substrait specification (defaults to `../../substrait`).
