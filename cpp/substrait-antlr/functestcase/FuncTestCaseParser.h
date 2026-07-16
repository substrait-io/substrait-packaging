// SPDX-License-Identifier: Apache-2.0


// Generated from FuncTestCaseParser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"


namespace functestcase {


class  FuncTestCaseParser : public antlr4::Parser {
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

  enum {
    RuleDoc = 0, RuleHeader = 1, RuleVersion = 2, RuleInclude = 3, RuleDependency = 4, 
    RuleTestGroupDescription = 5, RuleTestCase = 6, RuleTestGroup = 7, RuleArguments = 8, 
    RuleResult = 9, RuleArgument = 10, RuleAggFuncTestCase = 11, RuleAggFuncCall = 12, 
    RuleTableData = 13, RuleTableRows = 14, RuleDataColumn = 15, RuleColumnValues = 16, 
    RuleLiteral = 17, RuleQualifiedAggregateFuncArgs = 18, RuleAggregateFuncArgs = 19, 
    RuleQualifiedAggregateFuncArg = 20, RuleAggregateFuncArg = 21, RuleNumericLiteral = 22, 
    RuleFloatLiteral = 23, RuleNullArg = 24, RuleIntArg = 25, RuleFloatArg = 26, 
    RuleDecimalArg = 27, RuleBooleanArg = 28, RuleStringArg = 29, RuleDateArg = 30, 
    RuleIntervalYearArg = 31, RuleIntervalDayArg = 32, RuleIntervalCompoundArg = 33, 
    RuleFixedCharArg = 34, RuleVarCharArg = 35, RuleFixedBinaryArg = 36, 
    RulePrecisionTimeArg = 37, RulePrecisionTimestampArg = 38, RulePrecisionTimestampTZArg = 39, 
    RuleListArg = 40, RuleLambdaArg = 41, RuleEnumArg = 42, RuleLiteralList = 43, 
    RuleListElement = 44, RuleLiteralLambda = 45, RuleLambdaParameters = 46, 
    RuleLambdaBody = 47, RuleDataType = 48, RuleScalarType = 49, RuleBooleanType = 50, 
    RuleStringType = 51, RuleBinaryType = 52, RuleIntType = 53, RuleFloatType = 54, 
    RuleDateType = 55, RuleIntervalYearType = 56, RuleIntervalDayType = 57, 
    RuleIntervalCompoundType = 58, RuleFixedCharType = 59, RuleVarCharType = 60, 
    RuleFixedBinaryType = 61, RuleDecimalType = 62, RulePrecisionTimeType = 63, 
    RulePrecisionTimestampType = 64, RulePrecisionTimestampTZType = 65, 
    RuleListType = 66, RuleFuncType = 67, RuleFuncParameters = 68, RuleParameterizedType = 69, 
    RuleNumericParameter = 70, RuleSubstraitError = 71, RuleFuncOption = 72, 
    RuleOptionName = 73, RuleOptionValue = 74, RuleFuncOptions = 75, RuleNonReserved = 76, 
    RuleIdentifier = 77
  };

  explicit FuncTestCaseParser(antlr4::TokenStream *input);

  FuncTestCaseParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~FuncTestCaseParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class DocContext;
  class HeaderContext;
  class VersionContext;
  class IncludeContext;
  class DependencyContext;
  class TestGroupDescriptionContext;
  class TestCaseContext;
  class TestGroupContext;
  class ArgumentsContext;
  class ResultContext;
  class ArgumentContext;
  class AggFuncTestCaseContext;
  class AggFuncCallContext;
  class TableDataContext;
  class TableRowsContext;
  class DataColumnContext;
  class ColumnValuesContext;
  class LiteralContext;
  class QualifiedAggregateFuncArgsContext;
  class AggregateFuncArgsContext;
  class QualifiedAggregateFuncArgContext;
  class AggregateFuncArgContext;
  class NumericLiteralContext;
  class FloatLiteralContext;
  class NullArgContext;
  class IntArgContext;
  class FloatArgContext;
  class DecimalArgContext;
  class BooleanArgContext;
  class StringArgContext;
  class DateArgContext;
  class IntervalYearArgContext;
  class IntervalDayArgContext;
  class IntervalCompoundArgContext;
  class FixedCharArgContext;
  class VarCharArgContext;
  class FixedBinaryArgContext;
  class PrecisionTimeArgContext;
  class PrecisionTimestampArgContext;
  class PrecisionTimestampTZArgContext;
  class ListArgContext;
  class LambdaArgContext;
  class EnumArgContext;
  class LiteralListContext;
  class ListElementContext;
  class LiteralLambdaContext;
  class LambdaParametersContext;
  class LambdaBodyContext;
  class DataTypeContext;
  class ScalarTypeContext;
  class BooleanTypeContext;
  class StringTypeContext;
  class BinaryTypeContext;
  class IntTypeContext;
  class FloatTypeContext;
  class DateTypeContext;
  class IntervalYearTypeContext;
  class IntervalDayTypeContext;
  class IntervalCompoundTypeContext;
  class FixedCharTypeContext;
  class VarCharTypeContext;
  class FixedBinaryTypeContext;
  class DecimalTypeContext;
  class PrecisionTimeTypeContext;
  class PrecisionTimestampTypeContext;
  class PrecisionTimestampTZTypeContext;
  class ListTypeContext;
  class FuncTypeContext;
  class FuncParametersContext;
  class ParameterizedTypeContext;
  class NumericParameterContext;
  class SubstraitErrorContext;
  class FuncOptionContext;
  class OptionNameContext;
  class OptionValueContext;
  class FuncOptionsContext;
  class NonReservedContext;
  class IdentifierContext; 

  class  DocContext : public antlr4::ParserRuleContext {
  public:
    DocContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    HeaderContext *header();
    antlr4::tree::TerminalNode *EOF();
    std::vector<TestGroupContext *> testGroup();
    TestGroupContext* testGroup(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DocContext* doc();

  class  HeaderContext : public antlr4::ParserRuleContext {
  public:
    HeaderContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VersionContext *version();
    IncludeContext *include();
    std::vector<DependencyContext *> dependency();
    DependencyContext* dependency(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HeaderContext* header();

  class  VersionContext : public antlr4::ParserRuleContext {
  public:
    VersionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TripleHash();
    antlr4::tree::TerminalNode *Colon();
    antlr4::tree::TerminalNode *FormatVersion();
    antlr4::tree::TerminalNode *SubstraitScalarTest();
    antlr4::tree::TerminalNode *SubstraitAggregateTest();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VersionContext* version();

  class  IncludeContext : public antlr4::ParserRuleContext {
  public:
    IncludeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TripleHash();
    antlr4::tree::TerminalNode *SubstraitInclude();
    antlr4::tree::TerminalNode *Colon();
    antlr4::tree::TerminalNode *ExtensionUrn();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IncludeContext* include();

  class  DependencyContext : public antlr4::ParserRuleContext {
  public:
    DependencyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TripleHash();
    antlr4::tree::TerminalNode *SubstraitDependency();
    antlr4::tree::TerminalNode *Colon();
    antlr4::tree::TerminalNode *ExtensionUrn();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DependencyContext* dependency();

  class  TestGroupDescriptionContext : public antlr4::ParserRuleContext {
  public:
    TestGroupDescriptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DescriptionLine();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TestGroupDescriptionContext* testGroupDescription();

  class  TestCaseContext : public antlr4::ParserRuleContext {
  public:
    FuncTestCaseParser::IdentifierContext *functionName = nullptr;
    TestCaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OParen();
    ArgumentsContext *arguments();
    antlr4::tree::TerminalNode *CParen();
    antlr4::tree::TerminalNode *Eq();
    ResultContext *result();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *OBracket();
    FuncOptionsContext *funcOptions();
    antlr4::tree::TerminalNode *CBracket();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TestCaseContext* testCase();

  class  TestGroupContext : public antlr4::ParserRuleContext {
  public:
    TestGroupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    TestGroupContext() = default;
    void copyFrom(TestGroupContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ScalarFuncTestGroupContext : public TestGroupContext {
  public:
    ScalarFuncTestGroupContext(TestGroupContext *ctx);

    TestGroupDescriptionContext *testGroupDescription();
    std::vector<TestCaseContext *> testCase();
    TestCaseContext* testCase(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AggregateFuncTestGroupContext : public TestGroupContext {
  public:
    AggregateFuncTestGroupContext(TestGroupContext *ctx);

    TestGroupDescriptionContext *testGroupDescription();
    std::vector<AggFuncTestCaseContext *> aggFuncTestCase();
    AggFuncTestCaseContext* aggFuncTestCase(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  TestGroupContext* testGroup();

  class  ArgumentsContext : public antlr4::ParserRuleContext {
  public:
    ArgumentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ArgumentContext *> argument();
    ArgumentContext* argument(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArgumentsContext* arguments();

  class  ResultContext : public antlr4::ParserRuleContext {
  public:
    ResultContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ArgumentContext *argument();
    SubstraitErrorContext *substraitError();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ResultContext* result();

  class  ArgumentContext : public antlr4::ParserRuleContext {
  public:
    ArgumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NullArgContext *nullArg();
    EnumArgContext *enumArg();
    IntArgContext *intArg();
    FloatArgContext *floatArg();
    BooleanArgContext *booleanArg();
    StringArgContext *stringArg();
    DecimalArgContext *decimalArg();
    DateArgContext *dateArg();
    IntervalYearArgContext *intervalYearArg();
    IntervalDayArgContext *intervalDayArg();
    IntervalCompoundArgContext *intervalCompoundArg();
    FixedCharArgContext *fixedCharArg();
    VarCharArgContext *varCharArg();
    FixedBinaryArgContext *fixedBinaryArg();
    PrecisionTimeArgContext *precisionTimeArg();
    PrecisionTimestampArgContext *precisionTimestampArg();
    PrecisionTimestampTZArgContext *precisionTimestampTZArg();
    ListArgContext *listArg();
    LambdaArgContext *lambdaArg();
    antlr4::tree::TerminalNode *Identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArgumentContext* argument();

  class  AggFuncTestCaseContext : public antlr4::ParserRuleContext {
  public:
    AggFuncTestCaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AggFuncCallContext *aggFuncCall();
    antlr4::tree::TerminalNode *Eq();
    ResultContext *result();
    antlr4::tree::TerminalNode *OBracket();
    FuncOptionsContext *funcOptions();
    antlr4::tree::TerminalNode *CBracket();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AggFuncTestCaseContext* aggFuncTestCase();

  class  AggFuncCallContext : public antlr4::ParserRuleContext {
  public:
    AggFuncCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    AggFuncCallContext() = default;
    void copyFrom(AggFuncCallContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  SingleArgAggregateFuncCallContext : public AggFuncCallContext {
  public:
    SingleArgAggregateFuncCallContext(AggFuncCallContext *ctx);

    FuncTestCaseParser::IdentifierContext *functName = nullptr;
    antlr4::tree::TerminalNode *OParen();
    DataColumnContext *dataColumn();
    antlr4::tree::TerminalNode *CParen();
    IdentifierContext *identifier();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MultiArgAggregateFuncCallContext : public AggFuncCallContext {
  public:
    MultiArgAggregateFuncCallContext(AggFuncCallContext *ctx);

    FuncTestCaseParser::IdentifierContext *funcName = nullptr;
    TableDataContext *tableData();
    antlr4::tree::TerminalNode *OParen();
    antlr4::tree::TerminalNode *CParen();
    IdentifierContext *identifier();
    QualifiedAggregateFuncArgsContext *qualifiedAggregateFuncArgs();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CompactAggregateFuncCallContext : public AggFuncCallContext {
  public:
    CompactAggregateFuncCallContext(AggFuncCallContext *ctx);

    FuncTestCaseParser::IdentifierContext *functName = nullptr;
    TableRowsContext *tableRows();
    antlr4::tree::TerminalNode *OParen();
    antlr4::tree::TerminalNode *CParen();
    IdentifierContext *identifier();
    AggregateFuncArgsContext *aggregateFuncArgs();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  AggFuncCallContext* aggFuncCall();

  class  TableDataContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *tableName = nullptr;
    TableDataContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Define();
    antlr4::tree::TerminalNode *OParen();
    std::vector<DataTypeContext *> dataType();
    DataTypeContext* dataType(size_t i);
    antlr4::tree::TerminalNode *CParen();
    antlr4::tree::TerminalNode *Eq();
    TableRowsContext *tableRows();
    antlr4::tree::TerminalNode *Identifier();
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableDataContext* tableData();

  class  TableRowsContext : public antlr4::ParserRuleContext {
  public:
    TableRowsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OParen();
    antlr4::tree::TerminalNode *CParen();
    std::vector<ColumnValuesContext *> columnValues();
    ColumnValuesContext* columnValues(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableRowsContext* tableRows();

  class  DataColumnContext : public antlr4::ParserRuleContext {
  public:
    DataColumnContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ColumnValuesContext *columnValues();
    antlr4::tree::TerminalNode *DoubleColon();
    DataTypeContext *dataType();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DataColumnContext* dataColumn();

  class  ColumnValuesContext : public antlr4::ParserRuleContext {
  public:
    ColumnValuesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OParen();
    antlr4::tree::TerminalNode *CParen();
    std::vector<LiteralContext *> literal();
    LiteralContext* literal(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ColumnValuesContext* columnValues();

  class  LiteralContext : public antlr4::ParserRuleContext {
  public:
    LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NullLiteral();
    NumericLiteralContext *numericLiteral();
    antlr4::tree::TerminalNode *BooleanLiteral();
    antlr4::tree::TerminalNode *StringLiteral();
    antlr4::tree::TerminalNode *DateLiteral();
    antlr4::tree::TerminalNode *TimeLiteral();
    antlr4::tree::TerminalNode *TimestampLiteral();
    antlr4::tree::TerminalNode *TimestampTzLiteral();
    antlr4::tree::TerminalNode *IntervalYearLiteral();
    antlr4::tree::TerminalNode *IntervalDayLiteral();
    antlr4::tree::TerminalNode *IntervalCompoundLiteral();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LiteralContext* literal();

  class  QualifiedAggregateFuncArgsContext : public antlr4::ParserRuleContext {
  public:
    QualifiedAggregateFuncArgsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<QualifiedAggregateFuncArgContext *> qualifiedAggregateFuncArg();
    QualifiedAggregateFuncArgContext* qualifiedAggregateFuncArg(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QualifiedAggregateFuncArgsContext* qualifiedAggregateFuncArgs();

  class  AggregateFuncArgsContext : public antlr4::ParserRuleContext {
  public:
    AggregateFuncArgsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AggregateFuncArgContext *> aggregateFuncArg();
    AggregateFuncArgContext* aggregateFuncArg(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AggregateFuncArgsContext* aggregateFuncArgs();

  class  QualifiedAggregateFuncArgContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *tableName = nullptr;
    QualifiedAggregateFuncArgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Dot();
    antlr4::tree::TerminalNode *ColumnName();
    antlr4::tree::TerminalNode *Identifier();
    ArgumentContext *argument();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QualifiedAggregateFuncArgContext* qualifiedAggregateFuncArg();

  class  AggregateFuncArgContext : public antlr4::ParserRuleContext {
  public:
    AggregateFuncArgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ColumnName();
    antlr4::tree::TerminalNode *DoubleColon();
    DataTypeContext *dataType();
    ArgumentContext *argument();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AggregateFuncArgContext* aggregateFuncArg();

  class  NumericLiteralContext : public antlr4::ParserRuleContext {
  public:
    NumericLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DecimalLiteral();
    antlr4::tree::TerminalNode *IntegerLiteral();
    FloatLiteralContext *floatLiteral();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NumericLiteralContext* numericLiteral();

  class  FloatLiteralContext : public antlr4::ParserRuleContext {
  public:
    FloatLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FloatLiteral();
    antlr4::tree::TerminalNode *NaN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FloatLiteralContext* floatLiteral();

  class  NullArgContext : public antlr4::ParserRuleContext {
  public:
    NullArgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NullLiteral();
    antlr4::tree::TerminalNode *DoubleColon();
    DataTypeContext *dataType();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NullArgContext* nullArg();

  class  IntArgContext : public antlr4::ParserRuleContext {
  public:
    IntArgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IntegerLiteral();
    antlr4::tree::TerminalNode *DoubleColon();
    IntTypeContext *intType();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntArgContext* intArg();

  class  FloatArgContext : public antlr4::ParserRuleContext {
  public:
    FloatArgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumericLiteralContext *numericLiteral();
    antlr4::tree::TerminalNode *DoubleColon();
    FloatTypeContext *floatType();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FloatArgContext* floatArg();

  class  DecimalArgContext : public antlr4::ParserRuleContext {
  public:
    DecimalArgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumericLiteralContext *numericLiteral();
    antlr4::tree::TerminalNode *DoubleColon();
    DecimalTypeContext *decimalType();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DecimalArgContext* decimalArg();

  class  BooleanArgContext : public antlr4::ParserRuleContext {
  public:
    BooleanArgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BooleanLiteral();
    antlr4::tree::TerminalNode *DoubleColon();
    BooleanTypeContext *booleanType();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BooleanArgContext* booleanArg();

  class  StringArgContext : public antlr4::ParserRuleContext {
  public:
    StringArgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *StringLiteral();
    antlr4::tree::TerminalNode *DoubleColon();
    StringTypeContext *stringType();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StringArgContext* stringArg();

  class  DateArgContext : public antlr4::ParserRuleContext {
  public:
    DateArgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DateLiteral();
    antlr4::tree::TerminalNode *DoubleColon();
    DateTypeContext *dateType();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DateArgContext* dateArg();

  class  IntervalYearArgContext : public antlr4::ParserRuleContext {
  public:
    IntervalYearArgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IntervalYearLiteral();
    antlr4::tree::TerminalNode *DoubleColon();
    IntervalYearTypeContext *intervalYearType();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntervalYearArgContext* intervalYearArg();

  class  IntervalDayArgContext : public antlr4::ParserRuleContext {
  public:
    IntervalDayArgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IntervalDayLiteral();
    antlr4::tree::TerminalNode *DoubleColon();
    IntervalDayTypeContext *intervalDayType();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntervalDayArgContext* intervalDayArg();

  class  IntervalCompoundArgContext : public antlr4::ParserRuleContext {
  public:
    IntervalCompoundArgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IntervalCompoundLiteral();
    antlr4::tree::TerminalNode *DoubleColon();
    IntervalCompoundTypeContext *intervalCompoundType();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntervalCompoundArgContext* intervalCompoundArg();

  class  FixedCharArgContext : public antlr4::ParserRuleContext {
  public:
    FixedCharArgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *StringLiteral();
    antlr4::tree::TerminalNode *DoubleColon();
    FixedCharTypeContext *fixedCharType();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FixedCharArgContext* fixedCharArg();

  class  VarCharArgContext : public antlr4::ParserRuleContext {
  public:
    VarCharArgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *StringLiteral();
    antlr4::tree::TerminalNode *DoubleColon();
    VarCharTypeContext *varCharType();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VarCharArgContext* varCharArg();

  class  FixedBinaryArgContext : public antlr4::ParserRuleContext {
  public:
    FixedBinaryArgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *StringLiteral();
    antlr4::tree::TerminalNode *DoubleColon();
    FixedBinaryTypeContext *fixedBinaryType();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FixedBinaryArgContext* fixedBinaryArg();

  class  PrecisionTimeArgContext : public antlr4::ParserRuleContext {
  public:
    PrecisionTimeArgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TimeLiteral();
    antlr4::tree::TerminalNode *DoubleColon();
    PrecisionTimeTypeContext *precisionTimeType();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrecisionTimeArgContext* precisionTimeArg();

  class  PrecisionTimestampArgContext : public antlr4::ParserRuleContext {
  public:
    PrecisionTimestampArgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TimestampLiteral();
    antlr4::tree::TerminalNode *DoubleColon();
    PrecisionTimestampTypeContext *precisionTimestampType();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrecisionTimestampArgContext* precisionTimestampArg();

  class  PrecisionTimestampTZArgContext : public antlr4::ParserRuleContext {
  public:
    PrecisionTimestampTZArgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TimestampTzLiteral();
    antlr4::tree::TerminalNode *DoubleColon();
    PrecisionTimestampTZTypeContext *precisionTimestampTZType();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrecisionTimestampTZArgContext* precisionTimestampTZArg();

  class  ListArgContext : public antlr4::ParserRuleContext {
  public:
    ListArgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LiteralListContext *literalList();
    antlr4::tree::TerminalNode *DoubleColon();
    ListTypeContext *listType();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ListArgContext* listArg();

  class  LambdaArgContext : public antlr4::ParserRuleContext {
  public:
    LambdaArgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LiteralLambdaContext *literalLambda();
    antlr4::tree::TerminalNode *DoubleColon();
    FuncTypeContext *funcType();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LambdaArgContext* lambdaArg();

  class  EnumArgContext : public antlr4::ParserRuleContext {
  public:
    EnumArgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *DoubleColon();
    antlr4::tree::TerminalNode *EnumType();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumArgContext* enumArg();

  class  LiteralListContext : public antlr4::ParserRuleContext {
  public:
    LiteralListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OBracket();
    antlr4::tree::TerminalNode *CBracket();
    std::vector<ListElementContext *> listElement();
    ListElementContext* listElement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LiteralListContext* literalList();

  class  ListElementContext : public antlr4::ParserRuleContext {
  public:
    ListElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LiteralContext *literal();
    LiteralListContext *literalList();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ListElementContext* listElement();

  class  LiteralLambdaContext : public antlr4::ParserRuleContext {
  public:
    LiteralLambdaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OParen();
    LambdaParametersContext *lambdaParameters();
    antlr4::tree::TerminalNode *Arrow();
    LambdaBodyContext *lambdaBody();
    antlr4::tree::TerminalNode *CParen();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LiteralLambdaContext* literalLambda();

  class  LambdaParametersContext : public antlr4::ParserRuleContext {
  public:
    LambdaParametersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    LambdaParametersContext() = default;
    void copyFrom(LambdaParametersContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  TupleParamsContext : public LambdaParametersContext {
  public:
    TupleParamsContext(LambdaParametersContext *ctx);

    antlr4::tree::TerminalNode *OParen();
    std::vector<antlr4::tree::TerminalNode *> Identifier();
    antlr4::tree::TerminalNode* Identifier(size_t i);
    antlr4::tree::TerminalNode *CParen();
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SingleParamContext : public LambdaParametersContext {
  public:
    SingleParamContext(LambdaParametersContext *ctx);

    antlr4::tree::TerminalNode *Identifier();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  LambdaParametersContext* lambdaParameters();

  class  LambdaBodyContext : public antlr4::ParserRuleContext {
  public:
    LambdaBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *OParen();
    ArgumentsContext *arguments();
    antlr4::tree::TerminalNode *CParen();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LambdaBodyContext* lambdaBody();

  class  DataTypeContext : public antlr4::ParserRuleContext {
  public:
    DataTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ScalarTypeContext *scalarType();
    ParameterizedTypeContext *parameterizedType();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DataTypeContext* dataType();

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

    DateTypeContext *dateType();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BooleanContext : public ScalarTypeContext {
  public:
    BooleanContext(ScalarTypeContext *ctx);

    BooleanTypeContext *booleanType();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StringContext : public ScalarTypeContext {
  public:
    StringContext(ScalarTypeContext *ctx);

    StringTypeContext *stringType();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BinaryContext : public ScalarTypeContext {
  public:
    BinaryContext(ScalarTypeContext *ctx);

    BinaryTypeContext *binaryType();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  UserDefinedContext : public ScalarTypeContext {
  public:
    UserDefinedContext(ScalarTypeContext *ctx);

    antlr4::Token *isnull = nullptr;
    antlr4::tree::TerminalNode *UserDefined();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *QMark();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FloatContext : public ScalarTypeContext {
  public:
    FloatContext(ScalarTypeContext *ctx);

    FloatTypeContext *floatType();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IntervalYearContext : public ScalarTypeContext {
  public:
    IntervalYearContext(ScalarTypeContext *ctx);

    IntervalYearTypeContext *intervalYearType();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  UuidContext : public ScalarTypeContext {
  public:
    UuidContext(ScalarTypeContext *ctx);

    antlr4::Token *isnull = nullptr;
    antlr4::tree::TerminalNode *UUID();
    antlr4::tree::TerminalNode *QMark();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IntContext : public ScalarTypeContext {
  public:
    IntContext(ScalarTypeContext *ctx);

    IntTypeContext *intType();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ScalarTypeContext* scalarType();

  class  BooleanTypeContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *isnull = nullptr;
    BooleanTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Bool();
    antlr4::tree::TerminalNode *Boolean();
    antlr4::tree::TerminalNode *QMark();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BooleanTypeContext* booleanType();

  class  StringTypeContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *isnull = nullptr;
    StringTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Str();
    antlr4::tree::TerminalNode *String();
    antlr4::tree::TerminalNode *QMark();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StringTypeContext* stringType();

  class  BinaryTypeContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *isnull = nullptr;
    BinaryTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Binary();
    antlr4::tree::TerminalNode *VBin();
    antlr4::tree::TerminalNode *QMark();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BinaryTypeContext* binaryType();

  class  IntTypeContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *isnull = nullptr;
    IntTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *I8();
    antlr4::tree::TerminalNode *I16();
    antlr4::tree::TerminalNode *I32();
    antlr4::tree::TerminalNode *I64();
    antlr4::tree::TerminalNode *QMark();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntTypeContext* intType();

  class  FloatTypeContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *isnull = nullptr;
    FloatTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FP32();
    antlr4::tree::TerminalNode *FP64();
    antlr4::tree::TerminalNode *QMark();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FloatTypeContext* floatType();

  class  DateTypeContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *isnull = nullptr;
    DateTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Date();
    antlr4::tree::TerminalNode *QMark();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DateTypeContext* dateType();

  class  IntervalYearTypeContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *isnull = nullptr;
    IntervalYearTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IYear();
    antlr4::tree::TerminalNode *Interval_Year();
    antlr4::tree::TerminalNode *QMark();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntervalYearTypeContext* intervalYearType();

  class  IntervalDayTypeContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *isnull = nullptr;
    FuncTestCaseParser::NumericParameterContext *len = nullptr;
    IntervalDayTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDay();
    antlr4::tree::TerminalNode *Interval_Day();
    antlr4::tree::TerminalNode *OAngleBracket();
    antlr4::tree::TerminalNode *CAngleBracket();
    antlr4::tree::TerminalNode *QMark();
    NumericParameterContext *numericParameter();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntervalDayTypeContext* intervalDayType();

  class  IntervalCompoundTypeContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *isnull = nullptr;
    FuncTestCaseParser::NumericParameterContext *len = nullptr;
    IntervalCompoundTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ICompound();
    antlr4::tree::TerminalNode *Interval_Compound();
    antlr4::tree::TerminalNode *OAngleBracket();
    antlr4::tree::TerminalNode *CAngleBracket();
    antlr4::tree::TerminalNode *QMark();
    NumericParameterContext *numericParameter();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntervalCompoundTypeContext* intervalCompoundType();

  class  FixedCharTypeContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *isnull = nullptr;
    FuncTestCaseParser::NumericParameterContext *len = nullptr;
    FixedCharTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OAngleBracket();
    antlr4::tree::TerminalNode *CAngleBracket();
    antlr4::tree::TerminalNode *FChar();
    antlr4::tree::TerminalNode *FixedChar();
    NumericParameterContext *numericParameter();
    antlr4::tree::TerminalNode *QMark();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FixedCharTypeContext* fixedCharType();

  class  VarCharTypeContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *isnull = nullptr;
    FuncTestCaseParser::NumericParameterContext *len = nullptr;
    VarCharTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OAngleBracket();
    antlr4::tree::TerminalNode *CAngleBracket();
    antlr4::tree::TerminalNode *VChar();
    antlr4::tree::TerminalNode *VarChar();
    NumericParameterContext *numericParameter();
    antlr4::tree::TerminalNode *QMark();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VarCharTypeContext* varCharType();

  class  FixedBinaryTypeContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *isnull = nullptr;
    FuncTestCaseParser::NumericParameterContext *len = nullptr;
    FixedBinaryTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OAngleBracket();
    antlr4::tree::TerminalNode *CAngleBracket();
    antlr4::tree::TerminalNode *FBin();
    antlr4::tree::TerminalNode *FixedBinary();
    NumericParameterContext *numericParameter();
    antlr4::tree::TerminalNode *QMark();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FixedBinaryTypeContext* fixedBinaryType();

  class  DecimalTypeContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *isnull = nullptr;
    FuncTestCaseParser::NumericParameterContext *precision = nullptr;
    FuncTestCaseParser::NumericParameterContext *scale = nullptr;
    DecimalTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Dec();
    antlr4::tree::TerminalNode *Decimal();
    antlr4::tree::TerminalNode *OAngleBracket();
    antlr4::tree::TerminalNode *Comma();
    antlr4::tree::TerminalNode *CAngleBracket();
    antlr4::tree::TerminalNode *QMark();
    std::vector<NumericParameterContext *> numericParameter();
    NumericParameterContext* numericParameter(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DecimalTypeContext* decimalType();

  class  PrecisionTimeTypeContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *isnull = nullptr;
    FuncTestCaseParser::NumericParameterContext *precision = nullptr;
    PrecisionTimeTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OAngleBracket();
    antlr4::tree::TerminalNode *CAngleBracket();
    antlr4::tree::TerminalNode *PT();
    antlr4::tree::TerminalNode *Precision_Time();
    NumericParameterContext *numericParameter();
    antlr4::tree::TerminalNode *QMark();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrecisionTimeTypeContext* precisionTimeType();

  class  PrecisionTimestampTypeContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *isnull = nullptr;
    FuncTestCaseParser::NumericParameterContext *precision = nullptr;
    PrecisionTimestampTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OAngleBracket();
    antlr4::tree::TerminalNode *CAngleBracket();
    antlr4::tree::TerminalNode *PTs();
    antlr4::tree::TerminalNode *Precision_Timestamp();
    NumericParameterContext *numericParameter();
    antlr4::tree::TerminalNode *QMark();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrecisionTimestampTypeContext* precisionTimestampType();

  class  PrecisionTimestampTZTypeContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *isnull = nullptr;
    FuncTestCaseParser::NumericParameterContext *precision = nullptr;
    PrecisionTimestampTZTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OAngleBracket();
    antlr4::tree::TerminalNode *CAngleBracket();
    antlr4::tree::TerminalNode *PTsTZ();
    antlr4::tree::TerminalNode *Precision_Timestamp_TZ();
    NumericParameterContext *numericParameter();
    antlr4::tree::TerminalNode *QMark();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrecisionTimestampTZTypeContext* precisionTimestampTZType();

  class  ListTypeContext : public antlr4::ParserRuleContext {
  public:
    ListTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ListTypeContext() = default;
    void copyFrom(ListTypeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ListContext : public ListTypeContext {
  public:
    ListContext(ListTypeContext *ctx);

    antlr4::Token *isnull = nullptr;
    FuncTestCaseParser::DataTypeContext *elemType = nullptr;
    antlr4::tree::TerminalNode *List();
    antlr4::tree::TerminalNode *OAngleBracket();
    antlr4::tree::TerminalNode *CAngleBracket();
    DataTypeContext *dataType();
    antlr4::tree::TerminalNode *QMark();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ListTypeContext* listType();

  class  FuncTypeContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *isnull = nullptr;
    FuncTestCaseParser::FuncParametersContext *params = nullptr;
    FuncTestCaseParser::DataTypeContext *returnType = nullptr;
    FuncTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Func();
    antlr4::tree::TerminalNode *OAngleBracket();
    antlr4::tree::TerminalNode *Arrow();
    antlr4::tree::TerminalNode *CAngleBracket();
    FuncParametersContext *funcParameters();
    DataTypeContext *dataType();
    antlr4::tree::TerminalNode *QMark();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FuncTypeContext* funcType();

  class  FuncParametersContext : public antlr4::ParserRuleContext {
  public:
    FuncParametersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    FuncParametersContext() = default;
    void copyFrom(FuncParametersContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  SingleFuncParamContext : public FuncParametersContext {
  public:
    SingleFuncParamContext(FuncParametersContext *ctx);

    DataTypeContext *dataType();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FuncParamsWithParensContext : public FuncParametersContext {
  public:
    FuncParamsWithParensContext(FuncParametersContext *ctx);

    antlr4::tree::TerminalNode *OParen();
    std::vector<DataTypeContext *> dataType();
    DataTypeContext* dataType(size_t i);
    antlr4::tree::TerminalNode *CParen();
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  FuncParametersContext* funcParameters();

  class  ParameterizedTypeContext : public antlr4::ParserRuleContext {
  public:
    ParameterizedTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FixedCharTypeContext *fixedCharType();
    VarCharTypeContext *varCharType();
    FixedBinaryTypeContext *fixedBinaryType();
    DecimalTypeContext *decimalType();
    IntervalDayTypeContext *intervalDayType();
    IntervalCompoundTypeContext *intervalCompoundType();
    PrecisionTimeTypeContext *precisionTimeType();
    PrecisionTimestampTypeContext *precisionTimestampType();
    PrecisionTimestampTZTypeContext *precisionTimestampTZType();
    ListTypeContext *listType();
    FuncTypeContext *funcType();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterizedTypeContext* parameterizedType();

  class  NumericParameterContext : public antlr4::ParserRuleContext {
  public:
    NumericParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    NumericParameterContext() = default;
    void copyFrom(NumericParameterContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  IntegerLiteralContext : public NumericParameterContext {
  public:
    IntegerLiteralContext(NumericParameterContext *ctx);

    antlr4::tree::TerminalNode *IntegerLiteral();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  NumericParameterContext* numericParameter();

  class  SubstraitErrorContext : public antlr4::ParserRuleContext {
  public:
    SubstraitErrorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ErrorResult();
    antlr4::tree::TerminalNode *UndefineResult();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SubstraitErrorContext* substraitError();

  class  FuncOptionContext : public antlr4::ParserRuleContext {
  public:
    FuncOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OptionNameContext *optionName();
    antlr4::tree::TerminalNode *Colon();
    OptionValueContext *optionValue();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FuncOptionContext* funcOption();

  class  OptionNameContext : public antlr4::ParserRuleContext {
  public:
    OptionNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Overflow();
    antlr4::tree::TerminalNode *Rounding();
    antlr4::tree::TerminalNode *NullHandling();
    antlr4::tree::TerminalNode *SpacesOnly();
    antlr4::tree::TerminalNode *Identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OptionNameContext* optionName();

  class  OptionValueContext : public antlr4::ParserRuleContext {
  public:
    OptionValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Error();
    antlr4::tree::TerminalNode *Saturate();
    antlr4::tree::TerminalNode *Silent();
    antlr4::tree::TerminalNode *TieToEven();
    antlr4::tree::TerminalNode *NaN();
    antlr4::tree::TerminalNode *Truncate();
    antlr4::tree::TerminalNode *AcceptNulls();
    antlr4::tree::TerminalNode *IgnoreNulls();
    antlr4::tree::TerminalNode *BooleanLiteral();
    antlr4::tree::TerminalNode *NullLiteral();
    antlr4::tree::TerminalNode *Identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OptionValueContext* optionValue();

  class  FuncOptionsContext : public antlr4::ParserRuleContext {
  public:
    FuncOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FuncOptionContext *> funcOption();
    FuncOptionContext* funcOption(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FuncOptionsContext* funcOptions();

  class  NonReservedContext : public antlr4::ParserRuleContext {
  public:
    NonReservedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *And();
    antlr4::tree::TerminalNode *Or();
    antlr4::tree::TerminalNode *Truncate();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NonReservedContext* nonReserved();

  class  IdentifierContext : public antlr4::ParserRuleContext {
  public:
    IdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NonReservedContext *nonReserved();
    antlr4::tree::TerminalNode *Identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierContext* identifier();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

}  // namespace functestcase
