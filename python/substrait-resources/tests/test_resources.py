from importlib.resources import files


def test_simple_extensions_datamodel():
    from substrait_resources.datamodel.simple_extensions import SimpleExtensions


def test_dialect_dataclasses():
    from substrait_resources.datamodel.dialect import Dialect


def test_extension_yamls_accessible():
    data = files("substrait_resources.extensions").joinpath("functions_arithmetic.yaml").read_text()
    assert len(data) > 0


def test_schema_yamls_accessible():
    data = files("substrait_resources.schemas").joinpath("simple_extensions_schema.yaml").read_text()
    assert len(data) > 0

    data = files("substrait_resources.schemas").joinpath("dialect_schema.yaml").read_text()
    assert len(data) > 0


def test_testcase_files_accessible():
    data = files("substrait_resources.testcases").joinpath("arithmetic").joinpath("add.test").read_text()
    assert len(data) > 0
