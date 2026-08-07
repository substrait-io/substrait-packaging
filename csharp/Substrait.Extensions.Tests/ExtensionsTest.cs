// SPDX-License-Identifier: Apache-2.0
using System;
using Xunit;

namespace Substrait.Extensions.Tests;

/// <summary>
/// Mirrors the Java extensions artifact's checks: every category of spec file
/// the package claims to ship is actually embedded and readable.
/// </summary>
public class ExtensionsTest
{
    [Fact]
    public void ExtensionFileBundled()
    {
        Assert.NotEmpty(SubstraitExtensions.ReadExtensionFile("functions_arithmetic.yaml"));
    }

    [Fact]
    public void TextSchemasBundled()
    {
        Assert.NotEmpty(SubstraitExtensions.ReadTextSchema("simple_extensions_schema.yaml"));
        Assert.NotEmpty(SubstraitExtensions.ReadTextSchema("dialect_schema.yaml"));
    }

    [Fact]
    public void TestCaseFileBundled()
    {
        Assert.NotEmpty(SubstraitExtensions.ReadTestCase("arithmetic/add.test"));
    }

    [Fact]
    public void DialectTestFileBundled()
    {
        Assert.NotEmpty(SubstraitExtensions.ReadDialectTest("types_test.yaml"));
    }

    [Fact]
    public void ListingsAreNonEmptyAndReadable()
    {
        // Guards against a generate script that copied nothing, and against a
        // LogicalName change that would silently orphan a whole category.
        Assert.NotEmpty(SubstraitExtensions.ExtensionFiles);
        Assert.NotEmpty(SubstraitExtensions.TextSchemas);
        Assert.NotEmpty(SubstraitExtensions.TestCases);
        Assert.NotEmpty(SubstraitExtensions.DialectTests);

        Assert.Equal(
            SubstraitExtensions.ExtensionFiles.Count
                + SubstraitExtensions.TextSchemas.Count
                + SubstraitExtensions.TestCases.Count
                + SubstraitExtensions.DialectTests.Count,
            SubstraitExtensions.ResourcePaths.Count);

        foreach (var path in SubstraitExtensions.ResourcePaths)
        {
            Assert.NotEmpty(SubstraitExtensions.ReadResource(path));
        }
    }

    [Fact]
    public void UnknownResourceThrows()
    {
        Assert.Throws<ArgumentException>(
            () => SubstraitExtensions.ReadExtensionFile("not_a_real_extension.yaml"));
    }
}
