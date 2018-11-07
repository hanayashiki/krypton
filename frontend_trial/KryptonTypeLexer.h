
// Generated from d:\krypton\frontend_trial\KryptonType.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  KryptonTypeLexer : public antlr4::Lexer {
public:
  enum {
    C8 = 1, I32 = 2, STRUCT = 3, TYPE = 4, LEFT_BRACE = 5, RIGHT_BRACE = 6, 
    SEMICOLON = 7, COLON = 8, LESS_THAN = 9, GREATER_THAN = 10, SINGLE_QUOTE = 11, 
    DOUBLE_QUOTE = 12, COMMA = 13, IDENTIFIER = 14, INT = 15, CHAR = 16, 
    WHITESPACE = 17
  };

  KryptonTypeLexer(antlr4::CharStream *input);
  ~KryptonTypeLexer();

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

