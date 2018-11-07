
// Generated from KryptonExpr.g4 by ANTLR 4.7.1


#include "KryptonExprVisitor.h"

#include "KryptonExprParser.h"


using namespace antlrcpp;
using namespace antlr4;

KryptonExprParser::KryptonExprParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

KryptonExprParser::~KryptonExprParser() {
  delete _interpreter;
}

std::string KryptonExprParser::getGrammarFileName() const {
  return "KryptonExpr.g4";
}

const std::vector<std::string>& KryptonExprParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& KryptonExprParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- Literal_valueContext ------------------------------------------------------------------

KryptonExprParser::Literal_valueContext::Literal_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KryptonExprParser::Literal_valueContext::INT() {
  return getToken(KryptonExprParser::INT, 0);
}

tree::TerminalNode* KryptonExprParser::Literal_valueContext::CHAR() {
  return getToken(KryptonExprParser::CHAR, 0);
}


size_t KryptonExprParser::Literal_valueContext::getRuleIndex() const {
  return KryptonExprParser::RuleLiteral_value;
}

antlrcpp::Any KryptonExprParser::Literal_valueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonExprVisitor*>(visitor))
    return parserVisitor->visitLiteral_value(this);
  else
    return visitor->visitChildren(this);
}

KryptonExprParser::Literal_valueContext* KryptonExprParser::literal_value() {
  Literal_valueContext *_localctx = _tracker.createInstance<Literal_valueContext>(_ctx, getState());
  enterRule(_localctx, 0, KryptonExprParser::RuleLiteral_value);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2);
    _la = _input->LA(1);
    if (!(_la == KryptonExprParser::INT

    || _la == KryptonExprParser::CHAR)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> KryptonExprParser::_decisionToDFA;
atn::PredictionContextCache KryptonExprParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN KryptonExprParser::_atn;
std::vector<uint16_t> KryptonExprParser::_serializedATN;

std::vector<std::string> KryptonExprParser::_ruleNames = {
  "literal_value"
};

std::vector<std::string> KryptonExprParser::_literalNames = {
  "", "'c8'", "'i32'", "'struct'", "'type'", "'{'", "'}'", "';'", "':'", 
  "'<'", "'>'", "'''", "'\"'", "','"
};

std::vector<std::string> KryptonExprParser::_symbolicNames = {
  "", "C8", "I32", "STRUCT", "TYPE", "LEFT_BRACE", "RIGHT_BRACE", "SEMICOLON", 
  "COLON", "LESS_THAN", "GREATER_THAN", "SINGLE_QUOTE", "DOUBLE_QUOTE", 
  "COMMA", "IDENTIFIER", "INT", "CHAR", "WHITESPACE"
};

dfa::Vocabulary KryptonExprParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> KryptonExprParser::_tokenNames;

KryptonExprParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x13, 0x7, 0x4, 0x2, 0x9, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x2, 
    0x2, 0x3, 0x2, 0x2, 0x3, 0x3, 0x2, 0x11, 0x12, 0x2, 0x5, 0x2, 0x4, 0x3, 
    0x2, 0x2, 0x2, 0x4, 0x5, 0x9, 0x2, 0x2, 0x2, 0x5, 0x3, 0x3, 0x2, 0x2, 
    0x2, 0x2, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

KryptonExprParser::Initializer KryptonExprParser::_init;
