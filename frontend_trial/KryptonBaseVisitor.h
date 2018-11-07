
// Generated from Krypton.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "KryptonVisitor.h"


/**
 * This class provides an empty implementation of KryptonVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  KryptonBaseVisitor : public KryptonVisitor {
public:

  virtual antlrcpp::Any visitProgram(KryptonParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBasic_types(KryptonParser::Basic_typesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_identifier(KryptonParser::Type_identifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGeneric_specifier(KryptonParser::Generic_specifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_specifier(KryptonParser::Type_specifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBasic_declaration(KryptonParser::Basic_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInited_declaration(KryptonParser::Inited_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUninited_declaration(KryptonParser::Uninited_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclaration(KryptonParser::DeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStruct_specifier(KryptonParser::Struct_specifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStruct_generic_parameter(KryptonParser::Struct_generic_parameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStruct_generic_argument(KryptonParser::Struct_generic_argumentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStruct_generic_argument_list(KryptonParser::Struct_generic_argument_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStruct_generic_arguments(KryptonParser::Struct_generic_argumentsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStruct_generic_parameter_list(KryptonParser::Struct_generic_parameter_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStruct_generic_parameters(KryptonParser::Struct_generic_parametersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_specifier(KryptonParser::Function_specifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_parameter(KryptonParser::Function_parameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_parameter_list(KryptonParser::Function_parameter_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_parameters(KryptonParser::Function_parametersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLiteral_value(KryptonParser::Literal_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValue(KryptonParser::ValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_call(KryptonParser::Function_callContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCall_operator(KryptonParser::Call_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCall_parameters(KryptonParser::Call_parametersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBasic_value(KryptonParser::Basic_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValue_visitor(KryptonParser::Value_visitorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr(KryptonParser::ExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFormular(KryptonParser::FormularContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComparation(KryptonParser::ComparationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSum(KryptonParser::SumContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTerm(KryptonParser::TermContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConditional(KryptonParser::ConditionalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConditional_elseif(KryptonParser::Conditional_elseifContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConditional_else(KryptonParser::Conditional_elseContext *ctx) override {
    return visitChildren(ctx);
  }


};

