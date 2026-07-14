// SPDX-License-Identifier: Apache-2.0


// Generated from FuncTestCaseLexer.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"


namespace functestcase {


class  FuncTestCaseLexer : public antlr4::Lexer {
public:
  enum {
    Whitespace = 1, TripleHash = 2, SubstraitScalarTest = 3, SubstraitAggregateTest = 4, 
    SubstraitInclude = 5, SubstraitDependency = 6, ExtensionUrn = 7, FormatVersion = 8, 
    DescriptionLine = 9, Define = 10, ErrorResult = 11, UndefineResult = 12, 
    Overflow = 13, Rounding = 14, Error = 15, Saturate = 16, Silent = 17, 
    TieToEven = 18, NaN = 19, AcceptNulls = 20, IgnoreNulls = 21, NullHandling = 22, 
    SpacesOnly = 23, Truncate = 24, IntegerLiteral = 25, DecimalLiteral = 26, 
    FloatLiteral = 27, BooleanLiteral = 28, TimestampTzLiteral = 29, TimestampLiteral = 30, 
    TimeLiteral = 31, DateLiteral = 32, PeriodPrefix = 33, TimePrefix = 34, 
    YearSuffix = 35, MSuffix = 36, DaySuffix = 37, HourSuffix = 38, SecondSuffix = 39, 
    FractionalSecondSuffix = 40, OAngleBracket = 41, CAngleBracket = 42, 
    IntervalYearLiteral = 43, IntervalDayLiteral = 44, IntervalCompoundLiteral = 45, 
    NullLiteral = 46, StringLiteral = 47, EnumType = 48, ColumnName = 49, 
    LineComment = 50, BlockComment = 51, If = 52, Then = 53, Else = 54, 
    Func = 55, Boolean = 56, I8 = 57, I16 = 58, I32 = 59, I64 = 60, FP32 = 61, 
    FP64 = 62, String = 63, Binary = 64, Date = 65, Interval_Year = 66, 
    Interval_Day = 67, Interval_Compound = 68, UUID = 69, Decimal = 70, 
    Precision_Time = 71, Precision_Timestamp = 72, Precision_Timestamp_TZ = 73, 
    FixedChar = 74, VarChar = 75, FixedBinary = 76, Struct = 77, NStruct = 78, 
    List = 79, Map = 80, UserDefined = 81, Bool = 82, Str = 83, VBin = 84, 
    IYear = 85, IDay = 86, ICompound = 87, Dec = 88, PT = 89, PTs = 90, 
    PTsTZ = 91, FChar = 92, VChar = 93, FBin = 94, Any = 95, AnyVar = 96, 
    DoubleColon = 97, Plus = 98, Minus = 99, Asterisk = 100, ForwardSlash = 101, 
    Percent = 102, Eq = 103, Ne = 104, Gte = 105, Lte = 106, Gt = 107, Lt = 108, 
    Bang = 109, OParen = 110, CParen = 111, OBracket = 112, CBracket = 113, 
    Comma = 114, Colon = 115, QMark = 116, Hash = 117, Dot = 118, And = 119, 
    Or = 120, Assign = 121, Arrow = 122, Number = 123, Identifier = 124, 
    Newline = 125
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
