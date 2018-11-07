
// Generated from d:\krypton\frontend\KryptonType.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  KryptonTypeParser : public antlr4::Parser {
public:
  enum {
    C8 = 1, I32 = 2, LEFT_BRACE = 3, RIGHT_BRACE = 4, SEMICOLON = 5, COLON = 6, 
    SINGLE_QUOTE = 7, DOUBLE_QUOTE = 8, STRUCT = 9, IDENTIFIER = 10, INT = 11, 
    CHAR = 12, LITERAL = 13
  };

  enum {
    RuleBasic_types = 0, RuleType_identifier = 1, RuleUninited_declaration = 2, 
    RuleInited_declaration = 3, RuleDeclaration = 4, RuleStruct_declaration = 5
  };

  KryptonTypeParser(antlr4::TokenStream *input);
  ~KryptonTypeParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class Basic_typesContext;
  class Type_identifierContext;
  class Uninited_declarationContext;
  class Inited_declarationContext;
  class DeclarationContext;
  class Struct_declarationContext; 

  class  Basic_typesContext : public antlr4::ParserRuleContext {
  public:
    Basic_typesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *C8();
    antlr4::tree::TerminalNode *I32();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Basic_typesContext* basic_types();

  class  Type_identifierContext : public antlr4::ParserRuleContext {
  public:
    Type_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Basic_typesContext *basic_types();
    antlr4::tree::TerminalNode *IDENTIFIER();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_identifierContext* type_identifier();

  class  Uninited_declarationContext : public antlr4::ParserRuleContext {
  public:
    Uninited_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Type_identifierContext *type_identifier();
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *SEMICOLON();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Uninited_declarationContext* uninited_declaration();

  class  Inited_declarationContext : public antlr4::ParserRuleContext {
  public:
    Inited_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Type_identifierContext *type_identifier();
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *LITERAL();
    antlr4::tree::TerminalNode *SEMICOLON();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Inited_declarationContext* inited_declaration();

  class  DeclarationContext : public antlr4::ParserRuleContext {
  public:
    DeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Uninited_declarationContext *uninited_declaration();
    Inited_declarationContext *inited_declaration();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationContext* declaration();

  class  Struct_declarationContext : public antlr4::ParserRuleContext {
  public:
    Struct_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRUCT();
    antlr4::tree::TerminalNode *LEFT_BRACE();
    antlr4::tree::TerminalNode *RIGHT_BRACE();
    antlr4::tree::TerminalNode *SEMICOLON();
    std::vector<DeclarationContext *> declaration();
    DeclarationContext* declaration(size_t i);
    antlr4::tree::TerminalNode *IDENTIFIER();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Struct_declarationContext* struct_declaration();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

