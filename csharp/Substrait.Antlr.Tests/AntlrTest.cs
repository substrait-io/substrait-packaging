// SPDX-License-Identifier: Apache-2.0
using System.IO;
using Antlr4.Runtime;
using Substrait.Antlr.FuncTestCase;
using Substrait.Antlr.SubstraitType;
using Xunit;

namespace Substrait.Antlr.Tests;

/// <summary>
/// Mirrors the assertions the Python and Java ANTLR artifacts make, so a
/// grammar change that alters a parse tree shows up identically across targets.
/// </summary>
public class AntlrTest
{
    // Confirm the -visitor and -listener output was generated and is subclassable.
    private sealed class DummyTypeVisitor : SubstraitTypeBaseVisitor<object> { }

    private sealed class DummyTypeListener : SubstraitTypeBaseListener { }

    private sealed class DummyFuncTestCaseVisitor : FuncTestCaseParserBaseVisitor<object> { }

    [Fact]
    public void ParsesSimpleType()
    {
        var parser = TypeParser("i32");

        Assert.Equal("(scalarType i32)", parser.typeDef().scalarType().ToStringTree(parser));
    }

    [Fact]
    public void ParsesCompositeType()
    {
        var parser = TypeParser("list?<any1>>");

        Assert.Equal(
            "(parameterizedType list ? < (expr (typeDef (anyType any1))) >)",
            parser.typeDef().parameterizedType().ToStringTree(parser));
    }

    [Fact]
    public void ParsesScalarTestCase()
    {
        var parser = FuncTestCaseParserFor(LoadFixture("test_scalar_test.yaml"));

        Assert.Equal(
            "(version ### SUBSTRAIT_SCALAR_TEST : v1.0)",
            parser.doc().header().version().ToStringTree(parser));
    }

    [Fact]
    public void ParsesAggregateTestCase()
    {
        var parser = FuncTestCaseParserFor(LoadFixture("test_aggregate_test.yaml"));

        Assert.Equal(
            "(version ### SUBSTRAIT_AGGREGATE_TEST : v1.0)",
            parser.doc().header().version().ToStringTree(parser));
    }

    private static SubstraitTypeParser TypeParser(string input) =>
        new SubstraitTypeParser(new CommonTokenStream(new SubstraitTypeLexer(new AntlrInputStream(input))));

    private static FuncTestCase.FuncTestCaseParser FuncTestCaseParserFor(string input) =>
        new FuncTestCase.FuncTestCaseParser(
            new CommonTokenStream(new FuncTestCaseLexer(new AntlrInputStream(input))));

    private static string LoadFixture(string name) =>
        File.ReadAllText(Path.Combine("antlr", "tests", name));
}
