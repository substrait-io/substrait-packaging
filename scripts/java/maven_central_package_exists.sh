#!/bin/sh
set -eu

if [ "$#" -ne 2 ]; then
  echo "Usage: $0 <artifact> <version>"
  exit 1
fi

ARTIFACT="$1"
VERSION="$2"

# Strip leading 'v' from version if present
VERSION="${VERSION#v}"

# Check whether the artifact directory for this version exists on Maven Central.
# group io.substrait -> io/substrait
URL="https://repo1.maven.org/maven2/io/substrait/$ARTIFACT/$VERSION/"

STATUS=$(curl --silent --output /dev/null --write-out '%{http_code}' "$URL")

if [ "$STATUS" = "200" ]; then
  echo true
else
  echo false
fi
