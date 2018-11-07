
// Generated from d:\krypton\frontend\KryptonType.g4 by ANTLR 4.7.1

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

  virtual antlrcpp::Any visitUninited_declaration(KryptonTypeParser::Uninited_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInited_declaration(KryptonTypeParser::Inited_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclaration(KryptonTypeParser::DeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStruct_declaration(KryptonTypeParser::Struct_declarationContext *ctx) override {
    return visitChildren(ctx);
  }


};

