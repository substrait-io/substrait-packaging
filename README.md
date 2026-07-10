# Substrait C++ vcpkg registry

This branch (`vcpkg-registry`) is a [vcpkg git registry](https://learn.microsoft.com/vcpkg/produce/publish-to-a-git-registry)
that publishes vcpkg ports for the three Substrait C++ CMake source packages:

| Port | vcpkg dependency | find_package | Imported target |
| --- | --- | --- | --- |
| `substrait-protobuf`   | `substrait-protobuf`   | `SubstraitProtobuf`   | `substrait::substrait_proto` |
| `substrait-extensions` | `substrait-extensions` | `SubstraitExtensions` | `substrait::substrait_extensions` (+ `SubstraitExtensions_DATA_DIR`) |
| `substrait-antlr`      | `substrait-antlr`      | `SubstraitAntlr`      | `substrait::substrait_antlr` |

It lets downstream projects (e.g. `duckdb-substrait-extension`) consume the packages
as imported targets via `find_package` instead of `FetchContent`.

> This is a **private/org registry** — the ports are intentionally *not* submitted
> to `microsoft/vcpkg`. The registry lives on this branch; `main` is unaffected.
> For general project documentation, see the `main` branch.

The ports pin to the immutable release tags `cpp/<pkg>/vX.Y.Z`; **0.89.0-alpha** is
currently published for all three.

---

## Consuming

Add the registry to your project's `vcpkg-configuration.json`. Because the ports
pull transitive dependencies (`protobuf` for `substrait-protobuf`, `antlr4` for
`substrait-antlr`) from the curated vcpkg registry, you need **both** a
`default-registry` and this registry:

```json
{
  "default-registry": {
    "kind": "git",
    "repository": "https://github.com/microsoft/vcpkg",
    "baseline": "<recent microsoft/vcpkg commit sha>"
  },
  "registries": [
    {
      "kind": "git",
      "repository": "https://github.com/substrait-io/substrait-packaging",
      "reference": "vcpkg-registry",
      "baseline": "934f3bf133ed5a39f0f2547f17beaabc669fb1fe",
      "packages": ["substrait-protobuf", "substrait-extensions", "substrait-antlr"]
    }
  ]
}
```

- `reference` is the branch this registry lives on (`vcpkg-registry`).
- `baseline` is a **commit SHA on that branch** — the example above is the commit
  that first published 0.89.0-alpha. Use the current branch tip to pick up later
  releases (see [Upgrading](#upgrading)):

  ```sh
  git ls-remote https://github.com/substrait-io/substrait-packaging vcpkg-registry
  ```

Declare the packages you want in `vcpkg.json`. Depend only on what you use — you
do not need all three:

```json
{
  "dependencies": [
    "substrait-protobuf",
    "substrait-extensions",
    "substrait-antlr"
  ]
}
```

Then in `CMakeLists.txt`:

```cmake
# substrait-protobuf — Substrait messages generated against your protobuf runtime.
# Generated headers install under <substrait/*.pb.h>; also brings protobuf transitively.
find_package(SubstraitProtobuf CONFIG REQUIRED)
target_link_libraries(my_target PRIVATE substrait::substrait_proto)

# substrait-extensions — data only. The config sets SubstraitExtensions_DATA_DIR to
# the installed spec data (extensions/, text/, tests/cases/); the target carries no code.
find_package(SubstraitExtensions CONFIG REQUIRED)
target_link_libraries(my_target PRIVATE substrait::substrait_extensions)
target_compile_definitions(my_target PRIVATE
    "SUBSTRAIT_EXT_DATA_DIR=\"${SubstraitExtensions_DATA_DIR}\"")

# substrait-antlr — generated ANTLR parsers. Headers install under
# <substrait-antlr/{substraittype,functestcase}/*.h> (classes live in the
# substraittype / functestcase namespaces). Pulls the antlr4 runtime transitively.
find_package(SubstraitAntlr CONFIG REQUIRED)
target_link_libraries(my_target PRIVATE substrait::substrait_antlr)
```

### A note on target names

Via `find_package` the imported targets are `substrait::substrait_proto`,
`substrait::substrait_extensions` and `substrait::substrait_antlr` — the target
name prefixed with the `substrait::` export namespace.

If you also (or instead) consume these packages with `FetchContent` /
`add_subdirectory`, note the **build-tree ALIAS** names differ:
`substrait::proto`, `substrait::extensions`, `substrait::antlr`. Aligning the two
is a recommended upstream change (see [Release maintenance](#release-maintenance));
until it ships, use the `substrait::substrait_*` names above with this registry.

---

## Upgrading

**vcpkg pins by design.** The `baseline` is a **commit SHA**, not a branch, so there
is no "always latest" mode — this is exactly how `microsoft/vcpkg`'s own
`builtin-baseline` works. Everything a consumer resolves is bounded by the pinned
baseline commit. New releases published to this branch after your pinned commit are
invisible until you move the baseline.

You have three ways to deal with this:

### 1. Pin occasionally, select by semver

Between baseline bumps you can choose **any package version that already exists at
the pinned commit** — you edit a semver string, not a SHA. In `vcpkg.json`:

```json
{
  "dependencies": ["substrait-protobuf"],
  "overrides": [
    { "name": "substrait-protobuf", "version": "0.89.0-alpha" }
  ]
}
```

or a minimum-version constraint:

```json
{
  "dependencies": [
    { "name": "substrait-protobuf", "version>=": "0.89.0-alpha" }
  ]
}
```

Reaching a version **published after** your pinned commit still requires bumping
the baseline once (so the new `versions/` entry becomes visible).

### 2. Automate the baseline bump (recommended for staying current)

Have a bot open PRs that bump the pinned baseline SHA to the registry branch HEAD.
This stays reproducible per commit and every bump is reviewed. Renovate
`customManager` starting point (adjust the field order to match your
`vcpkg-configuration.json`; note `fileMatch` is renamed `managerFilePatterns` in
newer Renovate):

```json
{
  "customManagers": [
    {
      "customType": "regex",
      "fileMatch": ["(^|/)vcpkg-configuration\\.json$"],
      "matchStrings": [
        "\"repository\"\\s*:\\s*\"(?<packageName>[^\"]*substrait-packaging)\"\\s*,\\s*\"reference\"\\s*:\\s*\"(?<currentValue>[^\"]+)\"\\s*,\\s*\"baseline\"\\s*:\\s*\"(?<currentDigest>[0-9a-f]{40})\""
      ],
      "datasourceTemplate": "git-refs"
    }
  ]
}
```

Simpler alternative: a scheduled CI job that runs
`git ls-remote https://github.com/substrait-io/substrait-packaging vcpkg-registry`,
writes the SHA into `vcpkg-configuration.json`, and opens a PR.

### 3. Float at configure time (discouraged)

A build script resolves the branch HEAD SHA and writes it into
`vcpkg-configuration.json` right before `cmake` configure — always latest, but you
sacrifice per-build reproducibility (two builds of the same source can resolve
different package versions).

> **Reassurance:** ports reference **immutable release commits** and the versions
> database is **append-only**, so old pinned baselines keep working indefinitely and
> publishing a new release never breaks existing consumers.

---

## Release maintenance

*(For `substrait-packaging` maintainers.)* When a new `cpp/<pkg>/vX.Y.Z` tag is
released, publish it to the registry. These steps are scriptable into the workflow
that already pushes the C++ tags.

### 1. Bump the port

The release tags are **annotated**, so the port must pin the **dereferenced commit
SHA** (the `^{}` line), not the tag-object SHA:

```sh
git ls-remote https://github.com/substrait-io/substrait-packaging \
  "refs/tags/cpp/substrait-protobuf/vX.Y.Z^{}"
```

In `ports/<pkg>/vcpkg.json`, bump `version-semver` to the new release, and in
`ports/<pkg>/portfile.cmake` set `REF` to the dereferenced commit SHA (keep the
`# cpp/<pkg>/vX.Y.Z` trailing comment). Commit the port change first.

### 2. Register the version

From the registry root, with a vcpkg checkout available:

```sh
export VCPKG_ROOT=/path/to/vcpkg
"$VCPKG_ROOT/vcpkg" x-add-version --all \
  --x-builtin-ports-root=./ports \
  --x-builtin-registry-versions-dir=./versions
```

This appends the new `version-semver` → `git-tree` entry to
`versions/s-/substrait-*.json` and updates the default in `versions/baseline.json`.
Commit the `versions/` change. `x-add-version` reads the **committed** git-tree of
each port, so always commit the port (step 1) before running it. Consumers are
decoupled: publishing a release never forces them to move.

### Verifying a port locally

Build through the port on your host triplet before publishing:

```sh
vcpkg install substrait-protobuf --overlay-ports=./ports
```

Then confirm a consumer project can `find_package(SubstraitProtobuf CONFIG REQUIRED)`
and link `substrait::substrait_proto`. (All three ports were validated end-to-end on
`arm64-osx`, both via overlay and via git-registry resolution.)

### Recommended upstream changes (to simplify future ports)

These live in the package sources on `main`; landing them lets future release tags
ship cleaner ports:

- **`substrait-antlr` runtime under vcpkg.** vcpkg blocks network during builds, so
  the package's hermetic `FetchContent` of the ANTLR C++ runtime cannot run. This
  port therefore carries two patches (see `ports/substrait-antlr/*.patch`):
  - `use-vcpkg-antlr-runtime.patch` — when the runtime is not supplied by a parent
    target, `find_package(antlr4-runtime CONFIG REQUIRED)` and link the
    `antlr4_static`/`antlr4_shared` target the [`antlr4`](https://github.com/microsoft/vcpkg/tree/master/ports/antlr4)
    port provides (selected by triplet linkage).
  - `find-dependency-antlr-runtime.patch` — add `find_dependency(antlr4-runtime)` to
    the installed `SubstraitAntlrConfig.cmake` so `find_package(SubstraitAntlr)`
    consumers get the runtime target transitively.

  Folding equivalent logic into `cpp/substrait-antlr/CMakeLists.txt` and
  `SubstraitAntlrConfig.cmake.in` upstream (guarded so the hermetic `FetchContent`
  build is unchanged) would let future ports **drop these patches**.

- **Align exported target names with the build-tree ALIASes.** `find_package`
  currently exposes `substrait::substrait_{proto,extensions,antlr}` while the
  `FetchContent` build-tree ALIASes are `substrait::{proto,extensions,antlr}`.
  Adding, in each package's `CMakeLists.txt`:

  ```cmake
  set_target_properties(substrait_proto PROPERTIES EXPORT_NAME proto)        # substrait-protobuf
  set_target_properties(substrait_extensions PROPERTIES EXPORT_NAME extensions)  # substrait-extensions
  set_target_properties(substrait_antlr PROPERTIES EXPORT_NAME antlr)        # substrait-antlr
  ```

  makes both consumption paths expose the same `substrait::{proto,extensions,antlr}`
  names. Update this README's target-name table when that ships in a release.
