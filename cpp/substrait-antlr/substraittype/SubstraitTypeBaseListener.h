// SPDX-License-Identifier: Apache-2.0


// Generated from SubstraitType.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "SubstraitTypeListener.h"


namespace substraittype {

/**
 * This class provides an empty implementation of SubstraitTypeListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  SubstraitTypeBaseListener : public SubstraitTypeListener {
public:

  virtual void enterStartRule(SubstraitTypeParser::StartRuleContext * /*ctx*/) override { }
  virtual void exitStartRule(SubstraitTypeParser::StartRuleContext * /*ctx*/) override { }

  virtual void enterTypeStatement(SubstraitTypeParser::TypeStatementContext * /*ctx*/) override { }
  virtual void exitTypeStatement(SubstraitTypeParser::TypeStatementContext * /*ctx*/) override { }

  virtual void enterBoolean(SubstraitTypeParser::BooleanContext * /*ctx*/) override { }
  virtual void exitBoolean(SubstraitTypeParser::BooleanContext * /*ctx*/) override { }

  virtual void enterI8(SubstraitTypeParser::I8Context * /*ctx*/) override { }
  virtual void exitI8(SubstraitTypeParser::I8Context * /*ctx*/) override { }

  virtual void enterI16(SubstraitTypeParser::I16Context * /*ctx*/) override { }
  virtual void exitI16(SubstraitTypeParser::I16Context * /*ctx*/) override { }

  virtual void enterI32(SubstraitTypeParser::I32Context * /*ctx*/) override { }
  virtual void exitI32(SubstraitTypeParser::I32Context * /*ctx*/) override { }

  virtual void enterI64(SubstraitTypeParser::I64Context * /*ctx*/) override { }
  virtual void exitI64(SubstraitTypeParser::I64Context * /*ctx*/) override { }

  virtual void enterFp32(SubstraitTypeParser::Fp32Context * /*ctx*/) override { }
  virtual void exitFp32(SubstraitTypeParser::Fp32Context * /*ctx*/) override { }

  virtual void enterFp64(SubstraitTypeParser::Fp64Context * /*ctx*/) override { }
  virtual void exitFp64(SubstraitTypeParser::Fp64Context * /*ctx*/) override { }

  virtual void enterString(SubstraitTypeParser::StringContext * /*ctx*/) override { }
  virtual void exitString(SubstraitTypeParser::StringContext * /*ctx*/) override { }

  virtual void enterBinary(SubstraitTypeParser::BinaryContext * /*ctx*/) override { }
  virtual void exitBinary(SubstraitTypeParser::BinaryContext * /*ctx*/) override { }

  virtual void enterDate(SubstraitTypeParser::DateContext * /*ctx*/) override { }
  virtual void exitDate(SubstraitTypeParser::DateContext * /*ctx*/) override { }

  virtual void enterIntervalYear(SubstraitTypeParser::IntervalYearContext * /*ctx*/) override { }
  virtual void exitIntervalYear(SubstraitTypeParser::IntervalYearContext * /*ctx*/) override { }

  virtual void enterUuid(SubstraitTypeParser::UuidContext * /*ctx*/) override { }
  virtual void exitUuid(SubstraitTypeParser::UuidContext * /*ctx*/) override { }

  virtual void enterFixedChar(SubstraitTypeParser::FixedCharContext * /*ctx*/) override { }
  virtual void exitFixedChar(SubstraitTypeParser::FixedCharContext * /*ctx*/) override { }

  virtual void enterVarChar(SubstraitTypeParser::VarCharContext * /*ctx*/) override { }
  virtual void exitVarChar(SubstraitTypeParser::VarCharContext * /*ctx*/) override { }

  virtual void enterFixedBinary(SubstraitTypeParser::FixedBinaryContext * /*ctx*/) override { }
  virtual void exitFixedBinary(SubstraitTypeParser::FixedBinaryContext * /*ctx*/) override { }

  virtual void enterDecimal(SubstraitTypeParser::DecimalContext * /*ctx*/) override { }
  virtual void exitDecimal(SubstraitTypeParser::DecimalContext * /*ctx*/) override { }

  virtual void enterPrecisionIntervalDay(SubstraitTypeParser::PrecisionIntervalDayContext * /*ctx*/) override { }
  virtual void exitPrecisionIntervalDay(SubstraitTypeParser::PrecisionIntervalDayContext * /*ctx*/) override { }

  virtual void enterPrecisionIntervalCompound(SubstraitTypeParser::PrecisionIntervalCompoundContext * /*ctx*/) override { }
  virtual void exitPrecisionIntervalCompound(SubstraitTypeParser::PrecisionIntervalCompoundContext * /*ctx*/) override { }

  virtual void enterPrecisionTime(SubstraitTypeParser::PrecisionTimeContext * /*ctx*/) override { }
  virtual void exitPrecisionTime(SubstraitTypeParser::PrecisionTimeContext * /*ctx*/) override { }

  virtual void enterPrecisionTimestamp(SubstraitTypeParser::PrecisionTimestampContext * /*ctx*/) override { }
  virtual void exitPrecisionTimestamp(SubstraitTypeParser::PrecisionTimestampContext * /*ctx*/) override { }

  virtual void enterPrecisionTimestampTZ(SubstraitTypeParser::PrecisionTimestampTZContext * /*ctx*/) override { }
  virtual void exitPrecisionTimestampTZ(SubstraitTypeParser::PrecisionTimestampTZContext * /*ctx*/) override { }

  virtual void enterStruct(SubstraitTypeParser::StructContext * /*ctx*/) override { }
  virtual void exitStruct(SubstraitTypeParser::StructContext * /*ctx*/) override { }

  virtual void enterNStruct(SubstraitTypeParser::NStructContext * /*ctx*/) override { }
  virtual void exitNStruct(SubstraitTypeParser::NStructContext * /*ctx*/) override { }

  virtual void enterList(SubstraitTypeParser::ListContext * /*ctx*/) override { }
  virtual void exitList(SubstraitTypeParser::ListContext * /*ctx*/) override { }

  virtual void enterMap(SubstraitTypeParser::MapContext * /*ctx*/) override { }
  virtual void exitMap(SubstraitTypeParser::MapContext * /*ctx*/) override { }

  virtual void enterFunc(SubstraitTypeParser::FuncContext * /*ctx*/) override { }
  virtual void exitFunc(SubstraitTypeParser::FuncContext * /*ctx*/) override { }

  virtual void enterUserDefined(SubstraitTypeParser::UserDefinedContext * /*ctx*/) override { }
  virtual void exitUserDefined(SubstraitTypeParser::UserDefinedContext * /*ctx*/) override { }

  virtual void enterSingleFuncParam(SubstraitTypeParser::SingleFuncParamContext * /*ctx*/) override { }
  virtual void exitSingleFuncParam(SubstraitTypeParser::SingleFuncParamContext * /*ctx*/) override { }

  virtual void enterFuncParamsWithParens(SubstraitTypeParser::FuncParamsWithParensContext * /*ctx*/) override { }
  virtual void exitFuncParamsWithParens(SubstraitTypeParser::FuncParamsWithParensContext * /*ctx*/) override { }

  virtual void enterNumericLiteral(SubstraitTypeParser::NumericLiteralContext * /*ctx*/) override { }
  virtual void exitNumericLiteral(SubstraitTypeParser::NumericLiteralContext * /*ctx*/) override { }

  virtual void enterNumericParameterName(SubstraitTypeParser::NumericParameterNameContext * /*ctx*/) override { }
  virtual void exitNumericParameterName(SubstraitTypeParser::NumericParameterNameContext * /*ctx*/) override { }

  virtual void enterNumericExpression(SubstraitTypeParser::NumericExpressionContext * /*ctx*/) override { }
  virtual void exitNumericExpression(SubstraitTypeParser::NumericExpressionContext * /*ctx*/) override { }

  virtual void enterAnyType(SubstraitTypeParser::AnyTypeContext * /*ctx*/) override { }
  virtual void exitAnyType(SubstraitTypeParser::AnyTypeContext * /*ctx*/) override { }

  virtual void enterTypeDef(SubstraitTypeParser::TypeDefContext * /*ctx*/) override { }
  virtual void exitTypeDef(SubstraitTypeParser::TypeDefContext * /*ctx*/) override { }

  virtual void enterIfExpr(SubstraitTypeParser::IfExprContext * /*ctx*/) override { }
  virtual void exitIfExpr(SubstraitTypeParser::IfExprContext * /*ctx*/) override { }

  virtual void enterTypeLiteral(SubstraitTypeParser::TypeLiteralContext * /*ctx*/) override { }
  virtual void exitTypeLiteral(SubstraitTypeParser::TypeLiteralContext * /*ctx*/) override { }

  virtual void enterMultilineDefinition(SubstraitTypeParser::MultilineDefinitionContext * /*ctx*/) override { }
  virtual void exitMultilineDefinition(SubstraitTypeParser::MultilineDefinitionContext * /*ctx*/) override { }

  virtual void enterTernary(SubstraitTypeParser::TernaryContext * /*ctx*/) override { }
  virtual void exitTernary(SubstraitTypeParser::TernaryContext * /*ctx*/) override { }

  virtual void enterBinaryExpr(SubstraitTypeParser::BinaryExprContext * /*ctx*/) override { }
  virtual void exitBinaryExpr(SubstraitTypeParser::BinaryExprContext * /*ctx*/) override { }

  virtual void enterParenExpression(SubstraitTypeParser::ParenExpressionContext * /*ctx*/) override { }
  virtual void exitParenExpression(SubstraitTypeParser::ParenExpressionContext * /*ctx*/) override { }

  virtual void enterParameterName(SubstraitTypeParser::ParameterNameContext * /*ctx*/) override { }
  virtual void exitParameterName(SubstraitTypeParser::ParameterNameContext * /*ctx*/) override { }

  virtual void enterFunctionCall(SubstraitTypeParser::FunctionCallContext * /*ctx*/) override { }
  virtual void exitFunctionCall(SubstraitTypeParser::FunctionCallContext * /*ctx*/) override { }

  virtual void enterNotExpr(SubstraitTypeParser::NotExprContext * /*ctx*/) override { }
  virtual void exitNotExpr(SubstraitTypeParser::NotExprContext * /*ctx*/) override { }

  virtual void enterLiteralNumber(SubstraitTypeParser::LiteralNumberContext * /*ctx*/) override { }
  virtual void exitLiteralNumber(SubstraitTypeParser::LiteralNumberContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

}  // namespace substraittype
