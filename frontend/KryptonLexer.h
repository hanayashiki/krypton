
// Generated from d:\krypton\frontend/KryptonLexer.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  KryptonLexer : public antlr4::Lexer {
public:
  enum {
    C8 = 1, I32 = 2, LEFT_BRACE = 3, RIGHT_BRACE = 4, SEMICOLON = 5, COLON = 6, 
    SINGLE_QUOTE = 7, DOUBLE_QUOTE = 8, STRUCT = 9, IDENTIFIER = 10, INT = 11, 
    CHAR = 12, LITERAL = 13
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

