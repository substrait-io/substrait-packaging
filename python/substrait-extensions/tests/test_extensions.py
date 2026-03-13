from importlib.resources import files

def test_simple_extensions_datamodel():
    from substrait_extensions.extensions.simple_extensions import SimpleExtensions

def test_dialect_dataclasses():
    from substrait_extensions.dialects.dialect import Dialect

def test_extension_file_access():
    data = files("substrait_extensions.extensions").joinpath("functions_arithmetic.yaml").read_text()
    assert len(data) > 0

    data = files("substrait_extensions.extensions").joinpath("simple_extensions_schema.yaml").read_text()
    assert len(data) > 0

def test_dialect_file_access():
    data = files("substrait_extensions.dialects").joinpath("dialect_schema.yaml").read_text()
    assert len(data) > 0

def test_testcase_files_accessible():
    data = files("substrait_extensions.testcases").joinpath("arithmetic").joinpath("add.test").read_text()
    assert len(data) > 0
