#!/bin/sh
set -eu

# Restore a packed .nupkg into a throwaway consumer project and run a statement
# against it. This is the counterpart to the Python workflow's isolated wheel and
# sdist smoke tests: building the library from a project reference proves the
# sources compile, but only consuming the real package proves the package is
# correct — right TFM asset folders, dependencies declared, embedded resources
# actually inside the nupkg.
#
# The consumer targets net8.0 so the package's net8.0 asset is the one selected,
# and rolls forward to whatever runtime the SDK ships.

if [ "$#" -ne 4 ]; then
  echo "Usage: $0 <package id> <version> <nupkg dir> <statement>"
  exit 1
fi

PACKAGE_ID="$1"
VERSION="${2#v}"
NUPKG_DIR=$(cd "$3" && pwd)
STATEMENT="$4"

WORK_DIR=$(mktemp -d)
trap 'rm -rf "$WORK_DIR"' EXIT

# <clear /> keeps any user- or machine-level sources out, so the package under
# test can only resolve from NUPKG_DIR. nuget.org is still needed for the
# package's own dependencies.
cat > "$WORK_DIR/nuget.config" <<EOF
<?xml version="1.0" encoding="utf-8"?>
<configuration>
  <packageSources>
    <clear />
    <add key="local" value="$NUPKG_DIR" />
    <add key="nuget.org" value="https://api.nuget.org/v3/index.json" />
  </packageSources>
</configuration>
EOF

cat > "$WORK_DIR/smoke.csproj" <<EOF
<Project Sdk="Microsoft.NET.Sdk">
  <PropertyGroup>
    <OutputType>Exe</OutputType>
    <TargetFramework>net8.0</TargetFramework>
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

cat > "$WORK_DIR/Program.cs" <<EOF
public static class SmokeTest
{
    public static void Main()
    {
$STATEMENT
        System.Console.WriteLine("$PACKAGE_ID $VERSION OK");
    }
}
EOF

echo "Smoke testing $PACKAGE_ID $VERSION from $NUPKG_DIR"
dotnet run --project "$WORK_DIR/smoke.csproj" --verbosity minimal
