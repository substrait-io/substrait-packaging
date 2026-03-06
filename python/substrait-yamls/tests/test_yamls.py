from importlib.resources import files


def test_simple_extensions_dataclasses():
    from substrait_yamls.dataclasses.simple_extensions import SimpleExtensions


def test_dialect_dataclasses():
    from substrait_yamls.dataclasses.dialect import Dialect


def test_extension_yamls_accessible():
    data = files("substrait_yamls.extensions").joinpath("functions_arithmetic.yaml").read_text()
    assert len(data) > 0


def test_schema_yamls_accessible():
    data = files("substrait_yamls.schema").joinpath("simple_extensions_schema.yaml").read_text()
    assert len(data) > 0

    data = files("substrait_yamls.schema").joinpath("dialect_schema.yaml").read_text()
    assert len(data) > 0
