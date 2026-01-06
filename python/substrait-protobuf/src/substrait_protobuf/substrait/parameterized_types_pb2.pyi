from substrait import type_pb2 as _type_pb2
from google.protobuf.internal import containers as _containers
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from collections.abc import Iterable as _Iterable, Mapping as _Mapping
from typing import ClassVar as _ClassVar, Optional as _Optional, Union as _Union

DESCRIPTOR: _descriptor.FileDescriptor

class ParameterizedType(_message.Message):
    __slots__ = ()
    class TypeParameter(_message.Message):
        __slots__ = ()
        NAME_FIELD_NUMBER: _ClassVar[int]
        BOUNDS_FIELD_NUMBER: _ClassVar[int]
        name: str
        bounds: _containers.RepeatedCompositeFieldContainer[ParameterizedType]
        def __init__(self, name: _Optional[str] = ..., bounds: _Optional[_Iterable[_Union[ParameterizedType, _Mapping]]] = ...) -> None: ...
    class IntegerParameter(_message.Message):
        __slots__ = ()
        NAME_FIELD_NUMBER: _ClassVar[int]
        RANGE_START_INCLUSIVE_FIELD_NUMBER: _ClassVar[int]
        RANGE_END_EXCLUSIVE_FIELD_NUMBER: _ClassVar[int]
        name: str
        range_start_inclusive: ParameterizedType.NullableInteger
        range_end_exclusive: ParameterizedType.NullableInteger
        def __init__(self, name: _Optional[str] = ..., range_start_inclusive: _Optional[_Union[ParameterizedType.NullableInteger, _Mapping]] = ..., range_end_exclusive: _Optional[_Union[ParameterizedType.NullableInteger, _Mapping]] = ...) -> None: ...
    class NullableInteger(_message.Message):
        __slots__ = ()
        VALUE_FIELD_NUMBER: _ClassVar[int]
        value: int
        def __init__(self, value: _Optional[int] = ...) -> None: ...
    class ParameterizedFixedChar(_message.Message):
        __slots__ = ()
        LENGTH_FIELD_NUMBER: _ClassVar[int]
        VARIATION_POINTER_FIELD_NUMBER: _ClassVar[int]
        NULLABILITY_FIELD_NUMBER: _ClassVar[int]
        length: ParameterizedType.IntegerOption
        variation_pointer: int
        nullability: _type_pb2.Type.Nullability
        def __init__(self, length: _Optional[_Union[ParameterizedType.IntegerOption, _Mapping]] = ..., variation_pointer: _Optional[int] = ..., nullability: _Optional[_Union[_type_pb2.Type.Nullability, str]] = ...) -> None: ...
    class ParameterizedVarChar(_message.Message):
        __slots__ = ()
        LENGTH_FIELD_NUMBER: _ClassVar[int]
        VARIATION_POINTER_FIELD_NUMBER: _ClassVar[int]
        NULLABILITY_FIELD_NUMBER: _ClassVar[int]
        length: ParameterizedType.IntegerOption
        variation_pointer: int
        nullability: _type_pb2.Type.Nullability
        def __init__(self, length: _Optional[_Union[ParameterizedType.IntegerOption, _Mapping]] = ..., variation_pointer: _Optional[int] = ..., nullability: _Optional[_Union[_type_pb2.Type.Nullability, str]] = ...) -> None: ...
    class ParameterizedFixedBinary(_message.Message):
        __slots__ = ()
        LENGTH_FIELD_NUMBER: _ClassVar[int]
        VARIATION_POINTER_FIELD_NUMBER: _ClassVar[int]
        NULLABILITY_FIELD_NUMBER: _ClassVar[int]
        length: ParameterizedType.IntegerOption
        variation_pointer: int
        nullability: _type_pb2.Type.Nullability
        def __init__(self, length: _Optional[_Union[ParameterizedType.IntegerOption, _Mapping]] = ..., variation_pointer: _Optional[int] = ..., nullability: _Optional[_Union[_type_pb2.Type.Nullability, str]] = ...) -> None: ...
    class ParameterizedDecimal(_message.Message):
        __slots__ = ()
        SCALE_FIELD_NUMBER: _ClassVar[int]
        PRECISION_FIELD_NUMBER: _ClassVar[int]
        VARIATION_POINTER_FIELD_NUMBER: _ClassVar[int]
        NULLABILITY_FIELD_NUMBER: _ClassVar[int]
        scale: ParameterizedType.IntegerOption
        precision: ParameterizedType.IntegerOption
        variation_pointer: int
        nullability: _type_pb2.Type.Nullability
        def __init__(self, scale: _Optional[_Union[ParameterizedType.IntegerOption, _Mapping]] = ..., precision: _Optional[_Union[ParameterizedType.IntegerOption, _Mapping]] = ..., variation_pointer: _Optional[int] = ..., nullability: _Optional[_Union[_type_pb2.Type.Nullability, str]] = ...) -> None: ...
    class ParameterizedIntervalDay(_message.Message):
        __slots__ = ()
        PRECISION_FIELD_NUMBER: _ClassVar[int]
        VARIATION_POINTER_FIELD_NUMBER: _ClassVar[int]
        NULLABILITY_FIELD_NUMBER: _ClassVar[int]
        precision: ParameterizedType.IntegerOption
        variation_pointer: int
        nullability: _type_pb2.Type.Nullability
        def __init__(self, precision: _Optional[_Union[ParameterizedType.IntegerOption, _Mapping]] = ..., variation_pointer: _Optional[int] = ..., nullability: _Optional[_Union[_type_pb2.Type.Nullability, str]] = ...) -> None: ...
    class ParameterizedIntervalCompound(_message.Message):
        __slots__ = ()
        PRECISION_FIELD_NUMBER: _ClassVar[int]
        VARIATION_POINTER_FIELD_NUMBER: _ClassVar[int]
        NULLABILITY_FIELD_NUMBER: _ClassVar[int]
        precision: ParameterizedType.IntegerOption
        variation_pointer: int
        nullability: _type_pb2.Type.Nullability
        def __init__(self, precision: _Optional[_Union[ParameterizedType.IntegerOption, _Mapping]] = ..., variation_pointer: _Optional[int] = ..., nullability: _Optional[_Union[_type_pb2.Type.Nullability, str]] = ...) -> None: ...
    class ParameterizedPrecisionTime(_message.Message):
        __slots__ = ()
        PRECISION_FIELD_NUMBER: _ClassVar[int]
        VARIATION_POINTER_FIELD_NUMBER: _ClassVar[int]
        NULLABILITY_FIELD_NUMBER: _ClassVar[int]
        precision: ParameterizedType.IntegerOption
        variation_pointer: int
        nullability: _type_pb2.Type.Nullability
        def __init__(self, precision: _Optional[_Union[ParameterizedType.IntegerOption, _Mapping]] = ..., variation_pointer: _Optional[int] = ..., nullability: _Optional[_Union[_type_pb2.Type.Nullability, str]] = ...) -> None: ...
    class ParameterizedPrecisionTimestamp(_message.Message):
        __slots__ = ()
        PRECISION_FIELD_NUMBER: _ClassVar[int]
        VARIATION_POINTER_FIELD_NUMBER: _ClassVar[int]
        NULLABILITY_FIELD_NUMBER: _ClassVar[int]
        precision: ParameterizedType.IntegerOption
        variation_pointer: int
        nullability: _type_pb2.Type.Nullability
        def __init__(self, precision: _Optional[_Union[ParameterizedType.IntegerOption, _Mapping]] = ..., variation_pointer: _Optional[int] = ..., nullability: _Optional[_Union[_type_pb2.Type.Nullability, str]] = ...) -> None: ...
    class ParameterizedPrecisionTimestampTZ(_message.Message):
        __slots__ = ()
        PRECISION_FIELD_NUMBER: _ClassVar[int]
        VARIATION_POINTER_FIELD_NUMBER: _ClassVar[int]
        NULLABILITY_FIELD_NUMBER: _ClassVar[int]
        precision: ParameterizedType.IntegerOption
        variation_pointer: int
        nullability: _type_pb2.Type.Nullability
        def __init__(self, precision: _Optional[_Union[ParameterizedType.IntegerOption, _Mapping]] = ..., variation_pointer: _Optional[int] = ..., nullability: _Optional[_Union[_type_pb2.Type.Nullability, str]] = ...) -> None: ...
    class ParameterizedStruct(_message.Message):
        __slots__ = ()
        TYPES_FIELD_NUMBER: _ClassVar[int]
        VARIATION_POINTER_FIELD_NUMBER: _ClassVar[int]
        NULLABILITY_FIELD_NUMBER: _ClassVar[int]
        types: _containers.RepeatedCompositeFieldContainer[ParameterizedType]
        variation_pointer: int
        nullability: _type_pb2.Type.Nullability
        def __init__(self, types: _Optional[_Iterable[_Union[ParameterizedType, _Mapping]]] = ..., variation_pointer: _Optional[int] = ..., nullability: _Optional[_Union[_type_pb2.Type.Nullability, str]] = ...) -> None: ...
    class ParameterizedNamedStruct(_message.Message):
        __slots__ = ()
        NAMES_FIELD_NUMBER: _ClassVar[int]
        STRUCT_FIELD_NUMBER: _ClassVar[int]
        names: _containers.RepeatedScalarFieldContainer[str]
        struct: ParameterizedType.ParameterizedStruct
        def __init__(self, names: _Optional[_Iterable[str]] = ..., struct: _Optional[_Union[ParameterizedType.ParameterizedStruct, _Mapping]] = ...) -> None: ...
    class ParameterizedList(_message.Message):
        __slots__ = ()
        TYPE_FIELD_NUMBER: _ClassVar[int]
        VARIATION_POINTER_FIELD_NUMBER: _ClassVar[int]
        NULLABILITY_FIELD_NUMBER: _ClassVar[int]
        type: ParameterizedType
        variation_pointer: int
        nullability: _type_pb2.Type.Nullability
        def __init__(self, type: _Optional[_Union[ParameterizedType, _Mapping]] = ..., variation_pointer: _Optional[int] = ..., nullability: _Optional[_Union[_type_pb2.Type.Nullability, str]] = ...) -> None: ...
    class ParameterizedMap(_message.Message):
        __slots__ = ()
        KEY_FIELD_NUMBER: _ClassVar[int]
        VALUE_FIELD_NUMBER: _ClassVar[int]
        VARIATION_POINTER_FIELD_NUMBER: _ClassVar[int]
        NULLABILITY_FIELD_NUMBER: _ClassVar[int]
        key: ParameterizedType
        value: ParameterizedType
        variation_pointer: int
        nullability: _type_pb2.Type.Nullability
        def __init__(self, key: _Optional[_Union[ParameterizedType, _Mapping]] = ..., value: _Optional[_Union[ParameterizedType, _Mapping]] = ..., variation_pointer: _Optional[int] = ..., nullability: _Optional[_Union[_type_pb2.Type.Nullability, str]] = ...) -> None: ...
    class ParameterizedUserDefined(_message.Message):
        __slots__ = ()
        TYPE_POINTER_FIELD_NUMBER: _ClassVar[int]
        VARIATION_POINTER_FIELD_NUMBER: _ClassVar[int]
        NULLABILITY_FIELD_NUMBER: _ClassVar[int]
        type_pointer: int
        variation_pointer: int
        nullability: _type_pb2.Type.Nullability
        def __init__(self, type_pointer: _Optional[int] = ..., variation_pointer: _Optional[int] = ..., nullability: _Optional[_Union[_type_pb2.Type.Nullability, str]] = ...) -> None: ...
    class IntegerOption(_message.Message):
        __slots__ = ()
        LITERAL_FIELD_NUMBER: _ClassVar[int]
        PARAMETER_FIELD_NUMBER: _ClassVar[int]
        literal: int
        parameter: ParameterizedType.IntegerParameter
        def __init__(self, literal: _Optional[int] = ..., parameter: _Optional[_Union[ParameterizedType.IntegerParameter, _Mapping]] = ...) -> None: ...
    BOOL_FIELD_NUMBER: _ClassVar[int]
    I8_FIELD_NUMBER: _ClassVar[int]
    I16_FIELD_NUMBER: _ClassVar[int]
    I32_FIELD_NUMBER: _ClassVar[int]
    I64_FIELD_NUMBER: _ClassVar[int]
    FP32_FIELD_NUMBER: _ClassVar[int]
    FP64_FIELD_NUMBER: _ClassVar[int]
    STRING_FIELD_NUMBER: _ClassVar[int]
    BINARY_FIELD_NUMBER: _ClassVar[int]
    TIMESTAMP_FIELD_NUMBER: _ClassVar[int]
    DATE_FIELD_NUMBER: _ClassVar[int]
    TIME_FIELD_NUMBER: _ClassVar[int]
    INTERVAL_YEAR_FIELD_NUMBER: _ClassVar[int]
    INTERVAL_DAY_FIELD_NUMBER: _ClassVar[int]
    INTERVAL_COMPOUND_FIELD_NUMBER: _ClassVar[int]
    TIMESTAMP_TZ_FIELD_NUMBER: _ClassVar[int]
    UUID_FIELD_NUMBER: _ClassVar[int]
    FIXED_CHAR_FIELD_NUMBER: _ClassVar[int]
    VARCHAR_FIELD_NUMBER: _ClassVar[int]
    FIXED_BINARY_FIELD_NUMBER: _ClassVar[int]
    DECIMAL_FIELD_NUMBER: _ClassVar[int]
    PRECISION_TIME_FIELD_NUMBER: _ClassVar[int]
    PRECISION_TIMESTAMP_FIELD_NUMBER: _ClassVar[int]
    PRECISION_TIMESTAMP_TZ_FIELD_NUMBER: _ClassVar[int]
    STRUCT_FIELD_NUMBER: _ClassVar[int]
    LIST_FIELD_NUMBER: _ClassVar[int]
    MAP_FIELD_NUMBER: _ClassVar[int]
    USER_DEFINED_FIELD_NUMBER: _ClassVar[int]
    USER_DEFINED_POINTER_FIELD_NUMBER: _ClassVar[int]
    TYPE_PARAMETER_FIELD_NUMBER: _ClassVar[int]
    bool: _type_pb2.Type.Boolean
    i8: _type_pb2.Type.I8
    i16: _type_pb2.Type.I16
    i32: _type_pb2.Type.I32
    i64: _type_pb2.Type.I64
    fp32: _type_pb2.Type.FP32
    fp64: _type_pb2.Type.FP64
    string: _type_pb2.Type.String
    binary: _type_pb2.Type.Binary
    timestamp: _type_pb2.Type.Timestamp
    date: _type_pb2.Type.Date
    time: _type_pb2.Type.Time
    interval_year: _type_pb2.Type.IntervalYear
    interval_day: ParameterizedType.ParameterizedIntervalDay
    interval_compound: ParameterizedType.ParameterizedIntervalCompound
    timestamp_tz: _type_pb2.Type.TimestampTZ
    uuid: _type_pb2.Type.UUID
    fixed_char: ParameterizedType.ParameterizedFixedChar
    varchar: ParameterizedType.ParameterizedVarChar
    fixed_binary: ParameterizedType.ParameterizedFixedBinary
    decimal: ParameterizedType.ParameterizedDecimal
    precision_time: ParameterizedType.ParameterizedPrecisionTime
    precision_timestamp: ParameterizedType.ParameterizedPrecisionTimestamp
    precision_timestamp_tz: ParameterizedType.ParameterizedPrecisionTimestampTZ
    struct: ParameterizedType.ParameterizedStruct
    list: ParameterizedType.ParameterizedList
    map: ParameterizedType.ParameterizedMap
    user_defined: ParameterizedType.ParameterizedUserDefined
    user_defined_pointer: int
    type_parameter: ParameterizedType.TypeParameter
    def __init__(self, bool: _Optional[_Union[_type_pb2.Type.Boolean, _Mapping]] = ..., i8: _Optional[_Union[_type_pb2.Type.I8, _Mapping]] = ..., i16: _Optional[_Union[_type_pb2.Type.I16, _Mapping]] = ..., i32: _Optional[_Union[_type_pb2.Type.I32, _Mapping]] = ..., i64: _Optional[_Union[_type_pb2.Type.I64, _Mapping]] = ..., fp32: _Optional[_Union[_type_pb2.Type.FP32, _Mapping]] = ..., fp64: _Optional[_Union[_type_pb2.Type.FP64, _Mapping]] = ..., string: _Optional[_Union[_type_pb2.Type.String, _Mapping]] = ..., binary: _Optional[_Union[_type_pb2.Type.Binary, _Mapping]] = ..., timestamp: _Optional[_Union[_type_pb2.Type.Timestamp, _Mapping]] = ..., date: _Optional[_Union[_type_pb2.Type.Date, _Mapping]] = ..., time: _Optional[_Union[_type_pb2.Type.Time, _Mapping]] = ..., interval_year: _Optional[_Union[_type_pb2.Type.IntervalYear, _Mapping]] = ..., interval_day: _Optional[_Union[ParameterizedType.ParameterizedIntervalDay, _Mapping]] = ..., interval_compound: _Optional[_Union[ParameterizedType.ParameterizedIntervalCompound, _Mapping]] = ..., timestamp_tz: _Optional[_Union[_type_pb2.Type.TimestampTZ, _Mapping]] = ..., uuid: _Optional[_Union[_type_pb2.Type.UUID, _Mapping]] = ..., fixed_char: _Optional[_Union[ParameterizedType.ParameterizedFixedChar, _Mapping]] = ..., varchar: _Optional[_Union[ParameterizedType.ParameterizedVarChar, _Mapping]] = ..., fixed_binary: _Optional[_Union[ParameterizedType.ParameterizedFixedBinary, _Mapping]] = ..., decimal: _Optional[_Union[ParameterizedType.ParameterizedDecimal, _Mapping]] = ..., precision_time: _Optional[_Union[ParameterizedType.ParameterizedPrecisionTime, _Mapping]] = ..., precision_timestamp: _Optional[_Union[ParameterizedType.ParameterizedPrecisionTimestamp, _Mapping]] = ..., precision_timestamp_tz: _Optional[_Union[ParameterizedType.ParameterizedPrecisionTimestampTZ, _Mapping]] = ..., struct: _Optional[_Union[ParameterizedType.ParameterizedStruct, _Mapping]] = ..., list: _Optional[_Union[ParameterizedType.ParameterizedList, _Mapping]] = ..., map: _Optional[_Union[ParameterizedType.ParameterizedMap, _Mapping]] = ..., user_defined: _Optional[_Union[ParameterizedType.ParameterizedUserDefined, _Mapping]] = ..., user_defined_pointer: _Optional[int] = ..., type_parameter: _Optional[_Union[ParameterizedType.TypeParameter, _Mapping]] = ...) -> None: ...
