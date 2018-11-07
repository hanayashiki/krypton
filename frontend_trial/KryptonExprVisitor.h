
// Generated from d:\krypton\frontend_trial/KryptonExpr.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "KryptonExpr.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by KryptonExpr.
 */
class  KryptonExprVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by KryptonExpr.
   */
    virtual antlrcpp::Any visitLiteral_value(KryptonExpr::Literal_valueContext *context) = 0;

    virtual antlrcpp::Any visitValue(KryptonExpr::ValueContext *context) = 0;

    virtual antlrcpp::Any visitFunction_call(KryptonExpr::Function_callContext *context) = 0;

    virtual antlrcpp::Any visitCall_operator(KryptonExpr::Call_operatorContext *context) = 0;

    virtual antlrcpp::Any visitCall_parameters(KryptonExpr::Call_parametersContext *context) = 0;

    virtual antlrcpp::Any visitBasic_value(KryptonExpr::Basic_valueContext *context) = 0;

    virtual antlrcpp::Any visitValue_visitor(KryptonExpr::Value_visitorContext *context) = 0;

    virtual antlrcpp::Any visitExpr(KryptonExpr::ExprContext *context) = 0;

    virtual antlrcpp::Any visitFormular(KryptonExpr::FormularContext *context) = 0;

    virtual antlrcpp::Any visitComparation(KryptonExpr::ComparationContext *context) = 0;

    virtual antlrcpp::Any visitSum(KryptonExpr::SumContext *context) = 0;

    virtual antlrcpp::Any visitTerm(KryptonExpr::TermContext *context) = 0;

    virtual antlrcpp::Any visitConditional(KryptonExpr::ConditionalContext *context) = 0;

    virtual antlrcpp::Any visitConditional_elseif(KryptonExpr::Conditional_elseifContext *context) = 0;

    virtual antlrcpp::Any visitConditional_else(KryptonExpr::Conditional_elseContext *context) = 0;


};

