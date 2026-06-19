// SPDX-License-Identifier: Apache-2.0

//! Smoke tests for the generated Substrait ANTLR parsers.

use antlr4rust::common_token_stream::CommonTokenStream;
use antlr4rust::tree::ParseTree;
use antlr4rust::InputStream;

use substrait_antlr::func_test_case::{FuncTestCaseLexer, FuncTestCaseParser};
use substrait_antlr::substrait_type::{SubstraitTypeLexer, SubstraitTypeParser};

#[test]
fn parses_a_substrait_type() {
    let lexer = SubstraitTypeLexer::new(InputStream::new("i32"));
    let tokens = CommonTokenStream::new(lexer);
    let mut parser = SubstraitTypeParser::new(tokens);

    let tree = parser.startRule().expect("`i32` parses");
    assert!(!tree.get_text().is_empty());
}

#[test]
fn parses_a_composite_substrait_type() {
    let lexer = SubstraitTypeLexer::new(InputStream::new("list?<i32>"));
    let tokens = CommonTokenStream::new(lexer);
    let mut parser = SubstraitTypeParser::new(tokens);

    parser.startRule().expect("`list?<i32>` parses");
}

#[test]
fn func_test_case_parser_is_constructible() {
    // Constructing the lexer/parser exercises the generated ATN tables and
    // confirms the func_test_case module is wired up correctly.
    let lexer = FuncTestCaseLexer::new(InputStream::new("### SUBSTRAIT_SCALAR_TEST: v1.0\n"));
    let tokens = CommonTokenStream::new(lexer);
    let _parser = FuncTestCaseParser::new(tokens);
}
