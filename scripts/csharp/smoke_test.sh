#!/bin/sh
set -eu

# Restore a packed .nupkg into a throwaway consumer project and run a statement
# against it. This is the counterpart to the Python workflow's isolated wheel and
# sdist smoke tests: building the library from a project reference proves the
# sources compile, but only consuming the real package proves the package is
# correct — right TFM asset folders, dependencies declared, embedded resources
# actually inside the nupkg.
#
# The statement is run once per consumer framework, and the two are chosen so that
# between them they cover both of a package's assets:
#
#   net8.0  -> resolves the netstandard2.0 asset (net10.0 is not compatible)
#   net10.0 -> resolves the net10.0 asset
#
# That matters because the unit tests only ever run on net10.0, so without the
# net8.0 pass the netstandard2.0 asset would be compile-checked and never executed.
# Both consumers roll forward to whatever runtime the SDK ships.

if [ "$#" -ne 4 ]; then
  echo "Usage: $0 <package id> <version> <nupkg dir> <statement>"
  exit 1
fi

PACKAGE_ID="$1"
VERSION="${2#v}"
NUPKG_DIR=$(cd "$3" && pwd)
STATEMENT="$4"

CONSUMER_FRAMEWORKS="net8.0 net10.0"

WORK_DIR=$(mktemp -d)
trap 'rm -rf "$WORK_DIR"' EXIT

# Resolve into a scratch packages folder rather than the machine's global one.
# NuGet keys the cache on id + version and will not re-extract a version it has
# already seen, so without this a rebuilt package with unchanged version silently
# resolves the previously cached copy and the smoke test validates stale content.
# The version is constant across runs here (the spec version, or 0.0.0-ci), which
# is exactly the case that goes wrong.
NUGET_PACKAGES="$WORK_DIR/.packages"
export NUGET_PACKAGES

for FRAMEWORK in $CONSUMER_FRAMEWORKS; do
  # Each framework gets its own project directory rather than a shared one with
  # per-framework output paths: the SDK's default source glob only knows to skip
  # `bin` and `obj`, so a sibling intermediate directory would leak the previous
  # pass's generated AssemblyInfo.cs into this one's compilation.
  PROJECT_DIR="$WORK_DIR/$FRAMEWORK"
  mkdir -p "$PROJECT_DIR"

  # <clear /> keeps any user- or machine-level sources out, so the package under
  # test can only resolve from NUPKG_DIR. nuget.org is still needed for the
  # package's own dependencies.
  cat > "$PROJECT_DIR/nuget.config" <<EOF
<?xml version="1.0" encoding="utf-8"?>
<configuration>
  <packageSources>
    <clear />
    <add key="local" value="$NUPKG_DIR" />
    <add key="nuget.org" value="https://api.nuget.org/v3/index.json" />
  </packageSources>
</configuration>
EOF

  cat > "$PROJECT_DIR/smoke.csproj" <<EOF
<Project Sdk="Microsoft.NET.Sdk">
  <PropertyGroup>
    <OutputType>Exe</OutputType>
    <TargetFramework>$FRAMEWORK</TargetFramework>
    <RollForward>Major</RollForward>
    <Nullable>disable</Nullable>
    <AssemblyName>smoke</AssemblyName>
    <RootNamespace>Smoke</RootNamespace>
  </PropertyGroup>
  <ItemGroup>
    <PackageReference Include="$PACKAGE_ID" Version="[$VERSION]" />
  </ItemGroup>
</Project>
EOF

  cat > "$PROJECT_DIR/Program.cs" <<EOF
public static class SmokeTest
{
    public static void Main()
    {
$STATEMENT
        System.Console.WriteLine("$PACKAGE_ID $VERSION OK (consumer $FRAMEWORK)");
    }
}
EOF

  echo "Smoke testing $PACKAGE_ID $VERSION from $NUPKG_DIR (consumer: $FRAMEWORK)"
  dotnet run --project "$PROJECT_DIR/smoke.csproj" --verbosity minimal
done
