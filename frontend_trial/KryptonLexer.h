
// Generated from d:\krypton\frontend_trial/KryptonLexer.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  KryptonLexer : public antlr4::Lexer {
public:
  enum {
    C8 = 1, I32 = 2, STRUCT = 3, TYPE = 4, IF = 5, ELSEIF = 6, ELSE = 7, 
    LEFT_BRACE = 8, RIGHT_BRACE = 9, SEMICOLON = 10, COLON = 11, RIGHT_ARROW = 12, 
    LESS_THAN = 13, GREATER_THAN = 14, LEFT_PARENTHESIS = 15, RIGHT_PARENTHESIS = 16, 
    SINGLE_QUOTE = 17, DOUBLE_QUOTE = 18, COMMA = 19, PERIOD = 20, PLUS = 21, 
    MINUS = 22, MULTIPLY = 23, DIVIDE = 24, EQUAL = 25, IDENTIFIER = 26, 
    INT = 27, CHAR = 28, WHITESPACE = 29
  };

  KryptonLexer(antlr4::CharStream *input);
  ~KryptonLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

