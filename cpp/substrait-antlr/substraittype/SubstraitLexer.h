// SPDX-License-Identifier: Apache-2.0


// Generated from SubstraitLexer.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"


namespace substraittype {


class  SubstraitLexer : public antlr4::Lexer {
public:
  enum {
    LineComment = 1, BlockComment = 2, Whitespace = 3, If = 4, Then = 5, 
    Else = 6, Func = 7, Boolean = 8, I8 = 9, I16 = 10, I32 = 11, I64 = 12, 
    FP32 = 13, FP64 = 14, String = 15, Binary = 16, Date = 17, Interval_Year = 18, 
    Interval_Day = 19, Interval_Compound = 20, UUID = 21, Decimal = 22, 
    Precision_Time = 23, Precision_Timestamp = 24, Precision_Timestamp_TZ = 25, 
    FixedChar = 26, VarChar = 27, FixedBinary = 28, Struct = 29, NStruct = 30, 
    List = 31, Map = 32, UserDefined = 33, Bool = 34, Str = 35, VBin = 36, 
    IYear = 37, IDay = 38, ICompound = 39, Dec = 40, PT = 41, PTs = 42, 
    PTsTZ = 43, FChar = 44, VChar = 45, FBin = 46, Any = 47, AnyVar = 48, 
    DoubleColon = 49, Plus = 50, Minus = 51, Asterisk = 52, ForwardSlash = 53, 
    Percent = 54, Eq = 55, Ne = 56, Gte = 57, Lte = 58, Gt = 59, Lt = 60, 
    Bang = 61, OAngleBracket = 62, CAngleBracket = 63, OParen = 64, CParen = 65, 
    OBracket = 66, CBracket = 67, Comma = 68, Colon = 69, QMark = 70, Hash = 71, 
    Dot = 72, And = 73, Or = 74, Assign = 75, Arrow = 76, Number = 77, Identifier = 78, 
    Newline = 79
  };

  explicit SubstraitLexer(antlr4::CharStream *input);

  ~SubstraitLexer() override;


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

}  // namespace substraittype
