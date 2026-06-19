#!/bin/sh
set -eu

# Print the tag name of the most recent substrait specification release
# (e.g. v0.78.0). Used by CI to validate the packaging machinery against the
# latest released spec version. Requires the `gh` CLI to be authenticated
# (GH_TOKEN / GITHUB_TOKEN in CI).

REPO="${1:-substrait-io/substrait}"

gh api "repos/$REPO/releases/latest" --jq '.tag_name'
