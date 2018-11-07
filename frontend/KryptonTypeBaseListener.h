
// Generated from KryptonType.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "KryptonTypeListener.h"


/**
 * This class provides an empty implementation of KryptonTypeListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  KryptonTypeBaseListener : public KryptonTypeListener {
public:

  virtual void enterBasic_types(KryptonTypeParser::Basic_typesContext * /*ctx*/) override { }
  virtual void exitBasic_types(KryptonTypeParser::Basic_typesContext * /*ctx*/) override { }

  virtual void enterType_identifier(KryptonTypeParser::Type_identifierContext * /*ctx*/) override { }
  virtual void exitType_identifier(KryptonTypeParser::Type_identifierContext * /*ctx*/) override { }

  virtual void enterUninited_declaration(KryptonTypeParser::Uninited_declarationContext * /*ctx*/) override { }
  virtual void exitUninited_declaration(KryptonTypeParser::Uninited_declarationContext * /*ctx*/) override { }

  virtual void enterInited_declaration(KryptonTypeParser::Inited_declarationContext * /*ctx*/) override { }
  virtual void exitInited_declaration(KryptonTypeParser::Inited_declarationContext * /*ctx*/) override { }

  virtual void enterDeclaration(KryptonTypeParser::DeclarationContext * /*ctx*/) override { }
  virtual void exitDeclaration(KryptonTypeParser::DeclarationContext * /*ctx*/) override { }

  virtual void enterStruct_declaration(KryptonTypeParser::Struct_declarationContext * /*ctx*/) override { }
  virtual void exitStruct_declaration(KryptonTypeParser::Struct_declarationContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

