
// Generated from d:\krypton\frontend_trial/KryptonExpr.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "KryptonExprVisitor.h"


/**
 * This class provides an empty implementation of KryptonExprVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  KryptonExprBaseVisitor : public KryptonExprVisitor {
public:

  virtual antlrcpp::Any visitLiteral_value(KryptonExpr::Literal_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValue(KryptonExpr::ValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_call(KryptonExpr::Function_callContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCall_operator(KryptonExpr::Call_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCall_parameters(KryptonExpr::Call_parametersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBasic_value(KryptonExpr::Basic_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValue_visitor(KryptonExpr::Value_visitorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr(KryptonExpr::ExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFormular(KryptonExpr::FormularContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComparation(KryptonExpr::ComparationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSum(KryptonExpr::SumContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTerm(KryptonExpr::TermContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConditional(KryptonExpr::ConditionalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConditional_elseif(KryptonExpr::Conditional_elseifContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConditional_else(KryptonExpr::Conditional_elseContext *ctx) override {
    return visitChildren(ctx);
  }


};

