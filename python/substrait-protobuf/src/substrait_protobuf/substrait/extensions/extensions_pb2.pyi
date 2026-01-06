from google.protobuf import any_pb2 as _any_pb2
from google.protobuf.internal import containers as _containers
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from collections.abc import Iterable as _Iterable, Mapping as _Mapping
from typing import ClassVar as _ClassVar, Optional as _Optional, Union as _Union

DESCRIPTOR: _descriptor.FileDescriptor

class SimpleExtensionURI(_message.Message):
    __slots__ = ()
    EXTENSION_URI_ANCHOR_FIELD_NUMBER: _ClassVar[int]
    URI_FIELD_NUMBER: _ClassVar[int]
    extension_uri_anchor: int
    uri: str
    def __init__(self, extension_uri_anchor: _Optional[int] = ..., uri: _Optional[str] = ...) -> None: ...

class SimpleExtensionURN(_message.Message):
    __slots__ = ()
    EXTENSION_URN_ANCHOR_FIELD_NUMBER: _ClassVar[int]
    URN_FIELD_NUMBER: _ClassVar[int]
    extension_urn_anchor: int
    urn: str
    def __init__(self, extension_urn_anchor: _Optional[int] = ..., urn: _Optional[str] = ...) -> None: ...

class SimpleExtensionDeclaration(_message.Message):
    __slots__ = ()
    class ExtensionType(_message.Message):
        __slots__ = ()
        EXTENSION_URI_REFERENCE_FIELD_NUMBER: _ClassVar[int]
        EXTENSION_URN_REFERENCE_FIELD_NUMBER: _ClassVar[int]
        TYPE_ANCHOR_FIELD_NUMBER: _ClassVar[int]
        NAME_FIELD_NUMBER: _ClassVar[int]
        extension_uri_reference: int
        extension_urn_reference: int
        type_anchor: int
        name: str
        def __init__(self, extension_uri_reference: _Optional[int] = ..., extension_urn_reference: _Optional[int] = ..., type_anchor: _Optional[int] = ..., name: _Optional[str] = ...) -> None: ...
    class ExtensionTypeVariation(_message.Message):
        __slots__ = ()
        EXTENSION_URI_REFERENCE_FIELD_NUMBER: _ClassVar[int]
        EXTENSION_URN_REFERENCE_FIELD_NUMBER: _ClassVar[int]
        TYPE_VARIATION_ANCHOR_FIELD_NUMBER: _ClassVar[int]
        NAME_FIELD_NUMBER: _ClassVar[int]
        extension_uri_reference: int
        extension_urn_reference: int
        type_variation_anchor: int
        name: str
        def __init__(self, extension_uri_reference: _Optional[int] = ..., extension_urn_reference: _Optional[int] = ..., type_variation_anchor: _Optional[int] = ..., name: _Optional[str] = ...) -> None: ...
    class ExtensionFunction(_message.Message):
        __slots__ = ()
        EXTENSION_URI_REFERENCE_FIELD_NUMBER: _ClassVar[int]
        EXTENSION_URN_REFERENCE_FIELD_NUMBER: _ClassVar[int]
        FUNCTION_ANCHOR_FIELD_NUMBER: _ClassVar[int]
        NAME_FIELD_NUMBER: _ClassVar[int]
        extension_uri_reference: int
        extension_urn_reference: int
        function_anchor: int
        name: str
        def __init__(self, extension_uri_reference: _Optional[int] = ..., extension_urn_reference: _Optional[int] = ..., function_anchor: _Optional[int] = ..., name: _Optional[str] = ...) -> None: ...
    EXTENSION_TYPE_FIELD_NUMBER: _ClassVar[int]
    EXTENSION_TYPE_VARIATION_FIELD_NUMBER: _ClassVar[int]
    EXTENSION_FUNCTION_FIELD_NUMBER: _ClassVar[int]
    extension_type: SimpleExtensionDeclaration.ExtensionType
    extension_type_variation: SimpleExtensionDeclaration.ExtensionTypeVariation
    extension_function: SimpleExtensionDeclaration.ExtensionFunction
    def __init__(self, extension_type: _Optional[_Union[SimpleExtensionDeclaration.ExtensionType, _Mapping]] = ..., extension_type_variation: _Optional[_Union[SimpleExtensionDeclaration.ExtensionTypeVariation, _Mapping]] = ..., extension_function: _Optional[_Union[SimpleExtensionDeclaration.ExtensionFunction, _Mapping]] = ...) -> None: ...

class AdvancedExtension(_message.Message):
    __slots__ = ()
    OPTIMIZATION_FIELD_NUMBER: _ClassVar[int]
    ENHANCEMENT_FIELD_NUMBER: _ClassVar[int]
    optimization: _containers.RepeatedCompositeFieldContainer[_any_pb2.Any]
    enhancement: _any_pb2.Any
    def __init__(self, optimization: _Optional[_Iterable[_Union[_any_pb2.Any, _Mapping]]] = ..., enhancement: _Optional[_Union[_any_pb2.Any, _Mapping]] = ...) -> None: ...
