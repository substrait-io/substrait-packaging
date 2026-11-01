// SPDX-License-Identifier: Apache-2.0


// Generated from SubstraitType.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "SubstraitTypeParser.h"


namespace substraittype {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by SubstraitTypeParser.
 */
class  SubstraitTypeVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by SubstraitTypeParser.
   */
    virtual std::any visitStartRule(SubstraitTypeParser::StartRuleContext *context) = 0;

    virtual std::any visitTypeStatement(SubstraitTypeParser::TypeStatementContext *context) = 0;

    virtual std::any visitBoolean(SubstraitTypeParser::BooleanContext *context) = 0;

    virtual std::any visitI8(SubstraitTypeParser::I8Context *context) = 0;

    virtual std::any visitI16(SubstraitTypeParser::I16Context *context) = 0;

    virtual std::any visitI32(SubstraitTypeParser::I32Context *context) = 0;

    virtual std::any visitI64(SubstraitTypeParser::I64Context *context) = 0;

    virtual std::any visitFp32(SubstraitTypeParser::Fp32Context *context) = 0;

    virtual std::any visitFp64(SubstraitTypeParser::Fp64Context *context) = 0;

    virtual std::any visitString(SubstraitTypeParser::StringContext *context) = 0;

    virtual std::any visitBinary(SubstraitTypeParser::BinaryContext *context) = 0;

    virtual std::any visitDate(SubstraitTypeParser::DateContext *context) = 0;

    virtual std::any visitIntervalYear(SubstraitTypeParser::IntervalYearContext *context) = 0;

    virtual std::any visitUuid(SubstraitTypeParser::UuidContext *context) = 0;

    virtual std::any visitFixedChar(SubstraitTypeParser::FixedCharContext *context) = 0;

    virtual std::any visitVarChar(SubstraitTypeParser::VarCharContext *context) = 0;

    virtual std::any visitFixedBinary(SubstraitTypeParser::FixedBinaryContext *context) = 0;

    virtual std::any visitDecimal(SubstraitTypeParser::DecimalContext *context) = 0;

    virtual std::any visitPrecisionIntervalDay(SubstraitTypeParser::PrecisionIntervalDayContext *context) = 0;

    virtual std::any visitPrecisionIntervalCompound(SubstraitTypeParser::PrecisionIntervalCompoundContext *context) = 0;

    virtual std::any visitPrecisionTime(SubstraitTypeParser::PrecisionTimeContext *context) = 0;

    virtual std::any visitPrecisionTimestamp(SubstraitTypeParser::PrecisionTimestampContext *context) = 0;

    virtual std::any visitPrecisionTimestampTZ(SubstraitTypeParser::PrecisionTimestampTZContext *context) = 0;

    virtual std::any visitStruct(SubstraitTypeParser::StructContext *context) = 0;

    virtual std::any visitNStruct(SubstraitTypeParser::NStructContext *context) = 0;

    virtual std::any visitList(SubstraitTypeParser::ListContext *context) = 0;

    virtual std::any visitMap(SubstraitTypeParser::MapContext *context) = 0;

    virtual std::any visitFunc(SubstraitTypeParser::FuncContext *context) = 0;

    virtual std::any visitUserDefined(SubstraitTypeParser::UserDefinedContext *context) = 0;

    virtual std::any visitSingleFuncParam(SubstraitTypeParser::SingleFuncParamContext *context) = 0;

    virtual std::any visitFuncParamsWithParens(SubstraitTypeParser::FuncParamsWithParensContext *context) = 0;

    virtual std::any visitNumericLiteral(SubstraitTypeParser::NumericLiteralContext *context) = 0;

    virtual std::any visitNumericParameterName(SubstraitTypeParser::NumericParameterNameContext *context) = 0;

    virtual std::any visitNumericExpression(SubstraitTypeParser::NumericExpressionContext *context) = 0;

    virtual std::any visitAnyType(SubstraitTypeParser::AnyTypeContext *context) = 0;

    virtual std::any visitTypeDef(SubstraitTypeParser::TypeDefContext *context) = 0;

    virtual std::any visitIfExpr(SubstraitTypeParser::IfExprContext *context) = 0;

    virtual std::any visitOr(SubstraitTypeParser::OrContext *context) = 0;

    virtual std::any visitMultilineDefinition(SubstraitTypeParser::MultilineDefinitionContext *context) = 0;

    virtual std::any visitMulDiv(SubstraitTypeParser::MulDivContext *context) = 0;

    virtual std::any visitAddSub(SubstraitTypeParser::AddSubContext *context) = 0;

    virtual std::any visitTernary(SubstraitTypeParser::TernaryContext *context) = 0;

    virtual std::any visitParameterName(SubstraitTypeParser::ParameterNameContext *context) = 0;

    virtual std::any visitTypeLiteral(SubstraitTypeParser::TypeLiteralContext *context) = 0;

    virtual std::any visitComparison(SubstraitTypeParser::ComparisonContext *context) = 0;

    virtual std::any visitAnd(SubstraitTypeParser::AndContext *context) = 0;

    virtual std::any visitParenExpression(SubstraitTypeParser::ParenExpressionContext *context) = 0;

    virtual std::any visitFunctionCall(SubstraitTypeParser::FunctionCallContext *context) = 0;

    virtual std::any visitNotExpr(SubstraitTypeParser::NotExprContext *context) = 0;

    virtual std::any visitEquality(SubstraitTypeParser::EqualityContext *context) = 0;

    virtual std::any visitLiteralNumber(SubstraitTypeParser::LiteralNumberContext *context) = 0;


};

}  // namespace substraittype
