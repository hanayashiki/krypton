
// Generated from KryptonExpr.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  KryptonExprParser : public antlr4::Parser {
public:
  enum {
    C8 = 1, I32 = 2, STRUCT = 3, TYPE = 4, LEFT_BRACE = 5, RIGHT_BRACE = 6, 
    SEMICOLON = 7, COLON = 8, LESS_THAN = 9, GREATER_THAN = 10, SINGLE_QUOTE = 11, 
    DOUBLE_QUOTE = 12, COMMA = 13, IDENTIFIER = 14, INT = 15, CHAR = 16, 
    WHITESPACE = 17
  };

  enum {
    RuleLiteral_value = 0
  };

  KryptonExprParser(antlr4::TokenStream *input);
  ~KryptonExprParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class Literal_valueContext; 

  class  Literal_valueContext : public antlr4::ParserRuleContext {
  public:
    Literal_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *CHAR();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Literal_valueContext* literal_value();


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

