// SPDX-License-Identifier: Apache-2.0
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Reflection;

namespace Substrait.Extensions;

/// <summary>
/// Accessors for the Substrait specification files embedded in this assembly.
/// </summary>
/// <remarks>
/// The files are embedded as resources under <c>substrait/</c>, using the same
/// layout as the specification repository and the Java artifact's classpath
/// resources. This type only locates and reads them; parsing the YAML and
/// mapping it onto types is left to the consumer.
/// </remarks>
public static class SubstraitExtensions
{
    private const string ExtensionsPrefix = "substrait/extensions/";
    private const string TextPrefix = "substrait/text/";
    private const string TestCasesPrefix = "substrait/tests/cases/";
    private const string DialectTestsPrefix = "substrait/dialects/tests/";

    private static readonly Assembly Assembly = typeof(SubstraitExtensions).Assembly;

    private static readonly IReadOnlyList<string> AllResourcePaths = Assembly
        .GetManifestResourceNames()
        .Where(name => name.StartsWith("substrait/", StringComparison.Ordinal))
        .OrderBy(name => name, StringComparer.Ordinal)
        .ToList();

    /// <summary>
    /// Every embedded specification file, as a <c>substrait/</c>-rooted path.
    /// </summary>
    public static IReadOnlyList<string> ResourcePaths => AllResourcePaths;

    /// <summary>
    /// Extension definition file names, e.g. <c>functions_arithmetic.yaml</c>.
    /// </summary>
    public static IReadOnlyList<string> ExtensionFiles { get; } = NamesUnder(ExtensionsPrefix);

    /// <summary>
    /// Text schema file names, e.g. <c>simple_extensions_schema.yaml</c>.
    /// </summary>
    public static IReadOnlyList<string> TextSchemas { get; } = NamesUnder(TextPrefix);

    /// <summary>
    /// Function test case file names, e.g. <c>arithmetic/add.test</c>.
    /// </summary>
    public static IReadOnlyList<string> TestCases { get; } = NamesUnder(TestCasesPrefix);

    /// <summary>
    /// Dialect test fixture file names, e.g. <c>types_test.yaml</c>.
    /// </summary>
    public static IReadOnlyList<string> DialectTests { get; } = NamesUnder(DialectTestsPrefix);

    /// <summary>Reads an extension definition file listed in <see cref="ExtensionFiles"/>.</summary>
    public static string ReadExtensionFile(string name) => ReadResource(ExtensionsPrefix + name);

    /// <summary>Reads a text schema listed in <see cref="TextSchemas"/>.</summary>
    public static string ReadTextSchema(string name) => ReadResource(TextPrefix + name);

    /// <summary>Reads a function test case file listed in <see cref="TestCases"/>.</summary>
    public static string ReadTestCase(string name) => ReadResource(TestCasesPrefix + name);

    /// <summary>Reads a dialect test fixture listed in <see cref="DialectTests"/>.</summary>
    public static string ReadDialectTest(string name) => ReadResource(DialectTestsPrefix + name);

    /// <summary>
    /// Reads an embedded file by its full <c>substrait/</c>-rooted path.
    /// </summary>
    /// <exception cref="ArgumentException">No such file is embedded.</exception>
    public static string ReadResource(string resourcePath)
    {
        using var stream = OpenResource(resourcePath);
        using var reader = new StreamReader(stream);
        return reader.ReadToEnd();
    }

    /// <summary>
    /// Opens an embedded file by its full <c>substrait/</c>-rooted path.
    /// </summary>
    /// <exception cref="ArgumentException">No such file is embedded.</exception>
    public static Stream OpenResource(string resourcePath)
    {
        if (resourcePath is null)
        {
            throw new ArgumentNullException(nameof(resourcePath));
        }

        return Assembly.GetManifestResourceStream(resourcePath)
            ?? throw new ArgumentException(
                $"'{resourcePath}' is not an embedded Substrait specification file.",
                nameof(resourcePath));
    }

    private static IReadOnlyList<string> NamesUnder(string prefix) => AllResourcePaths
        .Where(path => path.StartsWith(prefix, StringComparison.Ordinal))
        .Select(path => path.Substring(prefix.Length))
        .ToList();
}
