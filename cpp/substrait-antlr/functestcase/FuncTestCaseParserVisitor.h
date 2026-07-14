// SPDX-License-Identifier: Apache-2.0


// Generated from FuncTestCaseParser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "FuncTestCaseParser.h"


namespace functestcase {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by FuncTestCaseParser.
 */
class  FuncTestCaseParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by FuncTestCaseParser.
   */
    virtual std::any visitDoc(FuncTestCaseParser::DocContext *context) = 0;

    virtual std::any visitHeader(FuncTestCaseParser::HeaderContext *context) = 0;

    virtual std::any visitVersion(FuncTestCaseParser::VersionContext *context) = 0;

    virtual std::any visitInclude(FuncTestCaseParser::IncludeContext *context) = 0;

    virtual std::any visitDependency(FuncTestCaseParser::DependencyContext *context) = 0;

    virtual std::any visitTestGroupDescription(FuncTestCaseParser::TestGroupDescriptionContext *context) = 0;

    virtual std::any visitTestCase(FuncTestCaseParser::TestCaseContext *context) = 0;

    virtual std::any visitScalarFuncTestGroup(FuncTestCaseParser::ScalarFuncTestGroupContext *context) = 0;

    virtual std::any visitAggregateFuncTestGroup(FuncTestCaseParser::AggregateFuncTestGroupContext *context) = 0;

    virtual std::any visitArguments(FuncTestCaseParser::ArgumentsContext *context) = 0;

    virtual std::any visitResult(FuncTestCaseParser::ResultContext *context) = 0;

    virtual std::any visitArgument(FuncTestCaseParser::ArgumentContext *context) = 0;

    virtual std::any visitAggFuncTestCase(FuncTestCaseParser::AggFuncTestCaseContext *context) = 0;

    virtual std::any visitMultiArgAggregateFuncCall(FuncTestCaseParser::MultiArgAggregateFuncCallContext *context) = 0;

    virtual std::any visitCompactAggregateFuncCall(FuncTestCaseParser::CompactAggregateFuncCallContext *context) = 0;

    virtual std::any visitSingleArgAggregateFuncCall(FuncTestCaseParser::SingleArgAggregateFuncCallContext *context) = 0;

    virtual std::any visitTableData(FuncTestCaseParser::TableDataContext *context) = 0;

    virtual std::any visitTableRows(FuncTestCaseParser::TableRowsContext *context) = 0;

    virtual std::any visitDataColumn(FuncTestCaseParser::DataColumnContext *context) = 0;

    virtual std::any visitColumnValues(FuncTestCaseParser::ColumnValuesContext *context) = 0;

    virtual std::any visitLiteral(FuncTestCaseParser::LiteralContext *context) = 0;

    virtual std::any visitQualifiedAggregateFuncArgs(FuncTestCaseParser::QualifiedAggregateFuncArgsContext *context) = 0;

    virtual std::any visitAggregateFuncArgs(FuncTestCaseParser::AggregateFuncArgsContext *context) = 0;

    virtual std::any visitQualifiedAggregateFuncArg(FuncTestCaseParser::QualifiedAggregateFuncArgContext *context) = 0;

    virtual std::any visitAggregateFuncArg(FuncTestCaseParser::AggregateFuncArgContext *context) = 0;

    virtual std::any visitNumericLiteral(FuncTestCaseParser::NumericLiteralContext *context) = 0;

    virtual std::any visitFloatLiteral(FuncTestCaseParser::FloatLiteralContext *context) = 0;

    virtual std::any visitNullArg(FuncTestCaseParser::NullArgContext *context) = 0;

    virtual std::any visitIntArg(FuncTestCaseParser::IntArgContext *context) = 0;

    virtual std::any visitFloatArg(FuncTestCaseParser::FloatArgContext *context) = 0;

    virtual std::any visitDecimalArg(FuncTestCaseParser::DecimalArgContext *context) = 0;

    virtual std::any visitBooleanArg(FuncTestCaseParser::BooleanArgContext *context) = 0;

    virtual std::any visitStringArg(FuncTestCaseParser::StringArgContext *context) = 0;

    virtual std::any visitDateArg(FuncTestCaseParser::DateArgContext *context) = 0;

    virtual std::any visitIntervalYearArg(FuncTestCaseParser::IntervalYearArgContext *context) = 0;

    virtual std::any visitIntervalDayArg(FuncTestCaseParser::IntervalDayArgContext *context) = 0;

    virtual std::any visitIntervalCompoundArg(FuncTestCaseParser::IntervalCompoundArgContext *context) = 0;

    virtual std::any visitFixedCharArg(FuncTestCaseParser::FixedCharArgContext *context) = 0;

    virtual std::any visitVarCharArg(FuncTestCaseParser::VarCharArgContext *context) = 0;

    virtual std::any visitFixedBinaryArg(FuncTestCaseParser::FixedBinaryArgContext *context) = 0;

    virtual std::any visitPrecisionTimeArg(FuncTestCaseParser::PrecisionTimeArgContext *context) = 0;

    virtual std::any visitPrecisionTimestampArg(FuncTestCaseParser::PrecisionTimestampArgContext *context) = 0;

    virtual std::any visitPrecisionTimestampTZArg(FuncTestCaseParser::PrecisionTimestampTZArgContext *context) = 0;

    virtual std::any visitListArg(FuncTestCaseParser::ListArgContext *context) = 0;

    virtual std::any visitLambdaArg(FuncTestCaseParser::LambdaArgContext *context) = 0;

    virtual std::any visitEnumArg(FuncTestCaseParser::EnumArgContext *context) = 0;

    virtual std::any visitLiteralList(FuncTestCaseParser::LiteralListContext *context) = 0;

    virtual std::any visitListElement(FuncTestCaseParser::ListElementContext *context) = 0;

    virtual std::any visitLiteralLambda(FuncTestCaseParser::LiteralLambdaContext *context) = 0;

    virtual std::any visitSingleParam(FuncTestCaseParser::SingleParamContext *context) = 0;

    virtual std::any visitTupleParams(FuncTestCaseParser::TupleParamsContext *context) = 0;

    virtual std::any visitLambdaBody(FuncTestCaseParser::LambdaBodyContext *context) = 0;

    virtual std::any visitDataType(FuncTestCaseParser::DataTypeContext *context) = 0;

    virtual std::any visitBoolean(FuncTestCaseParser::BooleanContext *context) = 0;

    virtual std::any visitInt(FuncTestCaseParser::IntContext *context) = 0;

    virtual std::any visitFloat(FuncTestCaseParser::FloatContext *context) = 0;

    virtual std::any visitString(FuncTestCaseParser::StringContext *context) = 0;

    virtual std::any visitBinary(FuncTestCaseParser::BinaryContext *context) = 0;

    virtual std::any visitDate(FuncTestCaseParser::DateContext *context) = 0;

    virtual std::any visitIntervalYear(FuncTestCaseParser::IntervalYearContext *context) = 0;

    virtual std::any visitUuid(FuncTestCaseParser::UuidContext *context) = 0;

    virtual std::any visitUserDefined(FuncTestCaseParser::UserDefinedContext *context) = 0;

    virtual std::any visitBooleanType(FuncTestCaseParser::BooleanTypeContext *context) = 0;

    virtual std::any visitStringType(FuncTestCaseParser::StringTypeContext *context) = 0;

    virtual std::any visitBinaryType(FuncTestCaseParser::BinaryTypeContext *context) = 0;

    virtual std::any visitIntType(FuncTestCaseParser::IntTypeContext *context) = 0;

    virtual std::any visitFloatType(FuncTestCaseParser::FloatTypeContext *context) = 0;

    virtual std::any visitDateType(FuncTestCaseParser::DateTypeContext *context) = 0;

    virtual std::any visitIntervalYearType(FuncTestCaseParser::IntervalYearTypeContext *context) = 0;

    virtual std::any visitIntervalDayType(FuncTestCaseParser::IntervalDayTypeContext *context) = 0;

    virtual std::any visitIntervalCompoundType(FuncTestCaseParser::IntervalCompoundTypeContext *context) = 0;

    virtual std::any visitFixedCharType(FuncTestCaseParser::FixedCharTypeContext *context) = 0;

    virtual std::any visitVarCharType(FuncTestCaseParser::VarCharTypeContext *context) = 0;

    virtual std::any visitFixedBinaryType(FuncTestCaseParser::FixedBinaryTypeContext *context) = 0;

    virtual std::any visitDecimalType(FuncTestCaseParser::DecimalTypeContext *context) = 0;

    virtual std::any visitPrecisionTimeType(FuncTestCaseParser::PrecisionTimeTypeContext *context) = 0;

    virtual std::any visitPrecisionTimestampType(FuncTestCaseParser::PrecisionTimestampTypeContext *context) = 0;

    virtual std::any visitPrecisionTimestampTZType(FuncTestCaseParser::PrecisionTimestampTZTypeContext *context) = 0;

    virtual std::any visitList(FuncTestCaseParser::ListContext *context) = 0;

    virtual std::any visitFuncType(FuncTestCaseParser::FuncTypeContext *context) = 0;

    virtual std::any visitSingleFuncParam(FuncTestCaseParser::SingleFuncParamContext *context) = 0;

    virtual std::any visitFuncParamsWithParens(FuncTestCaseParser::FuncParamsWithParensContext *context) = 0;

    virtual std::any visitParameterizedType(FuncTestCaseParser::ParameterizedTypeContext *context) = 0;

    virtual std::any visitIntegerLiteral(FuncTestCaseParser::IntegerLiteralContext *context) = 0;

    virtual std::any visitSubstraitError(FuncTestCaseParser::SubstraitErrorContext *context) = 0;

    virtual std::any visitFuncOption(FuncTestCaseParser::FuncOptionContext *context) = 0;

    virtual std::any visitOptionName(FuncTestCaseParser::OptionNameContext *context) = 0;

    virtual std::any visitOptionValue(FuncTestCaseParser::OptionValueContext *context) = 0;

    virtual std::any visitFuncOptions(FuncTestCaseParser::FuncOptionsContext *context) = 0;

    virtual std::any visitNonReserved(FuncTestCaseParser::NonReservedContext *context) = 0;

    virtual std::any visitIdentifier(FuncTestCaseParser::IdentifierContext *context) = 0;


};

}  // namespace functestcase
