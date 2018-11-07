
// Generated from KryptonType.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "KryptonTypeVisitor.h"


/**
 * This class provides an empty implementation of KryptonTypeVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  KryptonTypeBaseVisitor : public KryptonTypeVisitor {
public:

  virtual antlrcpp::Any visitBasic_types(KryptonTypeParser::Basic_typesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_identifier(KryptonTypeParser::Type_identifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGeneric_specifier(KryptonTypeParser::Generic_specifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_specifier(KryptonTypeParser::Type_specifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBasic_declaration(KryptonTypeParser::Basic_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInited_declaration(KryptonTypeParser::Inited_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUninited_declaration(KryptonTypeParser::Uninited_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclaration(KryptonTypeParser::DeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStruct_specifier(KryptonTypeParser::Struct_specifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStruct_generic_parameter(KryptonTypeParser::Struct_generic_parameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStruct_generic_argument(KryptonTypeParser::Struct_generic_argumentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStruct_generic_argument_list(KryptonTypeParser::Struct_generic_argument_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStruct_generic_arguments(KryptonTypeParser::Struct_generic_argumentsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStruct_generic_parameter_list(KryptonTypeParser::Struct_generic_parameter_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStruct_generic_parameters(KryptonTypeParser::Struct_generic_parametersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_specifier(KryptonTypeParser::Function_specifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_parameter(KryptonTypeParser::Function_parameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_parameter_list(KryptonTypeParser::Function_parameter_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_parameters(KryptonTypeParser::Function_parametersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLiteral_value(KryptonTypeParser::Literal_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValue(KryptonTypeParser::ValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_call(KryptonTypeParser::Function_callContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCall_operator(KryptonTypeParser::Call_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCall_parameters(KryptonTypeParser::Call_parametersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBasic_value(KryptonTypeParser::Basic_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValue_visitor(KryptonTypeParser::Value_visitorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr(KryptonTypeParser::ExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFormular(KryptonTypeParser::FormularContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComparation(KryptonTypeParser::ComparationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSum(KryptonTypeParser::SumContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTerm(KryptonTypeParser::TermContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConditional(KryptonTypeParser::ConditionalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConditional_elseif(KryptonTypeParser::Conditional_elseifContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConditional_else(KryptonTypeParser::Conditional_elseContext *ctx) override {
    return visitChildren(ctx);
  }


};

