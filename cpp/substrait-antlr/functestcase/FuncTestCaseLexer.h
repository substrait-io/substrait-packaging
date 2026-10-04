// SPDX-License-Identifier: Apache-2.0


// Generated from FuncTestCaseLexer.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"


namespace functestcase {


class  FuncTestCaseLexer : public antlr4::Lexer {
public:
  enum {
    Whitespace = 1, TripleHash = 2, SubstraitScalarTest = 3, SubstraitAggregateTest = 4, 
    SubstraitWindowTest = 5, SubstraitInclude = 6, SubstraitDependency = 7, 
    ExtensionUrn = 8, FormatVersion = 9, DescriptionLine = 10, Define = 11, 
    ErrorResult = 12, UndefineResult = 13, Overflow = 14, Rounding = 15, 
    Error = 16, Saturate = 17, Silent = 18, TieToEven = 19, NaN = 20, AcceptNulls = 21, 
    IgnoreNulls = 22, NullHandling = 23, SpacesOnly = 24, Truncate = 25, 
    Over = 26, IntegerLiteral = 27, DecimalLiteral = 28, FloatLiteral = 29, 
    BooleanLiteral = 30, TimestampTzLiteral = 31, TimestampLiteral = 32, 
    TimeLiteral = 33, DateLiteral = 34, PeriodPrefix = 35, TimePrefix = 36, 
    YearSuffix = 37, MSuffix = 38, DaySuffix = 39, HourSuffix = 40, SecondSuffix = 41, 
    FractionalSecondSuffix = 42, OAngleBracket = 43, CAngleBracket = 44, 
    IntervalYearLiteral = 45, IntervalDayLiteral = 46, IntervalCompoundLiteral = 47, 
    NullLiteral = 48, StringLiteral = 49, EnumType = 50, OBrace = 51, CBrace = 52, 
    ColumnName = 53, LineComment = 54, BlockComment = 55, If = 56, Then = 57, 
    Else = 58, Func = 59, Boolean = 60, I8 = 61, I16 = 62, I32 = 63, I64 = 64, 
    FP32 = 65, FP64 = 66, String = 67, Binary = 68, Date = 69, Interval_Year = 70, 
    Interval_Day = 71, Interval_Compound = 72, UUID = 73, Decimal = 74, 
    Precision_Time = 75, Precision_Timestamp = 76, Precision_Timestamp_TZ = 77, 
    FixedChar = 78, VarChar = 79, FixedBinary = 80, Struct = 81, NStruct = 82, 
    List = 83, Map = 84, UserDefined = 85, Bool = 86, Str = 87, VBin = 88, 
    IYear = 89, IDay = 90, ICompound = 91, Dec = 92, PT = 93, PTs = 94, 
    PTsTZ = 95, FChar = 96, VChar = 97, FBin = 98, Any = 99, AnyVar = 100, 
    DoubleColon = 101, Plus = 102, Minus = 103, Asterisk = 104, ForwardSlash = 105, 
    Percent = 106, Eq = 107, Ne = 108, Gte = 109, Lte = 110, Gt = 111, Lt = 112, 
    Bang = 113, OParen = 114, CParen = 115, OBracket = 116, CBracket = 117, 
    Comma = 118, Colon = 119, QMark = 120, Hash = 121, Dot = 122, And = 123, 
    Or = 124, Assign = 125, Arrow = 126, Number = 127, Identifier = 128, 
    Newline = 129
  };

  explicit FuncTestCaseLexer(antlr4::CharStream *input);

  ~FuncTestCaseLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

}  // namespace functestcase
