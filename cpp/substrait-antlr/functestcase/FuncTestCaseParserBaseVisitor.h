// SPDX-License-Identifier: Apache-2.0


// Generated from FuncTestCaseParser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "FuncTestCaseParserVisitor.h"


namespace functestcase {

/**
 * This class provides an empty implementation of FuncTestCaseParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  FuncTestCaseParserBaseVisitor : public FuncTestCaseParserVisitor {
public:

  virtual std::any visitDoc(FuncTestCaseParser::DocContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitHeader(FuncTestCaseParser::HeaderContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVersion(FuncTestCaseParser::VersionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInclude(FuncTestCaseParser::IncludeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDependency(FuncTestCaseParser::DependencyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTestGroupDescription(FuncTestCaseParser::TestGroupDescriptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTestCase(FuncTestCaseParser::TestCaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitScalarFuncTestGroup(FuncTestCaseParser::ScalarFuncTestGroupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAggregateFuncTestGroup(FuncTestCaseParser::AggregateFuncTestGroupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArguments(FuncTestCaseParser::ArgumentsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitResult(FuncTestCaseParser::ResultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArgument(FuncTestCaseParser::ArgumentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAggFuncTestCase(FuncTestCaseParser::AggFuncTestCaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMultiArgAggregateFuncCall(FuncTestCaseParser::MultiArgAggregateFuncCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompactAggregateFuncCall(FuncTestCaseParser::CompactAggregateFuncCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSingleArgAggregateFuncCall(FuncTestCaseParser::SingleArgAggregateFuncCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTableData(FuncTestCaseParser::TableDataContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTableRows(FuncTestCaseParser::TableRowsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDataColumn(FuncTestCaseParser::DataColumnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColumnValues(FuncTestCaseParser::ColumnValuesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLiteral(FuncTestCaseParser::LiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQualifiedAggregateFuncArgs(FuncTestCaseParser::QualifiedAggregateFuncArgsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAggregateFuncArgs(FuncTestCaseParser::AggregateFuncArgsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQualifiedAggregateFuncArg(FuncTestCaseParser::QualifiedAggregateFuncArgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAggregateFuncArg(FuncTestCaseParser::AggregateFuncArgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNumericLiteral(FuncTestCaseParser::NumericLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFloatLiteral(FuncTestCaseParser::FloatLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNullArg(FuncTestCaseParser::NullArgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntArg(FuncTestCaseParser::IntArgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFloatArg(FuncTestCaseParser::FloatArgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDecimalArg(FuncTestCaseParser::DecimalArgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBooleanArg(FuncTestCaseParser::BooleanArgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStringArg(FuncTestCaseParser::StringArgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDateArg(FuncTestCaseParser::DateArgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntervalYearArg(FuncTestCaseParser::IntervalYearArgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntervalDayArg(FuncTestCaseParser::IntervalDayArgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntervalCompoundArg(FuncTestCaseParser::IntervalCompoundArgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFixedCharArg(FuncTestCaseParser::FixedCharArgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVarCharArg(FuncTestCaseParser::VarCharArgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFixedBinaryArg(FuncTestCaseParser::FixedBinaryArgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecisionTimeArg(FuncTestCaseParser::PrecisionTimeArgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecisionTimestampArg(FuncTestCaseParser::PrecisionTimestampArgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecisionTimestampTZArg(FuncTestCaseParser::PrecisionTimestampTZArgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitListArg(FuncTestCaseParser::ListArgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLambdaArg(FuncTestCaseParser::LambdaArgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnumArg(FuncTestCaseParser::EnumArgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLiteralList(FuncTestCaseParser::LiteralListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitListElement(FuncTestCaseParser::ListElementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLiteralLambda(FuncTestCaseParser::LiteralLambdaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSingleParam(FuncTestCaseParser::SingleParamContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTupleParams(FuncTestCaseParser::TupleParamsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLambdaBody(FuncTestCaseParser::LambdaBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDataType(FuncTestCaseParser::DataTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBoolean(FuncTestCaseParser::BooleanContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInt(FuncTestCaseParser::IntContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFloat(FuncTestCaseParser::FloatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitString(FuncTestCaseParser::StringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBinary(FuncTestCaseParser::BinaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDate(FuncTestCaseParser::DateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntervalYear(FuncTestCaseParser::IntervalYearContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUuid(FuncTestCaseParser::UuidContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUserDefined(FuncTestCaseParser::UserDefinedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBooleanType(FuncTestCaseParser::BooleanTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStringType(FuncTestCaseParser::StringTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBinaryType(FuncTestCaseParser::BinaryTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntType(FuncTestCaseParser::IntTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFloatType(FuncTestCaseParser::FloatTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDateType(FuncTestCaseParser::DateTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntervalYearType(FuncTestCaseParser::IntervalYearTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntervalDayType(FuncTestCaseParser::IntervalDayTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntervalCompoundType(FuncTestCaseParser::IntervalCompoundTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFixedCharType(FuncTestCaseParser::FixedCharTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVarCharType(FuncTestCaseParser::VarCharTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFixedBinaryType(FuncTestCaseParser::FixedBinaryTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDecimalType(FuncTestCaseParser::DecimalTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecisionTimeType(FuncTestCaseParser::PrecisionTimeTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecisionTimestampType(FuncTestCaseParser::PrecisionTimestampTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecisionTimestampTZType(FuncTestCaseParser::PrecisionTimestampTZTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitList(FuncTestCaseParser::ListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncType(FuncTestCaseParser::FuncTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSingleFuncParam(FuncTestCaseParser::SingleFuncParamContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncParamsWithParens(FuncTestCaseParser::FuncParamsWithParensContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameterizedType(FuncTestCaseParser::ParameterizedTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntegerLiteral(FuncTestCaseParser::IntegerLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubstraitError(FuncTestCaseParser::SubstraitErrorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncOption(FuncTestCaseParser::FuncOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOptionName(FuncTestCaseParser::OptionNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOptionValue(FuncTestCaseParser::OptionValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncOptions(FuncTestCaseParser::FuncOptionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNonReserved(FuncTestCaseParser::NonReservedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdentifier(FuncTestCaseParser::IdentifierContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace functestcase
