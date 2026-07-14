// SPDX-License-Identifier: Apache-2.0


// Generated from SubstraitType.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"


namespace substraittype {


class  SubstraitTypeParser : public antlr4::Parser {
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

  enum {
    RuleStartRule = 0, RuleTypeStatement = 1, RuleScalarType = 2, RuleParameterizedType = 3, 
    RuleFuncParams = 4, RuleNumericParameter = 5, RuleAnyType = 6, RuleTypeDef = 7, 
    RuleExpr = 8
  };

  explicit SubstraitTypeParser(antlr4::TokenStream *input);

  SubstraitTypeParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~SubstraitTypeParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class StartRuleContext;
  class TypeStatementContext;
  class ScalarTypeContext;
  class ParameterizedTypeContext;
  class FuncParamsContext;
  class NumericParameterContext;
  class AnyTypeContext;
  class TypeDefContext;
  class ExprContext; 

  class  StartRuleContext : public antlr4::ParserRuleContext {
  public:
    StartRuleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    antlr4::tree::TerminalNode *EOF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StartRuleContext* startRule();

  class  TypeStatementContext : public antlr4::ParserRuleContext {
  public:
    TypeStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeDefContext *typeDef();
    antlr4::tree::TerminalNode *EOF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeStatementContext* typeStatement();

  class  ScalarTypeContext : public antlr4::ParserRuleContext {
  public:
    ScalarTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ScalarTypeContext() = default;
    void copyFrom(ScalarTypeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  DateContext : public ScalarTypeContext {
  public:
    DateContext(ScalarTypeContext *ctx);

    antlr4::tree::TerminalNode *Date();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BooleanContext : public ScalarTypeContext {
  public:
    BooleanContext(ScalarTypeContext *ctx);

    antlr4::tree::TerminalNode *Boolean();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StringContext : public ScalarTypeContext {
  public:
    StringContext(ScalarTypeContext *ctx);

    antlr4::tree::TerminalNode *String();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  I64Context : public ScalarTypeContext {
  public:
    I64Context(ScalarTypeContext *ctx);

    antlr4::tree::TerminalNode *I64();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BinaryContext : public ScalarTypeContext {
  public:
    BinaryContext(ScalarTypeContext *ctx);

    antlr4::tree::TerminalNode *Binary();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Fp64Context : public ScalarTypeContext {
  public:
    Fp64Context(ScalarTypeContext *ctx);

    antlr4::tree::TerminalNode *FP64();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  I32Context : public ScalarTypeContext {
  public:
    I32Context(ScalarTypeContext *ctx);

    antlr4::tree::TerminalNode *I32();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Fp32Context : public ScalarTypeContext {
  public:
    Fp32Context(ScalarTypeContext *ctx);

    antlr4::tree::TerminalNode *FP32();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IntervalYearContext : public ScalarTypeContext {
  public:
    IntervalYearContext(ScalarTypeContext *ctx);

    antlr4::tree::TerminalNode *Interval_Year();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  UuidContext : public ScalarTypeContext {
  public:
    UuidContext(ScalarTypeContext *ctx);

    antlr4::tree::TerminalNode *UUID();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  I8Context : public ScalarTypeContext {
  public:
    I8Context(ScalarTypeContext *ctx);

    antlr4::tree::TerminalNode *I8();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  I16Context : public ScalarTypeContext {
  public:
    I16Context(ScalarTypeContext *ctx);

    antlr4::tree::TerminalNode *I16();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ScalarTypeContext* scalarType();

  class  ParameterizedTypeContext : public antlr4::ParserRuleContext {
  public:
    ParameterizedTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ParameterizedTypeContext() = default;
    void copyFrom(ParameterizedTypeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  StructContext : public ParameterizedTypeContext {
  public:
    StructContext(ParameterizedTypeContext *ctx);

    antlr4::Token *isnull = nullptr;
    antlr4::tree::TerminalNode *Struct();
    antlr4::tree::TerminalNode *Lt();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *Gt();
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);
    antlr4::tree::TerminalNode *QMark();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PrecisionTimestampTZContext : public ParameterizedTypeContext {
  public:
    PrecisionTimestampTZContext(ParameterizedTypeContext *ctx);

    antlr4::Token *isnull = nullptr;
    SubstraitTypeParser::NumericParameterContext *precision = nullptr;
    antlr4::tree::TerminalNode *Precision_Timestamp_TZ();
    antlr4::tree::TerminalNode *Lt();
    antlr4::tree::TerminalNode *Gt();
    NumericParameterContext *numericParameter();
    antlr4::tree::TerminalNode *QMark();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NStructContext : public ParameterizedTypeContext {
  public:
    NStructContext(ParameterizedTypeContext *ctx);

    antlr4::Token *isnull = nullptr;
    antlr4::tree::TerminalNode *NStruct();
    antlr4::tree::TerminalNode *Lt();
    std::vector<antlr4::tree::TerminalNode *> Identifier();
    antlr4::tree::TerminalNode* Identifier(size_t i);
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *Gt();
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);
    antlr4::tree::TerminalNode *QMark();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FixedBinaryContext : public ParameterizedTypeContext {
  public:
    FixedBinaryContext(ParameterizedTypeContext *ctx);

    antlr4::Token *isnull = nullptr;
    SubstraitTypeParser::NumericParameterContext *length = nullptr;
    antlr4::tree::TerminalNode *FixedBinary();
    antlr4::tree::TerminalNode *Lt();
    antlr4::tree::TerminalNode *Gt();
    NumericParameterContext *numericParameter();
    antlr4::tree::TerminalNode *QMark();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  UserDefinedContext : public ParameterizedTypeContext {
  public:
    UserDefinedContext(ParameterizedTypeContext *ctx);

    antlr4::Token *isnull = nullptr;
    antlr4::tree::TerminalNode *UserDefined();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Lt();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *Gt();
    antlr4::tree::TerminalNode *QMark();
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FixedCharContext : public ParameterizedTypeContext {
  public:
    FixedCharContext(ParameterizedTypeContext *ctx);

    antlr4::Token *isnull = nullptr;
    SubstraitTypeParser::NumericParameterContext *length = nullptr;
    antlr4::tree::TerminalNode *FixedChar();
    antlr4::tree::TerminalNode *Lt();
    antlr4::tree::TerminalNode *Gt();
    NumericParameterContext *numericParameter();
    antlr4::tree::TerminalNode *QMark();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ListContext : public ParameterizedTypeContext {
  public:
    ListContext(ParameterizedTypeContext *ctx);

    antlr4::Token *isnull = nullptr;
    antlr4::tree::TerminalNode *List();
    antlr4::tree::TerminalNode *Lt();
    ExprContext *expr();
    antlr4::tree::TerminalNode *Gt();
    antlr4::tree::TerminalNode *QMark();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PrecisionIntervalDayContext : public ParameterizedTypeContext {
  public:
    PrecisionIntervalDayContext(ParameterizedTypeContext *ctx);

    antlr4::Token *isnull = nullptr;
    SubstraitTypeParser::NumericParameterContext *precision = nullptr;
    antlr4::tree::TerminalNode *Interval_Day();
    antlr4::tree::TerminalNode *Lt();
    antlr4::tree::TerminalNode *Gt();
    NumericParameterContext *numericParameter();
    antlr4::tree::TerminalNode *QMark();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FuncContext : public ParameterizedTypeContext {
  public:
    FuncContext(ParameterizedTypeContext *ctx);

    antlr4::Token *isnull = nullptr;
    SubstraitTypeParser::FuncParamsContext *params = nullptr;
    SubstraitTypeParser::ExprContext *returnType = nullptr;
    antlr4::tree::TerminalNode *Func();
    antlr4::tree::TerminalNode *Lt();
    antlr4::tree::TerminalNode *Arrow();
    antlr4::tree::TerminalNode *Gt();
    FuncParamsContext *funcParams();
    ExprContext *expr();
    antlr4::tree::TerminalNode *QMark();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  VarCharContext : public ParameterizedTypeContext {
  public:
    VarCharContext(ParameterizedTypeContext *ctx);

    antlr4::Token *isnull = nullptr;
    SubstraitTypeParser::NumericParameterContext *length = nullptr;
    antlr4::tree::TerminalNode *VarChar();
    antlr4::tree::TerminalNode *Lt();
    antlr4::tree::TerminalNode *Gt();
    NumericParameterContext *numericParameter();
    antlr4::tree::TerminalNode *QMark();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PrecisionIntervalCompoundContext : public ParameterizedTypeContext {
  public:
    PrecisionIntervalCompoundContext(ParameterizedTypeContext *ctx);

    antlr4::Token *isnull = nullptr;
    SubstraitTypeParser::NumericParameterContext *precision = nullptr;
    antlr4::tree::TerminalNode *Interval_Compound();
    antlr4::tree::TerminalNode *Lt();
    antlr4::tree::TerminalNode *Gt();
    NumericParameterContext *numericParameter();
    antlr4::tree::TerminalNode *QMark();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PrecisionTimestampContext : public ParameterizedTypeContext {
  public:
    PrecisionTimestampContext(ParameterizedTypeContext *ctx);

    antlr4::Token *isnull = nullptr;
    SubstraitTypeParser::NumericParameterContext *precision = nullptr;
    antlr4::tree::TerminalNode *Precision_Timestamp();
    antlr4::tree::TerminalNode *Lt();
    antlr4::tree::TerminalNode *Gt();
    NumericParameterContext *numericParameter();
    antlr4::tree::TerminalNode *QMark();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DecimalContext : public ParameterizedTypeContext {
  public:
    DecimalContext(ParameterizedTypeContext *ctx);

    antlr4::Token *isnull = nullptr;
    SubstraitTypeParser::NumericParameterContext *precision = nullptr;
    SubstraitTypeParser::NumericParameterContext *scale = nullptr;
    antlr4::tree::TerminalNode *Decimal();
    antlr4::tree::TerminalNode *Lt();
    antlr4::tree::TerminalNode *Comma();
    antlr4::tree::TerminalNode *Gt();
    std::vector<NumericParameterContext *> numericParameter();
    NumericParameterContext* numericParameter(size_t i);
    antlr4::tree::TerminalNode *QMark();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PrecisionTimeContext : public ParameterizedTypeContext {
  public:
    PrecisionTimeContext(ParameterizedTypeContext *ctx);

    antlr4::Token *isnull = nullptr;
    SubstraitTypeParser::NumericParameterContext *precision = nullptr;
    antlr4::tree::TerminalNode *Precision_Time();
    antlr4::tree::TerminalNode *Lt();
    antlr4::tree::TerminalNode *Gt();
    NumericParameterContext *numericParameter();
    antlr4::tree::TerminalNode *QMark();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MapContext : public ParameterizedTypeContext {
  public:
    MapContext(ParameterizedTypeContext *ctx);

    antlr4::Token *isnull = nullptr;
    SubstraitTypeParser::ExprContext *key = nullptr;
    SubstraitTypeParser::ExprContext *value = nullptr;
    antlr4::tree::TerminalNode *Map();
    antlr4::tree::TerminalNode *Lt();
    antlr4::tree::TerminalNode *Comma();
    antlr4::tree::TerminalNode *Gt();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *QMark();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ParameterizedTypeContext* parameterizedType();

  class  FuncParamsContext : public antlr4::ParserRuleContext {
  public:
    FuncParamsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    FuncParamsContext() = default;
    void copyFrom(FuncParamsContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  SingleFuncParamContext : public FuncParamsContext {
  public:
    SingleFuncParamContext(FuncParamsContext *ctx);

    ExprContext *expr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FuncParamsWithParensContext : public FuncParamsContext {
  public:
    FuncParamsWithParensContext(FuncParamsContext *ctx);

    antlr4::tree::TerminalNode *OParen();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *CParen();
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  FuncParamsContext* funcParams();

  class  NumericParameterContext : public antlr4::ParserRuleContext {
  public:
    NumericParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    NumericParameterContext() = default;
    void copyFrom(NumericParameterContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  NumericParameterNameContext : public NumericParameterContext {
  public:
    NumericParameterNameContext(NumericParameterContext *ctx);

    antlr4::tree::TerminalNode *Identifier();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumericLiteralContext : public NumericParameterContext {
  public:
    NumericLiteralContext(NumericParameterContext *ctx);

    antlr4::tree::TerminalNode *Number();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumericExpressionContext : public NumericParameterContext {
  public:
    NumericExpressionContext(NumericParameterContext *ctx);

    ExprContext *expr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  NumericParameterContext* numericParameter();

  class  AnyTypeContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *isnull = nullptr;
    AnyTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Any();
    antlr4::tree::TerminalNode *QMark();
    antlr4::tree::TerminalNode *AnyVar();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AnyTypeContext* anyType();

  class  TypeDefContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *isnull = nullptr;
    TypeDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ScalarTypeContext *scalarType();
    antlr4::tree::TerminalNode *QMark();
    ParameterizedTypeContext *parameterizedType();
    AnyTypeContext *anyType();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeDefContext* typeDef();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExprContext() = default;
    void copyFrom(ExprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  IfExprContext : public ExprContext {
  public:
    IfExprContext(ExprContext *ctx);

    SubstraitTypeParser::ExprContext *ifExpr = nullptr;
    SubstraitTypeParser::ExprContext *thenExpr = nullptr;
    SubstraitTypeParser::ExprContext *elseExpr = nullptr;
    antlr4::tree::TerminalNode *If();
    antlr4::tree::TerminalNode *Then();
    antlr4::tree::TerminalNode *Else();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TypeLiteralContext : public ExprContext {
  public:
    TypeLiteralContext(ExprContext *ctx);

    TypeDefContext *typeDef();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MultilineDefinitionContext : public ExprContext {
  public:
    MultilineDefinitionContext(ExprContext *ctx);

    SubstraitTypeParser::TypeDefContext *finalType = nullptr;
    std::vector<antlr4::tree::TerminalNode *> Identifier();
    antlr4::tree::TerminalNode* Identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Eq();
    antlr4::tree::TerminalNode* Eq(size_t i);
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    TypeDefContext *typeDef();
    std::vector<antlr4::tree::TerminalNode *> Newline();
    antlr4::tree::TerminalNode* Newline(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TernaryContext : public ExprContext {
  public:
    TernaryContext(ExprContext *ctx);

    SubstraitTypeParser::ExprContext *ifExpr = nullptr;
    SubstraitTypeParser::ExprContext *thenExpr = nullptr;
    SubstraitTypeParser::ExprContext *elseExpr = nullptr;
    antlr4::tree::TerminalNode *QMark();
    antlr4::tree::TerminalNode *Colon();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BinaryExprContext : public ExprContext {
  public:
    BinaryExprContext(ExprContext *ctx);

    SubstraitTypeParser::ExprContext *left = nullptr;
    antlr4::Token *op = nullptr;
    SubstraitTypeParser::ExprContext *right = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *And();
    antlr4::tree::TerminalNode *Or();
    antlr4::tree::TerminalNode *Plus();
    antlr4::tree::TerminalNode *Minus();
    antlr4::tree::TerminalNode *Lt();
    antlr4::tree::TerminalNode *Gt();
    antlr4::tree::TerminalNode *Eq();
    antlr4::tree::TerminalNode *Ne();
    antlr4::tree::TerminalNode *Lte();
    antlr4::tree::TerminalNode *Gte();
    antlr4::tree::TerminalNode *Asterisk();
    antlr4::tree::TerminalNode *ForwardSlash();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ParenExpressionContext : public ExprContext {
  public:
    ParenExpressionContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *OParen();
    ExprContext *expr();
    antlr4::tree::TerminalNode *CParen();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ParameterNameContext : public ExprContext {
  public:
    ParameterNameContext(ExprContext *ctx);

    antlr4::Token *isnull = nullptr;
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *QMark();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FunctionCallContext : public ExprContext {
  public:
    FunctionCallContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *OParen();
    antlr4::tree::TerminalNode *CParen();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NotExprContext : public ExprContext {
  public:
    NotExprContext(ExprContext *ctx);

    ExprContext *expr();
    antlr4::tree::TerminalNode *Bang();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LiteralNumberContext : public ExprContext {
  public:
    LiteralNumberContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *Number();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExprContext* expr();
  ExprContext* expr(int precedence);

  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool exprSempred(ExprContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

}  // namespace substraittype
