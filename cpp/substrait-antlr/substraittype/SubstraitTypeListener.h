// SPDX-License-Identifier: Apache-2.0


// Generated from SubstraitType.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "SubstraitTypeParser.h"


namespace substraittype {

/**
 * This interface defines an abstract listener for a parse tree produced by SubstraitTypeParser.
 */
class  SubstraitTypeListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterStartRule(SubstraitTypeParser::StartRuleContext *ctx) = 0;
  virtual void exitStartRule(SubstraitTypeParser::StartRuleContext *ctx) = 0;

  virtual void enterTypeStatement(SubstraitTypeParser::TypeStatementContext *ctx) = 0;
  virtual void exitTypeStatement(SubstraitTypeParser::TypeStatementContext *ctx) = 0;

  virtual void enterBoolean(SubstraitTypeParser::BooleanContext *ctx) = 0;
  virtual void exitBoolean(SubstraitTypeParser::BooleanContext *ctx) = 0;

  virtual void enterI8(SubstraitTypeParser::I8Context *ctx) = 0;
  virtual void exitI8(SubstraitTypeParser::I8Context *ctx) = 0;

  virtual void enterI16(SubstraitTypeParser::I16Context *ctx) = 0;
  virtual void exitI16(SubstraitTypeParser::I16Context *ctx) = 0;

  virtual void enterI32(SubstraitTypeParser::I32Context *ctx) = 0;
  virtual void exitI32(SubstraitTypeParser::I32Context *ctx) = 0;

  virtual void enterI64(SubstraitTypeParser::I64Context *ctx) = 0;
  virtual void exitI64(SubstraitTypeParser::I64Context *ctx) = 0;

  virtual void enterFp32(SubstraitTypeParser::Fp32Context *ctx) = 0;
  virtual void exitFp32(SubstraitTypeParser::Fp32Context *ctx) = 0;

  virtual void enterFp64(SubstraitTypeParser::Fp64Context *ctx) = 0;
  virtual void exitFp64(SubstraitTypeParser::Fp64Context *ctx) = 0;

  virtual void enterString(SubstraitTypeParser::StringContext *ctx) = 0;
  virtual void exitString(SubstraitTypeParser::StringContext *ctx) = 0;

  virtual void enterBinary(SubstraitTypeParser::BinaryContext *ctx) = 0;
  virtual void exitBinary(SubstraitTypeParser::BinaryContext *ctx) = 0;

  virtual void enterDate(SubstraitTypeParser::DateContext *ctx) = 0;
  virtual void exitDate(SubstraitTypeParser::DateContext *ctx) = 0;

  virtual void enterIntervalYear(SubstraitTypeParser::IntervalYearContext *ctx) = 0;
  virtual void exitIntervalYear(SubstraitTypeParser::IntervalYearContext *ctx) = 0;

  virtual void enterUuid(SubstraitTypeParser::UuidContext *ctx) = 0;
  virtual void exitUuid(SubstraitTypeParser::UuidContext *ctx) = 0;

  virtual void enterFixedChar(SubstraitTypeParser::FixedCharContext *ctx) = 0;
  virtual void exitFixedChar(SubstraitTypeParser::FixedCharContext *ctx) = 0;

  virtual void enterVarChar(SubstraitTypeParser::VarCharContext *ctx) = 0;
  virtual void exitVarChar(SubstraitTypeParser::VarCharContext *ctx) = 0;

  virtual void enterFixedBinary(SubstraitTypeParser::FixedBinaryContext *ctx) = 0;
  virtual void exitFixedBinary(SubstraitTypeParser::FixedBinaryContext *ctx) = 0;

  virtual void enterDecimal(SubstraitTypeParser::DecimalContext *ctx) = 0;
  virtual void exitDecimal(SubstraitTypeParser::DecimalContext *ctx) = 0;

  virtual void enterPrecisionIntervalDay(SubstraitTypeParser::PrecisionIntervalDayContext *ctx) = 0;
  virtual void exitPrecisionIntervalDay(SubstraitTypeParser::PrecisionIntervalDayContext *ctx) = 0;

  virtual void enterPrecisionIntervalCompound(SubstraitTypeParser::PrecisionIntervalCompoundContext *ctx) = 0;
  virtual void exitPrecisionIntervalCompound(SubstraitTypeParser::PrecisionIntervalCompoundContext *ctx) = 0;

  virtual void enterPrecisionTime(SubstraitTypeParser::PrecisionTimeContext *ctx) = 0;
  virtual void exitPrecisionTime(SubstraitTypeParser::PrecisionTimeContext *ctx) = 0;

  virtual void enterPrecisionTimestamp(SubstraitTypeParser::PrecisionTimestampContext *ctx) = 0;
  virtual void exitPrecisionTimestamp(SubstraitTypeParser::PrecisionTimestampContext *ctx) = 0;

  virtual void enterPrecisionTimestampTZ(SubstraitTypeParser::PrecisionTimestampTZContext *ctx) = 0;
  virtual void exitPrecisionTimestampTZ(SubstraitTypeParser::PrecisionTimestampTZContext *ctx) = 0;

  virtual void enterStruct(SubstraitTypeParser::StructContext *ctx) = 0;
  virtual void exitStruct(SubstraitTypeParser::StructContext *ctx) = 0;

  virtual void enterNStruct(SubstraitTypeParser::NStructContext *ctx) = 0;
  virtual void exitNStruct(SubstraitTypeParser::NStructContext *ctx) = 0;

  virtual void enterList(SubstraitTypeParser::ListContext *ctx) = 0;
  virtual void exitList(SubstraitTypeParser::ListContext *ctx) = 0;

  virtual void enterMap(SubstraitTypeParser::MapContext *ctx) = 0;
  virtual void exitMap(SubstraitTypeParser::MapContext *ctx) = 0;

  virtual void enterFunc(SubstraitTypeParser::FuncContext *ctx) = 0;
  virtual void exitFunc(SubstraitTypeParser::FuncContext *ctx) = 0;

  virtual void enterUserDefined(SubstraitTypeParser::UserDefinedContext *ctx) = 0;
  virtual void exitUserDefined(SubstraitTypeParser::UserDefinedContext *ctx) = 0;

  virtual void enterSingleFuncParam(SubstraitTypeParser::SingleFuncParamContext *ctx) = 0;
  virtual void exitSingleFuncParam(SubstraitTypeParser::SingleFuncParamContext *ctx) = 0;

  virtual void enterFuncParamsWithParens(SubstraitTypeParser::FuncParamsWithParensContext *ctx) = 0;
  virtual void exitFuncParamsWithParens(SubstraitTypeParser::FuncParamsWithParensContext *ctx) = 0;

  virtual void enterNumericLiteral(SubstraitTypeParser::NumericLiteralContext *ctx) = 0;
  virtual void exitNumericLiteral(SubstraitTypeParser::NumericLiteralContext *ctx) = 0;

  virtual void enterNumericParameterName(SubstraitTypeParser::NumericParameterNameContext *ctx) = 0;
  virtual void exitNumericParameterName(SubstraitTypeParser::NumericParameterNameContext *ctx) = 0;

  virtual void enterNumericExpression(SubstraitTypeParser::NumericExpressionContext *ctx) = 0;
  virtual void exitNumericExpression(SubstraitTypeParser::NumericExpressionContext *ctx) = 0;

  virtual void enterAnyType(SubstraitTypeParser::AnyTypeContext *ctx) = 0;
  virtual void exitAnyType(SubstraitTypeParser::AnyTypeContext *ctx) = 0;

  virtual void enterTypeDef(SubstraitTypeParser::TypeDefContext *ctx) = 0;
  virtual void exitTypeDef(SubstraitTypeParser::TypeDefContext *ctx) = 0;

  virtual void enterIfExpr(SubstraitTypeParser::IfExprContext *ctx) = 0;
  virtual void exitIfExpr(SubstraitTypeParser::IfExprContext *ctx) = 0;

  virtual void enterOr(SubstraitTypeParser::OrContext *ctx) = 0;
  virtual void exitOr(SubstraitTypeParser::OrContext *ctx) = 0;

  virtual void enterMultilineDefinition(SubstraitTypeParser::MultilineDefinitionContext *ctx) = 0;
  virtual void exitMultilineDefinition(SubstraitTypeParser::MultilineDefinitionContext *ctx) = 0;

  virtual void enterMulDiv(SubstraitTypeParser::MulDivContext *ctx) = 0;
  virtual void exitMulDiv(SubstraitTypeParser::MulDivContext *ctx) = 0;

  virtual void enterAddSub(SubstraitTypeParser::AddSubContext *ctx) = 0;
  virtual void exitAddSub(SubstraitTypeParser::AddSubContext *ctx) = 0;

  virtual void enterTernary(SubstraitTypeParser::TernaryContext *ctx) = 0;
  virtual void exitTernary(SubstraitTypeParser::TernaryContext *ctx) = 0;

  virtual void enterParameterName(SubstraitTypeParser::ParameterNameContext *ctx) = 0;
  virtual void exitParameterName(SubstraitTypeParser::ParameterNameContext *ctx) = 0;

  virtual void enterTypeLiteral(SubstraitTypeParser::TypeLiteralContext *ctx) = 0;
  virtual void exitTypeLiteral(SubstraitTypeParser::TypeLiteralContext *ctx) = 0;

  virtual void enterComparison(SubstraitTypeParser::ComparisonContext *ctx) = 0;
  virtual void exitComparison(SubstraitTypeParser::ComparisonContext *ctx) = 0;

  virtual void enterAnd(SubstraitTypeParser::AndContext *ctx) = 0;
  virtual void exitAnd(SubstraitTypeParser::AndContext *ctx) = 0;

  virtual void enterParenExpression(SubstraitTypeParser::ParenExpressionContext *ctx) = 0;
  virtual void exitParenExpression(SubstraitTypeParser::ParenExpressionContext *ctx) = 0;

  virtual void enterFunctionCall(SubstraitTypeParser::FunctionCallContext *ctx) = 0;
  virtual void exitFunctionCall(SubstraitTypeParser::FunctionCallContext *ctx) = 0;

  virtual void enterNotExpr(SubstraitTypeParser::NotExprContext *ctx) = 0;
  virtual void exitNotExpr(SubstraitTypeParser::NotExprContext *ctx) = 0;

  virtual void enterEquality(SubstraitTypeParser::EqualityContext *ctx) = 0;
  virtual void exitEquality(SubstraitTypeParser::EqualityContext *ctx) = 0;

  virtual void enterLiteralNumber(SubstraitTypeParser::LiteralNumberContext *ctx) = 0;
  virtual void exitLiteralNumber(SubstraitTypeParser::LiteralNumberContext *ctx) = 0;


};

}  // namespace substraittype
