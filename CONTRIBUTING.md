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
