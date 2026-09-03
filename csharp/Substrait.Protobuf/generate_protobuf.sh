#!/usr/bin/env sh

set -eu

# Vendors the Substrait protobuf definitions for the Substrait.Protobuf NuGet
# package.
#
# Like the Rust and C++ protobuf artifacts, this package commits the `.proto`
# files rather than generated sources: `dotnet build`/`dotnet pack` runs protoc
# via Grpc.Tools, so the compiled bindings in the published package are always
# generated from the vendored protos in the same commit. Unlike C++ there is no
# ABI concern here (the generated C# is ordinary managed source), so this is a
# convenience rather than a constraint — it just keeps generated code out of the
# repository.

SUBSTRAIT_HOME="${SUBSTRAIT_HOME:-../../substrait}"
PROTO_DIR="$SUBSTRAIT_HOME/proto/substrait"

echo "Vendoring Substrait protos from $PROTO_DIR"

# Reset the vendored tree so deletions in the spec are reflected, then copy the
# protos in. Import paths in the protos are rooted at `substrait/`, so they must
# live under proto/substrait.
rm -rf proto
mkdir -p proto
cp -r "$PROTO_DIR" proto/
