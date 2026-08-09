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
    NullLiteral = 46, StringLiteral = 47, EnumType = 48, OBrace = 49, CBrace = 50, 
    ColumnName = 51, LineComment = 52, BlockComment = 53, If = 54, Then = 55, 
    Else = 56, Func = 57, Boolean = 58, I8 = 59, I16 = 60, I32 = 61, I64 = 62, 
    FP32 = 63, FP64 = 64, String = 65, Binary = 66, Date = 67, Interval_Year = 68, 
    Interval_Day = 69, Interval_Compound = 70, UUID = 71, Decimal = 72, 
    Precision_Time = 73, Precision_Timestamp = 74, Precision_Timestamp_TZ = 75, 
    FixedChar = 76, VarChar = 77, FixedBinary = 78, Struct = 79, NStruct = 80, 
    List = 81, Map = 82, UserDefined = 83, Bool = 84, Str = 85, VBin = 86, 
    IYear = 87, IDay = 88, ICompound = 89, Dec = 90, PT = 91, PTs = 92, 
    PTsTZ = 93, FChar = 94, VChar = 95, FBin = 96, Any = 97, AnyVar = 98, 
    DoubleColon = 99, Plus = 100, Minus = 101, Asterisk = 102, ForwardSlash = 103, 
    Percent = 104, Eq = 105, Ne = 106, Gte = 107, Lte = 108, Gt = 109, Lt = 110, 
    Bang = 111, OParen = 112, CParen = 113, OBracket = 114, CBracket = 115, 
    Comma = 116, Colon = 117, QMark = 118, Hash = 119, Dot = 120, And = 121, 
    Or = 122, Assign = 123, Arrow = 124, Number = 125, Identifier = 126, 
    Newline = 127
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
