// SPDX-License-Identifier: Apache-2.0


// Generated from SubstraitType.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "SubstraitTypeVisitor.h"


namespace substraittype {

/**
 * This class provides an empty implementation of SubstraitTypeVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  SubstraitTypeBaseVisitor : public SubstraitTypeVisitor {
public:

  virtual std::any visitStartRule(SubstraitTypeParser::StartRuleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeStatement(SubstraitTypeParser::TypeStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBoolean(SubstraitTypeParser::BooleanContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitI8(SubstraitTypeParser::I8Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitI16(SubstraitTypeParser::I16Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitI32(SubstraitTypeParser::I32Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitI64(SubstraitTypeParser::I64Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFp32(SubstraitTypeParser::Fp32Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFp64(SubstraitTypeParser::Fp64Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitString(SubstraitTypeParser::StringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBinary(SubstraitTypeParser::BinaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDate(SubstraitTypeParser::DateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntervalYear(SubstraitTypeParser::IntervalYearContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUuid(SubstraitTypeParser::UuidContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFixedChar(SubstraitTypeParser::FixedCharContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVarChar(SubstraitTypeParser::VarCharContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFixedBinary(SubstraitTypeParser::FixedBinaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDecimal(SubstraitTypeParser::DecimalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecisionIntervalDay(SubstraitTypeParser::PrecisionIntervalDayContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecisionIntervalCompound(SubstraitTypeParser::PrecisionIntervalCompoundContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecisionTime(SubstraitTypeParser::PrecisionTimeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecisionTimestamp(SubstraitTypeParser::PrecisionTimestampContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecisionTimestampTZ(SubstraitTypeParser::PrecisionTimestampTZContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStruct(SubstraitTypeParser::StructContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNStruct(SubstraitTypeParser::NStructContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitList(SubstraitTypeParser::ListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMap(SubstraitTypeParser::MapContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunc(SubstraitTypeParser::FuncContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUserDefined(SubstraitTypeParser::UserDefinedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSingleFuncParam(SubstraitTypeParser::SingleFuncParamContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncParamsWithParens(SubstraitTypeParser::FuncParamsWithParensContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNumericLiteral(SubstraitTypeParser::NumericLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNumericParameterName(SubstraitTypeParser::NumericParameterNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNumericExpression(SubstraitTypeParser::NumericExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAnyType(SubstraitTypeParser::AnyTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeDef(SubstraitTypeParser::TypeDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfExpr(SubstraitTypeParser::IfExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeLiteral(SubstraitTypeParser::TypeLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMultilineDefinition(SubstraitTypeParser::MultilineDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTernary(SubstraitTypeParser::TernaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBinaryExpr(SubstraitTypeParser::BinaryExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParenExpression(SubstraitTypeParser::ParenExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameterName(SubstraitTypeParser::ParameterNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionCall(SubstraitTypeParser::FunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNotExpr(SubstraitTypeParser::NotExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLiteralNumber(SubstraitTypeParser::LiteralNumberContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace substraittype
