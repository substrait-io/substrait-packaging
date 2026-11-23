#!/bin/sh
set -eu

if [ "$#" -ne 2 ]; then
  echo "Usage: $0 <module-path> <version>"
  exit 1
fi

MODULE="$1"
VERSION="$2"

# Ensure the version has a leading 'v' (Go module versions are vX.Y.Z).
case "$VERSION" in
  v*) ;;
  *) VERSION="v$VERSION" ;;
esac

# Query the Go module proxy. A 200 means the version is already published; a
# 404/410 means it has never been published. See
# https://proxy.golang.org/ for the protocol.
#
# NOTE: the proxy requires uppercase letters in the module path to be escaped as
# '!<lower>'. The Substrait module paths are all lowercase, so no escaping is
# applied here.
STATUS=$(curl --silent --show-error --output /dev/null --write-out '%{http_code}' \
  --header 'User-Agent: substrait-packaging' \
  "https://proxy.golang.org/$MODULE/@v/$VERSION.info")

case "$STATUS" in
  200) echo true ;;
  404|410) echo false ;;
  *)
    echo "Error: Go proxy returned HTTP $STATUS for $MODULE@$VERSION" >&2
    exit 1
    ;;
esac
