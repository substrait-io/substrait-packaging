// SPDX-License-Identifier: Apache-2.0
using Google.Protobuf;
using Google.Protobuf.WellKnownTypes;
using Substrait.Protobuf;
using Xunit;

namespace Substrait.Protobuf.Tests;

public class ProtobufTest
{
    [Fact]
    public void GeneratedClassesLoad()
    {
        // Referencing the generated types is enough to confirm they were
        // generated and compiled.
        Assert.NotNull(new Type());
        Assert.NotNull(new Expression());
        Assert.NotNull(new Plan());
        Assert.NotNull(new SimpleExtensionDeclaration());
    }

    [Theory]
    [InlineData("type.googleapis.com/substrait.Type")]
    public void TypeUrl(string expected)
    {
        Assert.Equal(expected, Any.Pack(new Type()).TypeUrl);
    }

    [Fact]
    public void ExtensionTypeUrl()
    {
        // The extensions protos live in the `substrait.extensions` protobuf
        // package even though the spec maps them into the same C# namespace.
        Assert.Equal(
            "type.googleapis.com/substrait.extensions.SimpleExtensionDeclaration",
            Any.Pack(new SimpleExtensionDeclaration()).TypeUrl);
    }

    [Fact]
    public void RoundTripsPlan()
    {
        var plan = new Plan
        {
            Version = new Version { MajorNumber = 0, MinorNumber = 99, Producer = "substrait-packaging" },
        };

        var roundTripped = Plan.Parser.ParseFrom(plan.ToByteArray());

        Assert.Equal(plan, roundTripped);
    }

    [Fact]
    public void ExternalMessagesCompose()
    {
        // Mirrors the Python artifact's external-message test: a downstream
        // schema importing the vendored protos round-trips through the types
        // this package ships.
        var external = new Testprotos.ExternalMessage
        {
            Literal = new Expression.Types.Literal { I64 = 42, Nullable = true },
            Typ = new Type { Fp64 = new Type.Types.FP64 { Nullability = Type.Types.Nullability.Nullable } },
        };

        var roundTripped = Testprotos.ExternalMessage.Parser.ParseFrom(external.ToByteArray());

        Assert.Equal(external, roundTripped);
    }
}
