
// Generated from d:\krypton\frontend\KryptonType.g4 by ANTLR 4.7.1


#include "KryptonTypeVisitor.h"

#include "KryptonTypeParser.h"


using namespace antlrcpp;
using namespace antlr4;

KryptonTypeParser::KryptonTypeParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

KryptonTypeParser::~KryptonTypeParser() {
  delete _interpreter;
}

std::string KryptonTypeParser::getGrammarFileName() const {
  return "KryptonType.g4";
}

const std::vector<std::string>& KryptonTypeParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& KryptonTypeParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- Basic_typesContext ------------------------------------------------------------------

KryptonTypeParser::Basic_typesContext::Basic_typesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KryptonTypeParser::Basic_typesContext::C8() {
  return getToken(KryptonTypeParser::C8, 0);
}

tree::TerminalNode* KryptonTypeParser::Basic_typesContext::I32() {
  return getToken(KryptonTypeParser::I32, 0);
}


size_t KryptonTypeParser::Basic_typesContext::getRuleIndex() const {
  return KryptonTypeParser::RuleBasic_types;
}

antlrcpp::Any KryptonTypeParser::Basic_typesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonTypeVisitor*>(visitor))
    return parserVisitor->visitBasic_types(this);
  else
    return visitor->visitChildren(this);
}

KryptonTypeParser::Basic_typesContext* KryptonTypeParser::basic_types() {
  Basic_typesContext *_localctx = _tracker.createInstance<Basic_typesContext>(_ctx, getState());
  enterRule(_localctx, 0, KryptonTypeParser::RuleBasic_types);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(12);
    _la = _input->LA(1);
    if (!(_la == KryptonTypeParser::C8

    || _la == KryptonTypeParser::I32)) {
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

//----------------- Type_identifierContext ------------------------------------------------------------------

KryptonTypeParser::Type_identifierContext::Type_identifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KryptonTypeParser::Basic_typesContext* KryptonTypeParser::Type_identifierContext::basic_types() {
  return getRuleContext<KryptonTypeParser::Basic_typesContext>(0);
}

tree::TerminalNode* KryptonTypeParser::Type_identifierContext::IDENTIFIER() {
  return getToken(KryptonTypeParser::IDENTIFIER, 0);
}


size_t KryptonTypeParser::Type_identifierContext::getRuleIndex() const {
  return KryptonTypeParser::RuleType_identifier;
}

antlrcpp::Any KryptonTypeParser::Type_identifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonTypeVisitor*>(visitor))
    return parserVisitor->visitType_identifier(this);
  else
    return visitor->visitChildren(this);
}

KryptonTypeParser::Type_identifierContext* KryptonTypeParser::type_identifier() {
  Type_identifierContext *_localctx = _tracker.createInstance<Type_identifierContext>(_ctx, getState());
  enterRule(_localctx, 2, KryptonTypeParser::RuleType_identifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(16);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KryptonTypeParser::C8:
      case KryptonTypeParser::I32: {
        enterOuterAlt(_localctx, 1);
        setState(14);
        basic_types();
        break;
      }

      case KryptonTypeParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 2);
        setState(15);
        match(KryptonTypeParser::IDENTIFIER);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Uninited_declarationContext ------------------------------------------------------------------

KryptonTypeParser::Uninited_declarationContext::Uninited_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KryptonTypeParser::Type_identifierContext* KryptonTypeParser::Uninited_declarationContext::type_identifier() {
  return getRuleContext<KryptonTypeParser::Type_identifierContext>(0);
}

tree::TerminalNode* KryptonTypeParser::Uninited_declarationContext::IDENTIFIER() {
  return getToken(KryptonTypeParser::IDENTIFIER, 0);
}

tree::TerminalNode* KryptonTypeParser::Uninited_declarationContext::SEMICOLON() {
  return getToken(KryptonTypeParser::SEMICOLON, 0);
}


size_t KryptonTypeParser::Uninited_declarationContext::getRuleIndex() const {
  return KryptonTypeParser::RuleUninited_declaration;
}

antlrcpp::Any KryptonTypeParser::Uninited_declarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonTypeVisitor*>(visitor))
    return parserVisitor->visitUninited_declaration(this);
  else
    return visitor->visitChildren(this);
}

KryptonTypeParser::Uninited_declarationContext* KryptonTypeParser::uninited_declaration() {
  Uninited_declarationContext *_localctx = _tracker.createInstance<Uninited_declarationContext>(_ctx, getState());
  enterRule(_localctx, 4, KryptonTypeParser::RuleUninited_declaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(18);
    type_identifier();
    setState(19);
    match(KryptonTypeParser::IDENTIFIER);
    setState(20);
    match(KryptonTypeParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Inited_declarationContext ------------------------------------------------------------------

KryptonTypeParser::Inited_declarationContext::Inited_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KryptonTypeParser::Type_identifierContext* KryptonTypeParser::Inited_declarationContext::type_identifier() {
  return getRuleContext<KryptonTypeParser::Type_identifierContext>(0);
}

tree::TerminalNode* KryptonTypeParser::Inited_declarationContext::IDENTIFIER() {
  return getToken(KryptonTypeParser::IDENTIFIER, 0);
}

tree::TerminalNode* KryptonTypeParser::Inited_declarationContext::COLON() {
  return getToken(KryptonTypeParser::COLON, 0);
}

tree::TerminalNode* KryptonTypeParser::Inited_declarationContext::LITERAL() {
  return getToken(KryptonTypeParser::LITERAL, 0);
}

tree::TerminalNode* KryptonTypeParser::Inited_declarationContext::SEMICOLON() {
  return getToken(KryptonTypeParser::SEMICOLON, 0);
}


size_t KryptonTypeParser::Inited_declarationContext::getRuleIndex() const {
  return KryptonTypeParser::RuleInited_declaration;
}

antlrcpp::Any KryptonTypeParser::Inited_declarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonTypeVisitor*>(visitor))
    return parserVisitor->visitInited_declaration(this);
  else
    return visitor->visitChildren(this);
}

KryptonTypeParser::Inited_declarationContext* KryptonTypeParser::inited_declaration() {
  Inited_declarationContext *_localctx = _tracker.createInstance<Inited_declarationContext>(_ctx, getState());
  enterRule(_localctx, 6, KryptonTypeParser::RuleInited_declaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(22);
    type_identifier();
    setState(23);
    match(KryptonTypeParser::IDENTIFIER);
    setState(24);
    match(KryptonTypeParser::COLON);
    setState(25);
    match(KryptonTypeParser::LITERAL);
    setState(26);
    match(KryptonTypeParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationContext ------------------------------------------------------------------

KryptonTypeParser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KryptonTypeParser::Uninited_declarationContext* KryptonTypeParser::DeclarationContext::uninited_declaration() {
  return getRuleContext<KryptonTypeParser::Uninited_declarationContext>(0);
}

KryptonTypeParser::Inited_declarationContext* KryptonTypeParser::DeclarationContext::inited_declaration() {
  return getRuleContext<KryptonTypeParser::Inited_declarationContext>(0);
}


size_t KryptonTypeParser::DeclarationContext::getRuleIndex() const {
  return KryptonTypeParser::RuleDeclaration;
}

antlrcpp::Any KryptonTypeParser::DeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonTypeVisitor*>(visitor))
    return parserVisitor->visitDeclaration(this);
  else
    return visitor->visitChildren(this);
}

KryptonTypeParser::DeclarationContext* KryptonTypeParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 8, KryptonTypeParser::RuleDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(30);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(28);
      uninited_declaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(29);
      inited_declaration();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Struct_declarationContext ------------------------------------------------------------------

KryptonTypeParser::Struct_declarationContext::Struct_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KryptonTypeParser::Struct_declarationContext::STRUCT() {
  return getToken(KryptonTypeParser::STRUCT, 0);
}

tree::TerminalNode* KryptonTypeParser::Struct_declarationContext::LEFT_BRACE() {
  return getToken(KryptonTypeParser::LEFT_BRACE, 0);
}

tree::TerminalNode* KryptonTypeParser::Struct_declarationContext::RIGHT_BRACE() {
  return getToken(KryptonTypeParser::RIGHT_BRACE, 0);
}

tree::TerminalNode* KryptonTypeParser::Struct_declarationContext::SEMICOLON() {
  return getToken(KryptonTypeParser::SEMICOLON, 0);
}

std::vector<KryptonTypeParser::DeclarationContext *> KryptonTypeParser::Struct_declarationContext::declaration() {
  return getRuleContexts<KryptonTypeParser::DeclarationContext>();
}

KryptonTypeParser::DeclarationContext* KryptonTypeParser::Struct_declarationContext::declaration(size_t i) {
  return getRuleContext<KryptonTypeParser::DeclarationContext>(i);
}

tree::TerminalNode* KryptonTypeParser::Struct_declarationContext::IDENTIFIER() {
  return getToken(KryptonTypeParser::IDENTIFIER, 0);
}


size_t KryptonTypeParser::Struct_declarationContext::getRuleIndex() const {
  return KryptonTypeParser::RuleStruct_declaration;
}

antlrcpp::Any KryptonTypeParser::Struct_declarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonTypeVisitor*>(visitor))
    return parserVisitor->visitStruct_declaration(this);
  else
    return visitor->visitChildren(this);
}

KryptonTypeParser::Struct_declarationContext* KryptonTypeParser::struct_declaration() {
  Struct_declarationContext *_localctx = _tracker.createInstance<Struct_declarationContext>(_ctx, getState());
  enterRule(_localctx, 10, KryptonTypeParser::RuleStruct_declaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(32);
    match(KryptonTypeParser::STRUCT);

    setState(34);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == KryptonTypeParser::IDENTIFIER) {
      setState(33);
      match(KryptonTypeParser::IDENTIFIER);
    }
    setState(36);
    match(KryptonTypeParser::LEFT_BRACE);
    setState(40);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << KryptonTypeParser::C8)
      | (1ULL << KryptonTypeParser::I32)
      | (1ULL << KryptonTypeParser::IDENTIFIER))) != 0)) {
      setState(37);
      declaration();
      setState(42);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(43);
    match(KryptonTypeParser::RIGHT_BRACE);
    setState(44);
    match(KryptonTypeParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> KryptonTypeParser::_decisionToDFA;
atn::PredictionContextCache KryptonTypeParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN KryptonTypeParser::_atn;
std::vector<uint16_t> KryptonTypeParser::_serializedATN;

std::vector<std::string> KryptonTypeParser::_ruleNames = {
  "basic_types", "type_identifier", "uninited_declaration", "inited_declaration", 
  "declaration", "struct_declaration"
};

std::vector<std::string> KryptonTypeParser::_literalNames = {
  "", "'c8'", "'i32'", "'{'", "'}'", "';'", "':'", "'''", "'\"'", "'struct'"
};

std::vector<std::string> KryptonTypeParser::_symbolicNames = {
  "", "C8", "I32", "LEFT_BRACE", "RIGHT_BRACE", "SEMICOLON", "COLON", "SINGLE_QUOTE", 
  "DOUBLE_QUOTE", "STRUCT", "IDENTIFIER", "INT", "CHAR", "LITERAL"
};

dfa::Vocabulary KryptonTypeParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> KryptonTypeParser::_tokenNames;

KryptonTypeParser::Initializer::Initializer() {
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
    0x3, 0xf, 0x31, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x13, 0xa, 0x3, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x21, 0xa, 0x6, 0x3, 
    0x7, 0x3, 0x7, 0x5, 0x7, 0x25, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 
    0x29, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x2c, 0xb, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x2, 0x2, 0x8, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0x2, 
    0x3, 0x3, 0x2, 0x3, 0x4, 0x2, 0x2e, 0x2, 0xe, 0x3, 0x2, 0x2, 0x2, 0x4, 
    0x12, 0x3, 0x2, 0x2, 0x2, 0x6, 0x14, 0x3, 0x2, 0x2, 0x2, 0x8, 0x18, 
    0x3, 0x2, 0x2, 0x2, 0xa, 0x20, 0x3, 0x2, 0x2, 0x2, 0xc, 0x22, 0x3, 0x2, 
    0x2, 0x2, 0xe, 0xf, 0x9, 0x2, 0x2, 0x2, 0xf, 0x3, 0x3, 0x2, 0x2, 0x2, 
    0x10, 0x13, 0x5, 0x2, 0x2, 0x2, 0x11, 0x13, 0x7, 0xc, 0x2, 0x2, 0x12, 
    0x10, 0x3, 0x2, 0x2, 0x2, 0x12, 0x11, 0x3, 0x2, 0x2, 0x2, 0x13, 0x5, 
    0x3, 0x2, 0x2, 0x2, 0x14, 0x15, 0x5, 0x4, 0x3, 0x2, 0x15, 0x16, 0x7, 
    0xc, 0x2, 0x2, 0x16, 0x17, 0x7, 0x7, 0x2, 0x2, 0x17, 0x7, 0x3, 0x2, 
    0x2, 0x2, 0x18, 0x19, 0x5, 0x4, 0x3, 0x2, 0x19, 0x1a, 0x7, 0xc, 0x2, 
    0x2, 0x1a, 0x1b, 0x7, 0x8, 0x2, 0x2, 0x1b, 0x1c, 0x7, 0xf, 0x2, 0x2, 
    0x1c, 0x1d, 0x7, 0x7, 0x2, 0x2, 0x1d, 0x9, 0x3, 0x2, 0x2, 0x2, 0x1e, 
    0x21, 0x5, 0x6, 0x4, 0x2, 0x1f, 0x21, 0x5, 0x8, 0x5, 0x2, 0x20, 0x1e, 
    0x3, 0x2, 0x2, 0x2, 0x20, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x21, 0xb, 0x3, 
    0x2, 0x2, 0x2, 0x22, 0x24, 0x7, 0xb, 0x2, 0x2, 0x23, 0x25, 0x7, 0xc, 
    0x2, 0x2, 0x24, 0x23, 0x3, 0x2, 0x2, 0x2, 0x24, 0x25, 0x3, 0x2, 0x2, 
    0x2, 0x25, 0x26, 0x3, 0x2, 0x2, 0x2, 0x26, 0x2a, 0x7, 0x5, 0x2, 0x2, 
    0x27, 0x29, 0x5, 0xa, 0x6, 0x2, 0x28, 0x27, 0x3, 0x2, 0x2, 0x2, 0x29, 
    0x2c, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x28, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x2b, 
    0x3, 0x2, 0x2, 0x2, 0x2b, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2a, 0x3, 
    0x2, 0x2, 0x2, 0x2d, 0x2e, 0x7, 0x6, 0x2, 0x2, 0x2e, 0x2f, 0x7, 0x7, 
    0x2, 0x2, 0x2f, 0xd, 0x3, 0x2, 0x2, 0x2, 0x6, 0x12, 0x20, 0x24, 0x2a, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

KryptonTypeParser::Initializer KryptonTypeParser::_init;
