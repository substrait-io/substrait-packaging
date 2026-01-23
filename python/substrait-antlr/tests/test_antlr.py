def test_antlr_imports():
    """Test that ANTLR generated parsers can be imported."""
    from substrait_antlr.type_parser.SubstraitTypeLexer import SubstraitTypeLexer
    from substrait_antlr.type_parser.SubstraitTypeParser import SubstraitTypeParser
    from substrait_antlr.test_case_parser.FuncTestCaseLexer import FuncTestCaseLexer
    from substrait_antlr.test_case_parser.FuncTestCaseParser import FuncTestCaseParser

def test_type_parser_basic():
    """Test basic functionality of the SubstraitType parser."""
    from antlr4 import InputStream, CommonTokenStream
    from substrait_antlr.type_parser.SubstraitTypeLexer import SubstraitTypeLexer
    from substrait_antlr.type_parser.SubstraitTypeParser import SubstraitTypeParser

    # Test parsing a simple type
    input_stream = InputStream("i32")
    lexer = SubstraitTypeLexer(input_stream)
    stream = CommonTokenStream(lexer)
    parser = SubstraitTypeParser(stream)

    # Parse the type - this should not raise an exception
    tree = parser.scalarType()
    assert tree is not None

def test_test_case_parser_basic():
    """Test basic functionality of the FuncTestCase parser."""
    from antlr4 import InputStream, CommonTokenStream
    from substrait_antlr.test_case_parser.FuncTestCaseLexer import FuncTestCaseLexer
    from substrait_antlr.test_case_parser.FuncTestCaseParser import FuncTestCaseParser

    # Test parsing a simple test case fragment
    input_stream = InputStream("# comment\n")
    lexer = FuncTestCaseLexer(input_stream)
    stream = CommonTokenStream(lexer)
    parser = FuncTestCaseParser(stream)

    # Parse - this should not raise an exception
    tree = parser.doc()
    assert tree is not None
