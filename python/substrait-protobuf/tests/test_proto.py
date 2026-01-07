from google.protobuf.any_pb2  import Any

def test_protobuf_imports():
    from substrait.algebra_pb2 import Expression
    from substrait.type_pb2 import Type
    from substrait.extensions.extensions_pb2 import SimpleExtensionDeclaration

def test_type_urls():
    import substrait.type_pb2 as stp

    t = stp.Type()
    any = Any()
    any.Pack(t)
    assert any.type_url == "type.googleapis.com/substrait.Type"

    import substrait.extensions.extensions_pb2 as ext

    decl = ext.SimpleExtensionDeclaration()
    any = Any()
    any.Pack(decl)
    assert any.type_url == "type.googleapis.com/substrait.extensions.SimpleExtensionDeclaration"

def test_external_messages():
    from substrait.type_pb2 import Type
    from testprotos.testprotos_pb2 import ExternalMessage

    em1 = ExternalMessage()
    em1.literal.i64 = 42
    em1.literal.nullable = True
    em1.typ.fp64.nullability = Type.NULLABILITY_NULLABLE
    s = em1.SerializeToString()

    em2 = ExternalMessage()
    em2.ParseFromString(s)

    assert em1 == em2
