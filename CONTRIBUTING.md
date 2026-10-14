# Contributing to Substrait Packaging

Welcome! This repository holds the machinery that turns a Substrait specification
release into published code artifacts for several languages. It does not define
Substrait semantics — those live in the
[specification repository](https://github.com/substrait-io/substrait).

## Contributor License Agreement

Substrait requires all contributors to sign the
[Contributor License Agreement (CLA)](https://cla-assistant.io/substrait-io/substrait)
before their contributions can be merged. A GitHub app checks this on every pull
request and guides new contributors through signing it.

## Commit Conventions

This repository follows
[conventional commits](https://www.conventionalcommits.org/en/v1.0.0/) for commit
message structure, with the affected language as the scope where the change is
language-specific — for example `ci(java): publish releases to Maven Central` or
`feat(rust): …`. Changes to shared machinery (`/scripts`, `pixi.toml`, the
top-level workflows) go without a language scope.

Pull requests are squash-merged, so please ensure that your PR title and initial
comment together form a valid commit message.

## Development

[`README.md`](README.md) is the reference for how the repository works: the
workflow hierarchy under [How It Works](README.md#how-it-works), and the
[Pixi](https://pixi.sh) tasks for generating each language's artifacts under
[Development](README.md#development).

Note that most artifacts generate their code at build time rather than committing
it; the committed exceptions and the reasoning behind each are documented per
language in `README.md`. If you change a generation script, check whether its
output is committed before assuming a regeneration is needed.

### Dependency Cooldown

`pixi.toml` sets `exclude-newer = "14d"` and each `python/*/pyproject.toml` sets
`[tool.uv] exclude-newer = "14 days"`, so `pixi lock` and `uv lock` ignore
packages published in the last 14 days. A compromised or broken upload therefore
has two weeks to be noticed before it can reach `pixi.lock` or a `uv.lock` — see
[Pixi's security guide](https://pixi.prefix.dev/latest/security/) for the
reasoning. Both cutoffs are relative durations evaluated at solve time, so the
window slides on its own and needs no maintenance. (For conda packages the
cutoff is compared against the build timestamp in the channel's repodata, which
predates the upload, so the effective hold is a little shorter than 14 days.)
The pixi cutoff needs pixi 0.67.0 or later, which `requires-pixi` enforces, and
the uv one uv 0.11.8 or later, the minimum `uv` version in `pixi.toml`.
Cargo has no equivalent setting, so nothing holds new crates back from
`Cargo.lock` maintenance: Renovate has no release date to check for a lock file
refresh, so the `renovate/stability-days` check on that pull request stays
pending without checking any crate's age.

Keep the pixi and uv windows in step with `minimumReleaseAge` in `renovate.json`. If
Renovate proposes a version newer than the cutoff, the `pixi lock` or `uv lock`
step in its own pull request cannot resolve that version.

To take a security fix that is younger than the window, add a per-package
override rather than lowering the cutoff:

```toml
# pixi.toml, conda packages
[exclude-newer]
openssl = "0d"

# pixi.toml, PyPI packages
[pypi-exclude-newer]
urllib3 = "0d"
```

```toml
# python/*/pyproject.toml
[tool.uv]
exclude-newer-package = { urllib3 = "0 days" }
```

Then run `pixi update openssl` or `uv lock --upgrade-package urllib3` to pull the
fix into the lock file. Drop the override again once the fix has aged past the
window.

## Continuous Integration

The `ci_<language>.yml` workflows run on pull requests and validate the packaging
machinery against the most recent specification release, running the same
generate, build and test steps as the publish workflows but without versioning,
committing, tagging or publishing.

Each is gated on a `paths` filter for its language, so a pull request touching
only one language exercises only that language's workflow — a green run does not
imply the other languages were built. When you change shared machinery, expect
(and check) several of them. A specific specification version can be validated on
demand via the `workflow_dispatch` `substrait_version` input.
