
from antlr4 import InputStream, CommonTokenStream
from pathlib import Path

from substrait_antlr.substrait_type.SubstraitTypeLexer import SubstraitTypeLexer
from substrait_antlr.substrait_type.SubstraitTypeParser import SubstraitTypeParser
from substrait_antlr.substrait_type.SubstraitTypeVisitor import SubstraitTypeVisitor
from substrait_antlr.func_test_case.FuncTestCaseLexer import FuncTestCaseLexer
from substrait_antlr.func_test_case.FuncTestCaseParser import FuncTestCaseParser
from substrait_antlr.func_test_case.FuncTestCaseParserVisitor import FuncTestCaseParserVisitor

# Make sure that SubstraitTypeVisitor is available
class SubstraitDummyVisitor(SubstraitTypeVisitor):
    pass

# Make sure that FuncTestCaseParserVisitor is available
class FuncTestDummyVisitor(FuncTestCaseParserVisitor):
    pass

def test_type_parser_simple_type():
    lexer = SubstraitTypeLexer(InputStream("i32"))
    parser = SubstraitTypeParser(CommonTokenStream(lexer))

    assert parser.typeDef().scalarType().toStringTree(recog=parser) == '(scalarType i32)'

def test_type_parser_composite_type():
    lexer = SubstraitTypeLexer(InputStream("list?<any1>>"))
    parser = SubstraitTypeParser(CommonTokenStream(lexer))

    assert parser.typeDef().parameterizedType().toStringTree(recog=parser) == '(parameterizedType list ? < (expr (typeDef (anyType any1))) >)'

def test_scalar_test_parsing():
    tc = load_test_case("test_scalar_test.yaml")
    lexer = FuncTestCaseLexer(InputStream(tc))
    parser = FuncTestCaseParser(CommonTokenStream(lexer))

    assert parser.doc().header().version().toStringTree(recog=parser) == '(version ### SUBSTRAIT_SCALAR_TEST : v1.0)'

def test_aggregate_test_parsing():
    tc = load_test_case("test_aggregate_test.yaml")
    lexer = FuncTestCaseLexer(InputStream(tc))
    parser = FuncTestCaseParser(CommonTokenStream(lexer))

    assert parser.doc().header().version().toStringTree(recog=parser) == '(version ### SUBSTRAIT_AGGREGATE_TEST : v1.0)'

def load_test_case(testname):
    """Load and return the content of antlr/test/<file>"""
    test_file = Path(__file__).parent.parent.parent.parent / "antlr" / "tests" / testname
    with open(test_file, "r") as f:
        return f.read()