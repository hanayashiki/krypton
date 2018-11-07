
// Generated from KryptonType.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "KryptonTypeParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by KryptonTypeParser.
 */
class  KryptonTypeListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterBasic_types(KryptonTypeParser::Basic_typesContext *ctx) = 0;
  virtual void exitBasic_types(KryptonTypeParser::Basic_typesContext *ctx) = 0;

  virtual void enterType_identifier(KryptonTypeParser::Type_identifierContext *ctx) = 0;
  virtual void exitType_identifier(KryptonTypeParser::Type_identifierContext *ctx) = 0;

  virtual void enterUninited_declaration(KryptonTypeParser::Uninited_declarationContext *ctx) = 0;
  virtual void exitUninited_declaration(KryptonTypeParser::Uninited_declarationContext *ctx) = 0;

  virtual void enterInited_declaration(KryptonTypeParser::Inited_declarationContext *ctx) = 0;
  virtual void exitInited_declaration(KryptonTypeParser::Inited_declarationContext *ctx) = 0;

  virtual void enterDeclaration(KryptonTypeParser::DeclarationContext *ctx) = 0;
  virtual void exitDeclaration(KryptonTypeParser::DeclarationContext *ctx) = 0;

  virtual void enterStruct_declaration(KryptonTypeParser::Struct_declarationContext *ctx) = 0;
  virtual void exitStruct_declaration(KryptonTypeParser::Struct_declarationContext *ctx) = 0;


};

