// SPDX-License-Identifier: Apache-2.0

// Smoke tests for the generated parsers: the expected packages, lexers,
// parsers, listeners and visitors exist and are wired to the ANTLR runtime.
package tests

import (
	"testing"

	"github.com/antlr4-go/antlr/v4"

	"github.com/substrait-io/substrait-packaging/go/substrait-antlr/functestcase"
	"github.com/substrait-io/substrait-packaging/go/substrait-antlr/substraittype"
)

// The type grammar is generated with a listener and a visitor; the test case
// grammar with a visitor only.
var (
	_ substraittype.SubstraitTypeListener    = &substraittype.BaseSubstraitTypeListener{}
	_ substraittype.SubstraitTypeVisitor     = &substraittype.BaseSubstraitTypeVisitor{}
	_ functestcase.FuncTestCaseParserVisitor = &functestcase.BaseFuncTestCaseParserVisitor{}
)

func typeParser(input string) *substraittype.SubstraitTypeParser {
	lexer := substraittype.NewSubstraitTypeLexer(antlr.NewInputStream(input))
	return substraittype.NewSubstraitTypeParser(antlr.NewCommonTokenStream(lexer, antlr.TokenDefaultChannel))
}

func testCaseParser(input string) *functestcase.FuncTestCaseParser {
	lexer := functestcase.NewFuncTestCaseLexer(antlr.NewInputStream(input))
	return functestcase.NewFuncTestCaseParser(antlr.NewCommonTokenStream(lexer, antlr.TokenDefaultChannel))
}

func TestParseSimpleType(t *testing.T) {
	p := typeParser("i32")
	want := "(scalarType i32)"
	if got := p.TypeDef().ScalarType().ToStringTree(nil, p); got != want {
		t.Errorf("got %s, want %s", got, want)
	}
}

func TestParseCompositeType(t *testing.T) {
	p := typeParser("list?<any1>")
	want := "(parameterizedType list ? < (expr (typeDef (anyType any1))) >)"
	if got := p.TypeDef().ParameterizedType().ToStringTree(nil, p); got != want {
		t.Errorf("got %s, want %s", got, want)
	}
}

func TestParseTestCaseHeader(t *testing.T) {
	tests := []struct {
		name  string
		input string
		want  string
	}{
		{
			"scalar",
			"### SUBSTRAIT_SCALAR_TEST: v1.0\n" +
				"### SUBSTRAIT_INCLUDE: extension:io.substrait:functions_arithmetic\n\n" +
				"# basic: Basic examples without any special cases\n" +
				"add(120::i8, 5::i8) = 125::i8\n",
			"(version ### SUBSTRAIT_SCALAR_TEST : v1.0)",
		},
		{
			"aggregate",
			"### SUBSTRAIT_AGGREGATE_TEST: v1.0\n" +
				"### SUBSTRAIT_INCLUDE: extension:io.substrait:functions_arithmetic\n\n" +
				"# basic: Basic examples without any special cases\n" +
				"sum((0, -1, 2, 20)::i8) = 21::i64\n",
			"(version ### SUBSTRAIT_AGGREGATE_TEST : v1.0)",
		},
	}
	for _, tt := range tests {
		t.Run(tt.name, func(t *testing.T) {
			p := testCaseParser(tt.input)
			if got := p.Doc().Header().Version().ToStringTree(nil, p); got != tt.want {
				t.Errorf("got %s, want %s", got, tt.want)
			}
		})
	}
}
