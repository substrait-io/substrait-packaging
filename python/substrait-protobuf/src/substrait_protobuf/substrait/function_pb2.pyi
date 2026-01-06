from substrait import parameterized_types_pb2 as _parameterized_types_pb2
from substrait import type_pb2 as _type_pb2
from substrait import type_expressions_pb2 as _type_expressions_pb2
from google.protobuf.internal import containers as _containers
from google.protobuf.internal import enum_type_wrapper as _enum_type_wrapper
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from collections.abc import Iterable as _Iterable, Mapping as _Mapping
from typing import ClassVar as _ClassVar, Optional as _Optional, Union as _Union

DESCRIPTOR: _descriptor.FileDescriptor

class FunctionSignature(_message.Message):
    __slots__ = ()
    class FinalArgVariadic(_message.Message):
        __slots__ = ()
        class ParameterConsistency(int, metaclass=_enum_type_wrapper.EnumTypeWrapper):
            __slots__ = ()
            PARAMETER_CONSISTENCY_UNSPECIFIED: _ClassVar[FunctionSignature.FinalArgVariadic.ParameterConsistency]
            PARAMETER_CONSISTENCY_CONSISTENT: _ClassVar[FunctionSignature.FinalArgVariadic.ParameterConsistency]
            PARAMETER_CONSISTENCY_INCONSISTENT: _ClassVar[FunctionSignature.FinalArgVariadic.ParameterConsistency]
        PARAMETER_CONSISTENCY_UNSPECIFIED: FunctionSignature.FinalArgVariadic.ParameterConsistency
        PARAMETER_CONSISTENCY_CONSISTENT: FunctionSignature.FinalArgVariadic.ParameterConsistency
        PARAMETER_CONSISTENCY_INCONSISTENT: FunctionSignature.FinalArgVariadic.ParameterConsistency
        MIN_ARGS_FIELD_NUMBER: _ClassVar[int]
        MAX_ARGS_FIELD_NUMBER: _ClassVar[int]
        CONSISTENCY_FIELD_NUMBER: _ClassVar[int]
        min_args: int
        max_args: int
        consistency: FunctionSignature.FinalArgVariadic.ParameterConsistency
        def __init__(self, min_args: _Optional[int] = ..., max_args: _Optional[int] = ..., consistency: _Optional[_Union[FunctionSignature.FinalArgVariadic.ParameterConsistency, str]] = ...) -> None: ...
    class FinalArgNormal(_message.Message):
        __slots__ = ()
        def __init__(self) -> None: ...
    class Scalar(_message.Message):
        __slots__ = ()
        ARGUMENTS_FIELD_NUMBER: _ClassVar[int]
        NAME_FIELD_NUMBER: _ClassVar[int]
        DESCRIPTION_FIELD_NUMBER: _ClassVar[int]
        DETERMINISTIC_FIELD_NUMBER: _ClassVar[int]
        SESSION_DEPENDENT_FIELD_NUMBER: _ClassVar[int]
        OUTPUT_TYPE_FIELD_NUMBER: _ClassVar[int]
        VARIADIC_FIELD_NUMBER: _ClassVar[int]
        NORMAL_FIELD_NUMBER: _ClassVar[int]
        IMPLEMENTATIONS_FIELD_NUMBER: _ClassVar[int]
        arguments: _containers.RepeatedCompositeFieldContainer[FunctionSignature.Argument]
        name: _containers.RepeatedScalarFieldContainer[str]
        description: FunctionSignature.Description
        deterministic: bool
        session_dependent: bool
        output_type: _type_expressions_pb2.DerivationExpression
        variadic: FunctionSignature.FinalArgVariadic
        normal: FunctionSignature.FinalArgNormal
        implementations: _containers.RepeatedCompositeFieldContainer[FunctionSignature.Implementation]
        def __init__(self, arguments: _Optional[_Iterable[_Union[FunctionSignature.Argument, _Mapping]]] = ..., name: _Optional[_Iterable[str]] = ..., description: _Optional[_Union[FunctionSignature.Description, _Mapping]] = ..., deterministic: _Optional[bool] = ..., session_dependent: _Optional[bool] = ..., output_type: _Optional[_Union[_type_expressions_pb2.DerivationExpression, _Mapping]] = ..., variadic: _Optional[_Union[FunctionSignature.FinalArgVariadic, _Mapping]] = ..., normal: _Optional[_Union[FunctionSignature.FinalArgNormal, _Mapping]] = ..., implementations: _Optional[_Iterable[_Union[FunctionSignature.Implementation, _Mapping]]] = ...) -> None: ...
    class Aggregate(_message.Message):
        __slots__ = ()
        ARGUMENTS_FIELD_NUMBER: _ClassVar[int]
        NAME_FIELD_NUMBER: _ClassVar[int]
        DESCRIPTION_FIELD_NUMBER: _ClassVar[int]
        DETERMINISTIC_FIELD_NUMBER: _ClassVar[int]
        SESSION_DEPENDENT_FIELD_NUMBER: _ClassVar[int]
        OUTPUT_TYPE_FIELD_NUMBER: _ClassVar[int]
        VARIADIC_FIELD_NUMBER: _ClassVar[int]
        NORMAL_FIELD_NUMBER: _ClassVar[int]
        ORDERED_FIELD_NUMBER: _ClassVar[int]
        MAX_SET_FIELD_NUMBER: _ClassVar[int]
        INTERMEDIATE_TYPE_FIELD_NUMBER: _ClassVar[int]
        IMPLEMENTATIONS_FIELD_NUMBER: _ClassVar[int]
        arguments: _containers.RepeatedCompositeFieldContainer[FunctionSignature.Argument]
        name: str
        description: FunctionSignature.Description
        deterministic: bool
        session_dependent: bool
        output_type: _type_expressions_pb2.DerivationExpression
        variadic: FunctionSignature.FinalArgVariadic
        normal: FunctionSignature.FinalArgNormal
        ordered: bool
        max_set: int
        intermediate_type: _type_pb2.Type
        implementations: _containers.RepeatedCompositeFieldContainer[FunctionSignature.Implementation]
        def __init__(self, arguments: _Optional[_Iterable[_Union[FunctionSignature.Argument, _Mapping]]] = ..., name: _Optional[str] = ..., description: _Optional[_Union[FunctionSignature.Description, _Mapping]] = ..., deterministic: _Optional[bool] = ..., session_dependent: _Optional[bool] = ..., output_type: _Optional[_Union[_type_expressions_pb2.DerivationExpression, _Mapping]] = ..., variadic: _Optional[_Union[FunctionSignature.FinalArgVariadic, _Mapping]] = ..., normal: _Optional[_Union[FunctionSignature.FinalArgNormal, _Mapping]] = ..., ordered: _Optional[bool] = ..., max_set: _Optional[int] = ..., intermediate_type: _Optional[_Union[_type_pb2.Type, _Mapping]] = ..., implementations: _Optional[_Iterable[_Union[FunctionSignature.Implementation, _Mapping]]] = ...) -> None: ...
    class Window(_message.Message):
        __slots__ = ()
        class WindowType(int, metaclass=_enum_type_wrapper.EnumTypeWrapper):
            __slots__ = ()
            WINDOW_TYPE_UNSPECIFIED: _ClassVar[FunctionSignature.Window.WindowType]
            WINDOW_TYPE_STREAMING: _ClassVar[FunctionSignature.Window.WindowType]
            WINDOW_TYPE_PARTITION: _ClassVar[FunctionSignature.Window.WindowType]
        WINDOW_TYPE_UNSPECIFIED: FunctionSignature.Window.WindowType
        WINDOW_TYPE_STREAMING: FunctionSignature.Window.WindowType
        WINDOW_TYPE_PARTITION: FunctionSignature.Window.WindowType
        ARGUMENTS_FIELD_NUMBER: _ClassVar[int]
        NAME_FIELD_NUMBER: _ClassVar[int]
        DESCRIPTION_FIELD_NUMBER: _ClassVar[int]
        DETERMINISTIC_FIELD_NUMBER: _ClassVar[int]
        SESSION_DEPENDENT_FIELD_NUMBER: _ClassVar[int]
        INTERMEDIATE_TYPE_FIELD_NUMBER: _ClassVar[int]
        OUTPUT_TYPE_FIELD_NUMBER: _ClassVar[int]
        VARIADIC_FIELD_NUMBER: _ClassVar[int]
        NORMAL_FIELD_NUMBER: _ClassVar[int]
        ORDERED_FIELD_NUMBER: _ClassVar[int]
        MAX_SET_FIELD_NUMBER: _ClassVar[int]
        WINDOW_TYPE_FIELD_NUMBER: _ClassVar[int]
        IMPLEMENTATIONS_FIELD_NUMBER: _ClassVar[int]
        arguments: _containers.RepeatedCompositeFieldContainer[FunctionSignature.Argument]
        name: _containers.RepeatedScalarFieldContainer[str]
        description: FunctionSignature.Description
        deterministic: bool
        session_dependent: bool
        intermediate_type: _type_expressions_pb2.DerivationExpression
        output_type: _type_expressions_pb2.DerivationExpression
        variadic: FunctionSignature.FinalArgVariadic
        normal: FunctionSignature.FinalArgNormal
        ordered: bool
        max_set: int
        window_type: FunctionSignature.Window.WindowType
        implementations: _containers.RepeatedCompositeFieldContainer[FunctionSignature.Implementation]
        def __init__(self, arguments: _Optional[_Iterable[_Union[FunctionSignature.Argument, _Mapping]]] = ..., name: _Optional[_Iterable[str]] = ..., description: _Optional[_Union[FunctionSignature.Description, _Mapping]] = ..., deterministic: _Optional[bool] = ..., session_dependent: _Optional[bool] = ..., intermediate_type: _Optional[_Union[_type_expressions_pb2.DerivationExpression, _Mapping]] = ..., output_type: _Optional[_Union[_type_expressions_pb2.DerivationExpression, _Mapping]] = ..., variadic: _Optional[_Union[FunctionSignature.FinalArgVariadic, _Mapping]] = ..., normal: _Optional[_Union[FunctionSignature.FinalArgNormal, _Mapping]] = ..., ordered: _Optional[bool] = ..., max_set: _Optional[int] = ..., window_type: _Optional[_Union[FunctionSignature.Window.WindowType, str]] = ..., implementations: _Optional[_Iterable[_Union[FunctionSignature.Implementation, _Mapping]]] = ...) -> None: ...
    class Description(_message.Message):
        __slots__ = ()
        LANGUAGE_FIELD_NUMBER: _ClassVar[int]
        BODY_FIELD_NUMBER: _ClassVar[int]
        language: str
        body: str
        def __init__(self, language: _Optional[str] = ..., body: _Optional[str] = ...) -> None: ...
    class Implementation(_message.Message):
        __slots__ = ()
        class Type(int, metaclass=_enum_type_wrapper.EnumTypeWrapper):
            __slots__ = ()
            TYPE_UNSPECIFIED: _ClassVar[FunctionSignature.Implementation.Type]
            TYPE_WEB_ASSEMBLY: _ClassVar[FunctionSignature.Implementation.Type]
            TYPE_TRINO_JAR: _ClassVar[FunctionSignature.Implementation.Type]
        TYPE_UNSPECIFIED: FunctionSignature.Implementation.Type
        TYPE_WEB_ASSEMBLY: FunctionSignature.Implementation.Type
        TYPE_TRINO_JAR: FunctionSignature.Implementation.Type
        TYPE_FIELD_NUMBER: _ClassVar[int]
        URI_FIELD_NUMBER: _ClassVar[int]
        type: FunctionSignature.Implementation.Type
        uri: str
        def __init__(self, type: _Optional[_Union[FunctionSignature.Implementation.Type, str]] = ..., uri: _Optional[str] = ...) -> None: ...
    class Argument(_message.Message):
        __slots__ = ()
        class ValueArgument(_message.Message):
            __slots__ = ()
            TYPE_FIELD_NUMBER: _ClassVar[int]
            CONSTANT_FIELD_NUMBER: _ClassVar[int]
            type: _parameterized_types_pb2.ParameterizedType
            constant: bool
            def __init__(self, type: _Optional[_Union[_parameterized_types_pb2.ParameterizedType, _Mapping]] = ..., constant: _Optional[bool] = ...) -> None: ...
        class TypeArgument(_message.Message):
            __slots__ = ()
            TYPE_FIELD_NUMBER: _ClassVar[int]
            type: _parameterized_types_pb2.ParameterizedType
            def __init__(self, type: _Optional[_Union[_parameterized_types_pb2.ParameterizedType, _Mapping]] = ...) -> None: ...
        class EnumArgument(_message.Message):
            __slots__ = ()
            OPTIONS_FIELD_NUMBER: _ClassVar[int]
            OPTIONAL_FIELD_NUMBER: _ClassVar[int]
            options: _containers.RepeatedScalarFieldContainer[str]
            optional: bool
            def __init__(self, options: _Optional[_Iterable[str]] = ..., optional: _Optional[bool] = ...) -> None: ...
        NAME_FIELD_NUMBER: _ClassVar[int]
        VALUE_FIELD_NUMBER: _ClassVar[int]
        TYPE_FIELD_NUMBER: _ClassVar[int]
        ENUM_FIELD_NUMBER: _ClassVar[int]
        name: str
        value: FunctionSignature.Argument.ValueArgument
        type: FunctionSignature.Argument.TypeArgument
        enum: FunctionSignature.Argument.EnumArgument
        def __init__(self, name: _Optional[str] = ..., value: _Optional[_Union[FunctionSignature.Argument.ValueArgument, _Mapping]] = ..., type: _Optional[_Union[FunctionSignature.Argument.TypeArgument, _Mapping]] = ..., enum: _Optional[_Union[FunctionSignature.Argument.EnumArgument, _Mapping]] = ...) -> None: ...
    def __init__(self) -> None: ...
