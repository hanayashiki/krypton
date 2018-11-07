
// Generated from KryptonType.g4 by ANTLR 4.7.1


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
    setState(68);
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
    setState(72);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KryptonTypeParser::C8:
      case KryptonTypeParser::I32: {
        enterOuterAlt(_localctx, 1);
        setState(70);
        basic_types();
        break;
      }

      case KryptonTypeParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 2);
        setState(71);
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

//----------------- Generic_specifierContext ------------------------------------------------------------------

KryptonTypeParser::Generic_specifierContext::Generic_specifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KryptonTypeParser::Generic_specifierContext::IDENTIFIER() {
  return getToken(KryptonTypeParser::IDENTIFIER, 0);
}

KryptonTypeParser::Struct_generic_argumentsContext* KryptonTypeParser::Generic_specifierContext::struct_generic_arguments() {
  return getRuleContext<KryptonTypeParser::Struct_generic_argumentsContext>(0);
}


size_t KryptonTypeParser::Generic_specifierContext::getRuleIndex() const {
  return KryptonTypeParser::RuleGeneric_specifier;
}

antlrcpp::Any KryptonTypeParser::Generic_specifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonTypeVisitor*>(visitor))
    return parserVisitor->visitGeneric_specifier(this);
  else
    return visitor->visitChildren(this);
}

KryptonTypeParser::Generic_specifierContext* KryptonTypeParser::generic_specifier() {
  Generic_specifierContext *_localctx = _tracker.createInstance<Generic_specifierContext>(_ctx, getState());
  enterRule(_localctx, 4, KryptonTypeParser::RuleGeneric_specifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(74);
    match(KryptonTypeParser::IDENTIFIER);
    setState(75);
    struct_generic_arguments();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Type_specifierContext ------------------------------------------------------------------

KryptonTypeParser::Type_specifierContext::Type_specifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KryptonTypeParser::Type_identifierContext* KryptonTypeParser::Type_specifierContext::type_identifier() {
  return getRuleContext<KryptonTypeParser::Type_identifierContext>(0);
}

KryptonTypeParser::Struct_specifierContext* KryptonTypeParser::Type_specifierContext::struct_specifier() {
  return getRuleContext<KryptonTypeParser::Struct_specifierContext>(0);
}

KryptonTypeParser::Generic_specifierContext* KryptonTypeParser::Type_specifierContext::generic_specifier() {
  return getRuleContext<KryptonTypeParser::Generic_specifierContext>(0);
}

KryptonTypeParser::Function_specifierContext* KryptonTypeParser::Type_specifierContext::function_specifier() {
  return getRuleContext<KryptonTypeParser::Function_specifierContext>(0);
}

tree::TerminalNode* KryptonTypeParser::Type_specifierContext::LEFT_PARENTHESIS() {
  return getToken(KryptonTypeParser::LEFT_PARENTHESIS, 0);
}

tree::TerminalNode* KryptonTypeParser::Type_specifierContext::RIGHT_PARENTHESIS() {
  return getToken(KryptonTypeParser::RIGHT_PARENTHESIS, 0);
}


size_t KryptonTypeParser::Type_specifierContext::getRuleIndex() const {
  return KryptonTypeParser::RuleType_specifier;
}

antlrcpp::Any KryptonTypeParser::Type_specifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonTypeVisitor*>(visitor))
    return parserVisitor->visitType_specifier(this);
  else
    return visitor->visitChildren(this);
}

KryptonTypeParser::Type_specifierContext* KryptonTypeParser::type_specifier() {
  Type_specifierContext *_localctx = _tracker.createInstance<Type_specifierContext>(_ctx, getState());
  enterRule(_localctx, 6, KryptonTypeParser::RuleType_specifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(85);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(77);
      type_identifier();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(78);
      struct_specifier();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(79);
      generic_specifier();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(80);
      function_specifier();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(81);
      match(KryptonTypeParser::LEFT_PARENTHESIS);
      setState(82);
      function_specifier();
      setState(83);
      match(KryptonTypeParser::RIGHT_PARENTHESIS);
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

//----------------- Basic_declarationContext ------------------------------------------------------------------

KryptonTypeParser::Basic_declarationContext::Basic_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KryptonTypeParser::Type_specifierContext* KryptonTypeParser::Basic_declarationContext::type_specifier() {
  return getRuleContext<KryptonTypeParser::Type_specifierContext>(0);
}

tree::TerminalNode* KryptonTypeParser::Basic_declarationContext::IDENTIFIER() {
  return getToken(KryptonTypeParser::IDENTIFIER, 0);
}

KryptonTypeParser::Struct_generic_parametersContext* KryptonTypeParser::Basic_declarationContext::struct_generic_parameters() {
  return getRuleContext<KryptonTypeParser::Struct_generic_parametersContext>(0);
}


size_t KryptonTypeParser::Basic_declarationContext::getRuleIndex() const {
  return KryptonTypeParser::RuleBasic_declaration;
}

antlrcpp::Any KryptonTypeParser::Basic_declarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonTypeVisitor*>(visitor))
    return parserVisitor->visitBasic_declaration(this);
  else
    return visitor->visitChildren(this);
}

KryptonTypeParser::Basic_declarationContext* KryptonTypeParser::basic_declaration() {
  Basic_declarationContext *_localctx = _tracker.createInstance<Basic_declarationContext>(_ctx, getState());
  enterRule(_localctx, 8, KryptonTypeParser::RuleBasic_declaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(87);
    type_specifier();

    setState(89);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == KryptonTypeParser::IDENTIFIER) {
      setState(88);
      match(KryptonTypeParser::IDENTIFIER);
    }

    setState(92);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == KryptonTypeParser::LESS_THAN) {
      setState(91);
      struct_generic_parameters();
    }
   
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

KryptonTypeParser::Basic_declarationContext* KryptonTypeParser::Inited_declarationContext::basic_declaration() {
  return getRuleContext<KryptonTypeParser::Basic_declarationContext>(0);
}

tree::TerminalNode* KryptonTypeParser::Inited_declarationContext::COLON() {
  return getToken(KryptonTypeParser::COLON, 0);
}

KryptonTypeParser::ExprContext* KryptonTypeParser::Inited_declarationContext::expr() {
  return getRuleContext<KryptonTypeParser::ExprContext>(0);
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
  enterRule(_localctx, 10, KryptonTypeParser::RuleInited_declaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(94);
    basic_declaration();
    setState(95);
    match(KryptonTypeParser::COLON);
    setState(96);
    expr();
    setState(97);
    match(KryptonTypeParser::SEMICOLON);
   
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

KryptonTypeParser::Basic_declarationContext* KryptonTypeParser::Uninited_declarationContext::basic_declaration() {
  return getRuleContext<KryptonTypeParser::Basic_declarationContext>(0);
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
  enterRule(_localctx, 12, KryptonTypeParser::RuleUninited_declaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(99);
    basic_declaration();
    setState(100);
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

KryptonTypeParser::Inited_declarationContext* KryptonTypeParser::DeclarationContext::inited_declaration() {
  return getRuleContext<KryptonTypeParser::Inited_declarationContext>(0);
}

KryptonTypeParser::Uninited_declarationContext* KryptonTypeParser::DeclarationContext::uninited_declaration() {
  return getRuleContext<KryptonTypeParser::Uninited_declarationContext>(0);
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
  enterRule(_localctx, 14, KryptonTypeParser::RuleDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(104);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(102);
      inited_declaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(103);
      uninited_declaration();
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

//----------------- Struct_specifierContext ------------------------------------------------------------------

KryptonTypeParser::Struct_specifierContext::Struct_specifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KryptonTypeParser::Struct_specifierContext::STRUCT() {
  return getToken(KryptonTypeParser::STRUCT, 0);
}

tree::TerminalNode* KryptonTypeParser::Struct_specifierContext::LEFT_BRACE() {
  return getToken(KryptonTypeParser::LEFT_BRACE, 0);
}

tree::TerminalNode* KryptonTypeParser::Struct_specifierContext::RIGHT_BRACE() {
  return getToken(KryptonTypeParser::RIGHT_BRACE, 0);
}

KryptonTypeParser::Struct_generic_parametersContext* KryptonTypeParser::Struct_specifierContext::struct_generic_parameters() {
  return getRuleContext<KryptonTypeParser::Struct_generic_parametersContext>(0);
}

std::vector<KryptonTypeParser::DeclarationContext *> KryptonTypeParser::Struct_specifierContext::declaration() {
  return getRuleContexts<KryptonTypeParser::DeclarationContext>();
}

KryptonTypeParser::DeclarationContext* KryptonTypeParser::Struct_specifierContext::declaration(size_t i) {
  return getRuleContext<KryptonTypeParser::DeclarationContext>(i);
}

tree::TerminalNode* KryptonTypeParser::Struct_specifierContext::IDENTIFIER() {
  return getToken(KryptonTypeParser::IDENTIFIER, 0);
}


size_t KryptonTypeParser::Struct_specifierContext::getRuleIndex() const {
  return KryptonTypeParser::RuleStruct_specifier;
}

antlrcpp::Any KryptonTypeParser::Struct_specifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonTypeVisitor*>(visitor))
    return parserVisitor->visitStruct_specifier(this);
  else
    return visitor->visitChildren(this);
}

KryptonTypeParser::Struct_specifierContext* KryptonTypeParser::struct_specifier() {
  Struct_specifierContext *_localctx = _tracker.createInstance<Struct_specifierContext>(_ctx, getState());
  enterRule(_localctx, 16, KryptonTypeParser::RuleStruct_specifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(106);
    match(KryptonTypeParser::STRUCT);

    setState(108);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == KryptonTypeParser::IDENTIFIER) {
      setState(107);
      match(KryptonTypeParser::IDENTIFIER);
    }
    setState(111);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == KryptonTypeParser::LESS_THAN) {
      setState(110);
      struct_generic_parameters();
    }
    setState(113);
    match(KryptonTypeParser::LEFT_BRACE);
    setState(117);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << KryptonTypeParser::C8)
      | (1ULL << KryptonTypeParser::I32)
      | (1ULL << KryptonTypeParser::STRUCT)
      | (1ULL << KryptonTypeParser::LEFT_PARENTHESIS)
      | (1ULL << KryptonTypeParser::IDENTIFIER))) != 0)) {
      setState(114);
      declaration();
      setState(119);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(120);
    match(KryptonTypeParser::RIGHT_BRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Struct_generic_parameterContext ------------------------------------------------------------------

KryptonTypeParser::Struct_generic_parameterContext::Struct_generic_parameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KryptonTypeParser::Struct_generic_parameterContext::TYPE() {
  return getToken(KryptonTypeParser::TYPE, 0);
}

tree::TerminalNode* KryptonTypeParser::Struct_generic_parameterContext::IDENTIFIER() {
  return getToken(KryptonTypeParser::IDENTIFIER, 0);
}

KryptonTypeParser::Type_specifierContext* KryptonTypeParser::Struct_generic_parameterContext::type_specifier() {
  return getRuleContext<KryptonTypeParser::Type_specifierContext>(0);
}


size_t KryptonTypeParser::Struct_generic_parameterContext::getRuleIndex() const {
  return KryptonTypeParser::RuleStruct_generic_parameter;
}

antlrcpp::Any KryptonTypeParser::Struct_generic_parameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonTypeVisitor*>(visitor))
    return parserVisitor->visitStruct_generic_parameter(this);
  else
    return visitor->visitChildren(this);
}

KryptonTypeParser::Struct_generic_parameterContext* KryptonTypeParser::struct_generic_parameter() {
  Struct_generic_parameterContext *_localctx = _tracker.createInstance<Struct_generic_parameterContext>(_ctx, getState());
  enterRule(_localctx, 18, KryptonTypeParser::RuleStruct_generic_parameter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(127);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KryptonTypeParser::TYPE: {
        enterOuterAlt(_localctx, 1);
        setState(122);
        match(KryptonTypeParser::TYPE);
        setState(123);
        match(KryptonTypeParser::IDENTIFIER);
        break;
      }

      case KryptonTypeParser::C8:
      case KryptonTypeParser::I32:
      case KryptonTypeParser::STRUCT:
      case KryptonTypeParser::LEFT_PARENTHESIS:
      case KryptonTypeParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 2);
        setState(124);
        type_specifier();
        setState(125);
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

//----------------- Struct_generic_argumentContext ------------------------------------------------------------------

KryptonTypeParser::Struct_generic_argumentContext::Struct_generic_argumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KryptonTypeParser::Type_specifierContext* KryptonTypeParser::Struct_generic_argumentContext::type_specifier() {
  return getRuleContext<KryptonTypeParser::Type_specifierContext>(0);
}


size_t KryptonTypeParser::Struct_generic_argumentContext::getRuleIndex() const {
  return KryptonTypeParser::RuleStruct_generic_argument;
}

antlrcpp::Any KryptonTypeParser::Struct_generic_argumentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonTypeVisitor*>(visitor))
    return parserVisitor->visitStruct_generic_argument(this);
  else
    return visitor->visitChildren(this);
}

KryptonTypeParser::Struct_generic_argumentContext* KryptonTypeParser::struct_generic_argument() {
  Struct_generic_argumentContext *_localctx = _tracker.createInstance<Struct_generic_argumentContext>(_ctx, getState());
  enterRule(_localctx, 20, KryptonTypeParser::RuleStruct_generic_argument);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(129);
    type_specifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Struct_generic_argument_listContext ------------------------------------------------------------------

KryptonTypeParser::Struct_generic_argument_listContext::Struct_generic_argument_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<KryptonTypeParser::Struct_generic_argumentContext *> KryptonTypeParser::Struct_generic_argument_listContext::struct_generic_argument() {
  return getRuleContexts<KryptonTypeParser::Struct_generic_argumentContext>();
}

KryptonTypeParser::Struct_generic_argumentContext* KryptonTypeParser::Struct_generic_argument_listContext::struct_generic_argument(size_t i) {
  return getRuleContext<KryptonTypeParser::Struct_generic_argumentContext>(i);
}

std::vector<tree::TerminalNode *> KryptonTypeParser::Struct_generic_argument_listContext::COMMA() {
  return getTokens(KryptonTypeParser::COMMA);
}

tree::TerminalNode* KryptonTypeParser::Struct_generic_argument_listContext::COMMA(size_t i) {
  return getToken(KryptonTypeParser::COMMA, i);
}


size_t KryptonTypeParser::Struct_generic_argument_listContext::getRuleIndex() const {
  return KryptonTypeParser::RuleStruct_generic_argument_list;
}

antlrcpp::Any KryptonTypeParser::Struct_generic_argument_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonTypeVisitor*>(visitor))
    return parserVisitor->visitStruct_generic_argument_list(this);
  else
    return visitor->visitChildren(this);
}

KryptonTypeParser::Struct_generic_argument_listContext* KryptonTypeParser::struct_generic_argument_list() {
  Struct_generic_argument_listContext *_localctx = _tracker.createInstance<Struct_generic_argument_listContext>(_ctx, getState());
  enterRule(_localctx, 22, KryptonTypeParser::RuleStruct_generic_argument_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(140);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KryptonTypeParser::C8:
      case KryptonTypeParser::I32:
      case KryptonTypeParser::STRUCT:
      case KryptonTypeParser::LEFT_PARENTHESIS:
      case KryptonTypeParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(131);
        struct_generic_argument();
        setState(136);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == KryptonTypeParser::COMMA) {
          setState(132);
          match(KryptonTypeParser::COMMA);
          setState(133);
          struct_generic_argument();
          setState(138);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case KryptonTypeParser::GREATER_THAN: {
        enterOuterAlt(_localctx, 2);

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

//----------------- Struct_generic_argumentsContext ------------------------------------------------------------------

KryptonTypeParser::Struct_generic_argumentsContext::Struct_generic_argumentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KryptonTypeParser::Struct_generic_argumentsContext::LESS_THAN() {
  return getToken(KryptonTypeParser::LESS_THAN, 0);
}

KryptonTypeParser::Struct_generic_argument_listContext* KryptonTypeParser::Struct_generic_argumentsContext::struct_generic_argument_list() {
  return getRuleContext<KryptonTypeParser::Struct_generic_argument_listContext>(0);
}

tree::TerminalNode* KryptonTypeParser::Struct_generic_argumentsContext::GREATER_THAN() {
  return getToken(KryptonTypeParser::GREATER_THAN, 0);
}


size_t KryptonTypeParser::Struct_generic_argumentsContext::getRuleIndex() const {
  return KryptonTypeParser::RuleStruct_generic_arguments;
}

antlrcpp::Any KryptonTypeParser::Struct_generic_argumentsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonTypeVisitor*>(visitor))
    return parserVisitor->visitStruct_generic_arguments(this);
  else
    return visitor->visitChildren(this);
}

KryptonTypeParser::Struct_generic_argumentsContext* KryptonTypeParser::struct_generic_arguments() {
  Struct_generic_argumentsContext *_localctx = _tracker.createInstance<Struct_generic_argumentsContext>(_ctx, getState());
  enterRule(_localctx, 24, KryptonTypeParser::RuleStruct_generic_arguments);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(142);
    match(KryptonTypeParser::LESS_THAN);
    setState(143);
    struct_generic_argument_list();
    setState(144);
    match(KryptonTypeParser::GREATER_THAN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Struct_generic_parameter_listContext ------------------------------------------------------------------

KryptonTypeParser::Struct_generic_parameter_listContext::Struct_generic_parameter_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<KryptonTypeParser::Struct_generic_parameterContext *> KryptonTypeParser::Struct_generic_parameter_listContext::struct_generic_parameter() {
  return getRuleContexts<KryptonTypeParser::Struct_generic_parameterContext>();
}

KryptonTypeParser::Struct_generic_parameterContext* KryptonTypeParser::Struct_generic_parameter_listContext::struct_generic_parameter(size_t i) {
  return getRuleContext<KryptonTypeParser::Struct_generic_parameterContext>(i);
}

std::vector<tree::TerminalNode *> KryptonTypeParser::Struct_generic_parameter_listContext::COMMA() {
  return getTokens(KryptonTypeParser::COMMA);
}

tree::TerminalNode* KryptonTypeParser::Struct_generic_parameter_listContext::COMMA(size_t i) {
  return getToken(KryptonTypeParser::COMMA, i);
}


size_t KryptonTypeParser::Struct_generic_parameter_listContext::getRuleIndex() const {
  return KryptonTypeParser::RuleStruct_generic_parameter_list;
}

antlrcpp::Any KryptonTypeParser::Struct_generic_parameter_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonTypeVisitor*>(visitor))
    return parserVisitor->visitStruct_generic_parameter_list(this);
  else
    return visitor->visitChildren(this);
}

KryptonTypeParser::Struct_generic_parameter_listContext* KryptonTypeParser::struct_generic_parameter_list() {
  Struct_generic_parameter_listContext *_localctx = _tracker.createInstance<Struct_generic_parameter_listContext>(_ctx, getState());
  enterRule(_localctx, 26, KryptonTypeParser::RuleStruct_generic_parameter_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(155);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KryptonTypeParser::C8:
      case KryptonTypeParser::I32:
      case KryptonTypeParser::STRUCT:
      case KryptonTypeParser::TYPE:
      case KryptonTypeParser::LEFT_PARENTHESIS:
      case KryptonTypeParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(146);
        struct_generic_parameter();
        setState(151);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == KryptonTypeParser::COMMA) {
          setState(147);
          match(KryptonTypeParser::COMMA);
          setState(148);
          struct_generic_parameter();
          setState(153);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case KryptonTypeParser::GREATER_THAN: {
        enterOuterAlt(_localctx, 2);

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

//----------------- Struct_generic_parametersContext ------------------------------------------------------------------

KryptonTypeParser::Struct_generic_parametersContext::Struct_generic_parametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KryptonTypeParser::Struct_generic_parametersContext::LESS_THAN() {
  return getToken(KryptonTypeParser::LESS_THAN, 0);
}

KryptonTypeParser::Struct_generic_parameter_listContext* KryptonTypeParser::Struct_generic_parametersContext::struct_generic_parameter_list() {
  return getRuleContext<KryptonTypeParser::Struct_generic_parameter_listContext>(0);
}

tree::TerminalNode* KryptonTypeParser::Struct_generic_parametersContext::GREATER_THAN() {
  return getToken(KryptonTypeParser::GREATER_THAN, 0);
}


size_t KryptonTypeParser::Struct_generic_parametersContext::getRuleIndex() const {
  return KryptonTypeParser::RuleStruct_generic_parameters;
}

antlrcpp::Any KryptonTypeParser::Struct_generic_parametersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonTypeVisitor*>(visitor))
    return parserVisitor->visitStruct_generic_parameters(this);
  else
    return visitor->visitChildren(this);
}

KryptonTypeParser::Struct_generic_parametersContext* KryptonTypeParser::struct_generic_parameters() {
  Struct_generic_parametersContext *_localctx = _tracker.createInstance<Struct_generic_parametersContext>(_ctx, getState());
  enterRule(_localctx, 28, KryptonTypeParser::RuleStruct_generic_parameters);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(157);
    match(KryptonTypeParser::LESS_THAN);
    setState(158);
    struct_generic_parameter_list();
    setState(159);
    match(KryptonTypeParser::GREATER_THAN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_specifierContext ------------------------------------------------------------------

KryptonTypeParser::Function_specifierContext::Function_specifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KryptonTypeParser::Function_parametersContext* KryptonTypeParser::Function_specifierContext::function_parameters() {
  return getRuleContext<KryptonTypeParser::Function_parametersContext>(0);
}

tree::TerminalNode* KryptonTypeParser::Function_specifierContext::RIGHT_ARROW() {
  return getToken(KryptonTypeParser::RIGHT_ARROW, 0);
}

KryptonTypeParser::Type_specifierContext* KryptonTypeParser::Function_specifierContext::type_specifier() {
  return getRuleContext<KryptonTypeParser::Type_specifierContext>(0);
}


size_t KryptonTypeParser::Function_specifierContext::getRuleIndex() const {
  return KryptonTypeParser::RuleFunction_specifier;
}

antlrcpp::Any KryptonTypeParser::Function_specifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonTypeVisitor*>(visitor))
    return parserVisitor->visitFunction_specifier(this);
  else
    return visitor->visitChildren(this);
}

KryptonTypeParser::Function_specifierContext* KryptonTypeParser::function_specifier() {
  Function_specifierContext *_localctx = _tracker.createInstance<Function_specifierContext>(_ctx, getState());
  enterRule(_localctx, 30, KryptonTypeParser::RuleFunction_specifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(161);
    function_parameters();
    setState(162);
    match(KryptonTypeParser::RIGHT_ARROW);
    setState(163);
    type_specifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_parameterContext ------------------------------------------------------------------

KryptonTypeParser::Function_parameterContext::Function_parameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KryptonTypeParser::Type_specifierContext* KryptonTypeParser::Function_parameterContext::type_specifier() {
  return getRuleContext<KryptonTypeParser::Type_specifierContext>(0);
}

tree::TerminalNode* KryptonTypeParser::Function_parameterContext::IDENTIFIER() {
  return getToken(KryptonTypeParser::IDENTIFIER, 0);
}


size_t KryptonTypeParser::Function_parameterContext::getRuleIndex() const {
  return KryptonTypeParser::RuleFunction_parameter;
}

antlrcpp::Any KryptonTypeParser::Function_parameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonTypeVisitor*>(visitor))
    return parserVisitor->visitFunction_parameter(this);
  else
    return visitor->visitChildren(this);
}

KryptonTypeParser::Function_parameterContext* KryptonTypeParser::function_parameter() {
  Function_parameterContext *_localctx = _tracker.createInstance<Function_parameterContext>(_ctx, getState());
  enterRule(_localctx, 32, KryptonTypeParser::RuleFunction_parameter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(165);
    type_specifier();

    setState(167);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == KryptonTypeParser::IDENTIFIER) {
      setState(166);
      match(KryptonTypeParser::IDENTIFIER);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_parameter_listContext ------------------------------------------------------------------

KryptonTypeParser::Function_parameter_listContext::Function_parameter_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> KryptonTypeParser::Function_parameter_listContext::COMMA() {
  return getTokens(KryptonTypeParser::COMMA);
}

tree::TerminalNode* KryptonTypeParser::Function_parameter_listContext::COMMA(size_t i) {
  return getToken(KryptonTypeParser::COMMA, i);
}

std::vector<KryptonTypeParser::Function_parameterContext *> KryptonTypeParser::Function_parameter_listContext::function_parameter() {
  return getRuleContexts<KryptonTypeParser::Function_parameterContext>();
}

KryptonTypeParser::Function_parameterContext* KryptonTypeParser::Function_parameter_listContext::function_parameter(size_t i) {
  return getRuleContext<KryptonTypeParser::Function_parameterContext>(i);
}


size_t KryptonTypeParser::Function_parameter_listContext::getRuleIndex() const {
  return KryptonTypeParser::RuleFunction_parameter_list;
}

antlrcpp::Any KryptonTypeParser::Function_parameter_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonTypeVisitor*>(visitor))
    return parserVisitor->visitFunction_parameter_list(this);
  else
    return visitor->visitChildren(this);
}

KryptonTypeParser::Function_parameter_listContext* KryptonTypeParser::function_parameter_list() {
  Function_parameter_listContext *_localctx = _tracker.createInstance<Function_parameter_listContext>(_ctx, getState());
  enterRule(_localctx, 34, KryptonTypeParser::RuleFunction_parameter_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(170);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << KryptonTypeParser::C8)
      | (1ULL << KryptonTypeParser::I32)
      | (1ULL << KryptonTypeParser::STRUCT)
      | (1ULL << KryptonTypeParser::LEFT_PARENTHESIS)
      | (1ULL << KryptonTypeParser::IDENTIFIER))) != 0)) {
      setState(169);
      function_parameter();
    }
    setState(176);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KryptonTypeParser::COMMA) {
      setState(172);
      match(KryptonTypeParser::COMMA);
      setState(173);
      function_parameter();
      setState(178);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_parametersContext ------------------------------------------------------------------

KryptonTypeParser::Function_parametersContext::Function_parametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KryptonTypeParser::Function_parametersContext::LEFT_PARENTHESIS() {
  return getToken(KryptonTypeParser::LEFT_PARENTHESIS, 0);
}

KryptonTypeParser::Function_parameter_listContext* KryptonTypeParser::Function_parametersContext::function_parameter_list() {
  return getRuleContext<KryptonTypeParser::Function_parameter_listContext>(0);
}

tree::TerminalNode* KryptonTypeParser::Function_parametersContext::RIGHT_PARENTHESIS() {
  return getToken(KryptonTypeParser::RIGHT_PARENTHESIS, 0);
}


size_t KryptonTypeParser::Function_parametersContext::getRuleIndex() const {
  return KryptonTypeParser::RuleFunction_parameters;
}

antlrcpp::Any KryptonTypeParser::Function_parametersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonTypeVisitor*>(visitor))
    return parserVisitor->visitFunction_parameters(this);
  else
    return visitor->visitChildren(this);
}

KryptonTypeParser::Function_parametersContext* KryptonTypeParser::function_parameters() {
  Function_parametersContext *_localctx = _tracker.createInstance<Function_parametersContext>(_ctx, getState());
  enterRule(_localctx, 36, KryptonTypeParser::RuleFunction_parameters);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(179);
    match(KryptonTypeParser::LEFT_PARENTHESIS);
    setState(180);
    function_parameter_list();
    setState(181);
    match(KryptonTypeParser::RIGHT_PARENTHESIS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Literal_valueContext ------------------------------------------------------------------

KryptonTypeParser::Literal_valueContext::Literal_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KryptonTypeParser::Literal_valueContext::INT() {
  return getToken(KryptonTypeParser::INT, 0);
}

tree::TerminalNode* KryptonTypeParser::Literal_valueContext::CHAR() {
  return getToken(KryptonTypeParser::CHAR, 0);
}


size_t KryptonTypeParser::Literal_valueContext::getRuleIndex() const {
  return KryptonTypeParser::RuleLiteral_value;
}

antlrcpp::Any KryptonTypeParser::Literal_valueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonTypeVisitor*>(visitor))
    return parserVisitor->visitLiteral_value(this);
  else
    return visitor->visitChildren(this);
}

KryptonTypeParser::Literal_valueContext* KryptonTypeParser::literal_value() {
  Literal_valueContext *_localctx = _tracker.createInstance<Literal_valueContext>(_ctx, getState());
  enterRule(_localctx, 38, KryptonTypeParser::RuleLiteral_value);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(183);
    _la = _input->LA(1);
    if (!(_la == KryptonTypeParser::INT

    || _la == KryptonTypeParser::CHAR)) {
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

//----------------- ValueContext ------------------------------------------------------------------

KryptonTypeParser::ValueContext::ValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KryptonTypeParser::Literal_valueContext* KryptonTypeParser::ValueContext::literal_value() {
  return getRuleContext<KryptonTypeParser::Literal_valueContext>(0);
}

KryptonTypeParser::Function_callContext* KryptonTypeParser::ValueContext::function_call() {
  return getRuleContext<KryptonTypeParser::Function_callContext>(0);
}

tree::TerminalNode* KryptonTypeParser::ValueContext::IDENTIFIER() {
  return getToken(KryptonTypeParser::IDENTIFIER, 0);
}


size_t KryptonTypeParser::ValueContext::getRuleIndex() const {
  return KryptonTypeParser::RuleValue;
}

antlrcpp::Any KryptonTypeParser::ValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonTypeVisitor*>(visitor))
    return parserVisitor->visitValue(this);
  else
    return visitor->visitChildren(this);
}

KryptonTypeParser::ValueContext* KryptonTypeParser::value() {
  ValueContext *_localctx = _tracker.createInstance<ValueContext>(_ctx, getState());
  enterRule(_localctx, 40, KryptonTypeParser::RuleValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(188);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(185);
      literal_value();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(186);
      function_call();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(187);
      match(KryptonTypeParser::IDENTIFIER);
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

//----------------- Function_callContext ------------------------------------------------------------------

KryptonTypeParser::Function_callContext::Function_callContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KryptonTypeParser::Function_callContext::IDENTIFIER() {
  return getToken(KryptonTypeParser::IDENTIFIER, 0);
}

std::vector<KryptonTypeParser::Call_operatorContext *> KryptonTypeParser::Function_callContext::call_operator() {
  return getRuleContexts<KryptonTypeParser::Call_operatorContext>();
}

KryptonTypeParser::Call_operatorContext* KryptonTypeParser::Function_callContext::call_operator(size_t i) {
  return getRuleContext<KryptonTypeParser::Call_operatorContext>(i);
}


size_t KryptonTypeParser::Function_callContext::getRuleIndex() const {
  return KryptonTypeParser::RuleFunction_call;
}

antlrcpp::Any KryptonTypeParser::Function_callContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonTypeVisitor*>(visitor))
    return parserVisitor->visitFunction_call(this);
  else
    return visitor->visitChildren(this);
}

KryptonTypeParser::Function_callContext* KryptonTypeParser::function_call() {
  Function_callContext *_localctx = _tracker.createInstance<Function_callContext>(_ctx, getState());
  enterRule(_localctx, 42, KryptonTypeParser::RuleFunction_call);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(190);
    match(KryptonTypeParser::IDENTIFIER);
    setState(192); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(191);
      call_operator();
      setState(194); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == KryptonTypeParser::LEFT_PARENTHESIS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Call_operatorContext ------------------------------------------------------------------

KryptonTypeParser::Call_operatorContext::Call_operatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KryptonTypeParser::Call_operatorContext::LEFT_PARENTHESIS() {
  return getToken(KryptonTypeParser::LEFT_PARENTHESIS, 0);
}

KryptonTypeParser::Call_parametersContext* KryptonTypeParser::Call_operatorContext::call_parameters() {
  return getRuleContext<KryptonTypeParser::Call_parametersContext>(0);
}

tree::TerminalNode* KryptonTypeParser::Call_operatorContext::RIGHT_PARENTHESIS() {
  return getToken(KryptonTypeParser::RIGHT_PARENTHESIS, 0);
}


size_t KryptonTypeParser::Call_operatorContext::getRuleIndex() const {
  return KryptonTypeParser::RuleCall_operator;
}

antlrcpp::Any KryptonTypeParser::Call_operatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonTypeVisitor*>(visitor))
    return parserVisitor->visitCall_operator(this);
  else
    return visitor->visitChildren(this);
}

KryptonTypeParser::Call_operatorContext* KryptonTypeParser::call_operator() {
  Call_operatorContext *_localctx = _tracker.createInstance<Call_operatorContext>(_ctx, getState());
  enterRule(_localctx, 44, KryptonTypeParser::RuleCall_operator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(196);
    match(KryptonTypeParser::LEFT_PARENTHESIS);
    setState(197);
    call_parameters();
    setState(198);
    match(KryptonTypeParser::RIGHT_PARENTHESIS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Call_parametersContext ------------------------------------------------------------------

KryptonTypeParser::Call_parametersContext::Call_parametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> KryptonTypeParser::Call_parametersContext::COMMA() {
  return getTokens(KryptonTypeParser::COMMA);
}

tree::TerminalNode* KryptonTypeParser::Call_parametersContext::COMMA(size_t i) {
  return getToken(KryptonTypeParser::COMMA, i);
}

std::vector<KryptonTypeParser::ExprContext *> KryptonTypeParser::Call_parametersContext::expr() {
  return getRuleContexts<KryptonTypeParser::ExprContext>();
}

KryptonTypeParser::ExprContext* KryptonTypeParser::Call_parametersContext::expr(size_t i) {
  return getRuleContext<KryptonTypeParser::ExprContext>(i);
}


size_t KryptonTypeParser::Call_parametersContext::getRuleIndex() const {
  return KryptonTypeParser::RuleCall_parameters;
}

antlrcpp::Any KryptonTypeParser::Call_parametersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonTypeVisitor*>(visitor))
    return parserVisitor->visitCall_parameters(this);
  else
    return visitor->visitChildren(this);
}

KryptonTypeParser::Call_parametersContext* KryptonTypeParser::call_parameters() {
  Call_parametersContext *_localctx = _tracker.createInstance<Call_parametersContext>(_ctx, getState());
  enterRule(_localctx, 46, KryptonTypeParser::RuleCall_parameters);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(201);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << KryptonTypeParser::IF)
      | (1ULL << KryptonTypeParser::LEFT_PARENTHESIS)
      | (1ULL << KryptonTypeParser::IDENTIFIER)
      | (1ULL << KryptonTypeParser::INT)
      | (1ULL << KryptonTypeParser::CHAR))) != 0)) {
      setState(200);
      expr();
    }
    setState(207);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KryptonTypeParser::COMMA) {
      setState(203);
      match(KryptonTypeParser::COMMA);
      setState(204);
      expr();
      setState(209);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Basic_valueContext ------------------------------------------------------------------

KryptonTypeParser::Basic_valueContext::Basic_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KryptonTypeParser::ValueContext* KryptonTypeParser::Basic_valueContext::value() {
  return getRuleContext<KryptonTypeParser::ValueContext>(0);
}

tree::TerminalNode* KryptonTypeParser::Basic_valueContext::LEFT_PARENTHESIS() {
  return getToken(KryptonTypeParser::LEFT_PARENTHESIS, 0);
}

KryptonTypeParser::ExprContext* KryptonTypeParser::Basic_valueContext::expr() {
  return getRuleContext<KryptonTypeParser::ExprContext>(0);
}

tree::TerminalNode* KryptonTypeParser::Basic_valueContext::RIGHT_PARENTHESIS() {
  return getToken(KryptonTypeParser::RIGHT_PARENTHESIS, 0);
}


size_t KryptonTypeParser::Basic_valueContext::getRuleIndex() const {
  return KryptonTypeParser::RuleBasic_value;
}

antlrcpp::Any KryptonTypeParser::Basic_valueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonTypeVisitor*>(visitor))
    return parserVisitor->visitBasic_value(this);
  else
    return visitor->visitChildren(this);
}

KryptonTypeParser::Basic_valueContext* KryptonTypeParser::basic_value() {
  Basic_valueContext *_localctx = _tracker.createInstance<Basic_valueContext>(_ctx, getState());
  enterRule(_localctx, 48, KryptonTypeParser::RuleBasic_value);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(215);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KryptonTypeParser::IDENTIFIER:
      case KryptonTypeParser::INT:
      case KryptonTypeParser::CHAR: {
        enterOuterAlt(_localctx, 1);
        setState(210);
        value();
        break;
      }

      case KryptonTypeParser::LEFT_PARENTHESIS: {
        enterOuterAlt(_localctx, 2);
        setState(211);
        match(KryptonTypeParser::LEFT_PARENTHESIS);
        setState(212);
        expr();
        setState(213);
        match(KryptonTypeParser::RIGHT_PARENTHESIS);
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

//----------------- Value_visitorContext ------------------------------------------------------------------

KryptonTypeParser::Value_visitorContext::Value_visitorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KryptonTypeParser::Basic_valueContext* KryptonTypeParser::Value_visitorContext::basic_value() {
  return getRuleContext<KryptonTypeParser::Basic_valueContext>(0);
}

std::vector<tree::TerminalNode *> KryptonTypeParser::Value_visitorContext::PERIOD() {
  return getTokens(KryptonTypeParser::PERIOD);
}

tree::TerminalNode* KryptonTypeParser::Value_visitorContext::PERIOD(size_t i) {
  return getToken(KryptonTypeParser::PERIOD, i);
}

std::vector<KryptonTypeParser::ValueContext *> KryptonTypeParser::Value_visitorContext::value() {
  return getRuleContexts<KryptonTypeParser::ValueContext>();
}

KryptonTypeParser::ValueContext* KryptonTypeParser::Value_visitorContext::value(size_t i) {
  return getRuleContext<KryptonTypeParser::ValueContext>(i);
}


size_t KryptonTypeParser::Value_visitorContext::getRuleIndex() const {
  return KryptonTypeParser::RuleValue_visitor;
}

antlrcpp::Any KryptonTypeParser::Value_visitorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonTypeVisitor*>(visitor))
    return parserVisitor->visitValue_visitor(this);
  else
    return visitor->visitChildren(this);
}

KryptonTypeParser::Value_visitorContext* KryptonTypeParser::value_visitor() {
  Value_visitorContext *_localctx = _tracker.createInstance<Value_visitorContext>(_ctx, getState());
  enterRule(_localctx, 50, KryptonTypeParser::RuleValue_visitor);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(217);
    basic_value();
    setState(222);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KryptonTypeParser::PERIOD) {
      setState(218);
      match(KryptonTypeParser::PERIOD);
      setState(219);
      value();
      setState(224);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

KryptonTypeParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KryptonTypeParser::ConditionalContext* KryptonTypeParser::ExprContext::conditional() {
  return getRuleContext<KryptonTypeParser::ConditionalContext>(0);
}

KryptonTypeParser::FormularContext* KryptonTypeParser::ExprContext::formular() {
  return getRuleContext<KryptonTypeParser::FormularContext>(0);
}


size_t KryptonTypeParser::ExprContext::getRuleIndex() const {
  return KryptonTypeParser::RuleExpr;
}

antlrcpp::Any KryptonTypeParser::ExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonTypeVisitor*>(visitor))
    return parserVisitor->visitExpr(this);
  else
    return visitor->visitChildren(this);
}

KryptonTypeParser::ExprContext* KryptonTypeParser::expr() {
  ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, getState());
  enterRule(_localctx, 52, KryptonTypeParser::RuleExpr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(227);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KryptonTypeParser::IF: {
        enterOuterAlt(_localctx, 1);
        setState(225);
        conditional();
        break;
      }

      case KryptonTypeParser::LEFT_PARENTHESIS:
      case KryptonTypeParser::IDENTIFIER:
      case KryptonTypeParser::INT:
      case KryptonTypeParser::CHAR: {
        enterOuterAlt(_localctx, 2);
        setState(226);
        formular();
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

//----------------- FormularContext ------------------------------------------------------------------

KryptonTypeParser::FormularContext::FormularContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KryptonTypeParser::ComparationContext* KryptonTypeParser::FormularContext::comparation() {
  return getRuleContext<KryptonTypeParser::ComparationContext>(0);
}


size_t KryptonTypeParser::FormularContext::getRuleIndex() const {
  return KryptonTypeParser::RuleFormular;
}

antlrcpp::Any KryptonTypeParser::FormularContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonTypeVisitor*>(visitor))
    return parserVisitor->visitFormular(this);
  else
    return visitor->visitChildren(this);
}

KryptonTypeParser::FormularContext* KryptonTypeParser::formular() {
  FormularContext *_localctx = _tracker.createInstance<FormularContext>(_ctx, getState());
  enterRule(_localctx, 54, KryptonTypeParser::RuleFormular);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(229);
    comparation();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ComparationContext ------------------------------------------------------------------

KryptonTypeParser::ComparationContext::ComparationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<KryptonTypeParser::SumContext *> KryptonTypeParser::ComparationContext::sum() {
  return getRuleContexts<KryptonTypeParser::SumContext>();
}

KryptonTypeParser::SumContext* KryptonTypeParser::ComparationContext::sum(size_t i) {
  return getRuleContext<KryptonTypeParser::SumContext>(i);
}

tree::TerminalNode* KryptonTypeParser::ComparationContext::EQUAL() {
  return getToken(KryptonTypeParser::EQUAL, 0);
}


size_t KryptonTypeParser::ComparationContext::getRuleIndex() const {
  return KryptonTypeParser::RuleComparation;
}

antlrcpp::Any KryptonTypeParser::ComparationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonTypeVisitor*>(visitor))
    return parserVisitor->visitComparation(this);
  else
    return visitor->visitChildren(this);
}

KryptonTypeParser::ComparationContext* KryptonTypeParser::comparation() {
  ComparationContext *_localctx = _tracker.createInstance<ComparationContext>(_ctx, getState());
  enterRule(_localctx, 56, KryptonTypeParser::RuleComparation);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(236);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(231);
      sum();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(232);
      sum();
      setState(233);
      match(KryptonTypeParser::EQUAL);
      setState(234);
      sum();
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

//----------------- SumContext ------------------------------------------------------------------

KryptonTypeParser::SumContext::SumContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<KryptonTypeParser::TermContext *> KryptonTypeParser::SumContext::term() {
  return getRuleContexts<KryptonTypeParser::TermContext>();
}

KryptonTypeParser::TermContext* KryptonTypeParser::SumContext::term(size_t i) {
  return getRuleContext<KryptonTypeParser::TermContext>(i);
}

std::vector<tree::TerminalNode *> KryptonTypeParser::SumContext::PLUS() {
  return getTokens(KryptonTypeParser::PLUS);
}

tree::TerminalNode* KryptonTypeParser::SumContext::PLUS(size_t i) {
  return getToken(KryptonTypeParser::PLUS, i);
}

std::vector<tree::TerminalNode *> KryptonTypeParser::SumContext::MINUS() {
  return getTokens(KryptonTypeParser::MINUS);
}

tree::TerminalNode* KryptonTypeParser::SumContext::MINUS(size_t i) {
  return getToken(KryptonTypeParser::MINUS, i);
}


size_t KryptonTypeParser::SumContext::getRuleIndex() const {
  return KryptonTypeParser::RuleSum;
}

antlrcpp::Any KryptonTypeParser::SumContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonTypeVisitor*>(visitor))
    return parserVisitor->visitSum(this);
  else
    return visitor->visitChildren(this);
}

KryptonTypeParser::SumContext* KryptonTypeParser::sum() {
  SumContext *_localctx = _tracker.createInstance<SumContext>(_ctx, getState());
  enterRule(_localctx, 58, KryptonTypeParser::RuleSum);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(238);
    term();
    setState(243);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KryptonTypeParser::PLUS

    || _la == KryptonTypeParser::MINUS) {
      setState(239);
      _la = _input->LA(1);
      if (!(_la == KryptonTypeParser::PLUS

      || _la == KryptonTypeParser::MINUS)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(240);
      term();
      setState(245);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TermContext ------------------------------------------------------------------

KryptonTypeParser::TermContext::TermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<KryptonTypeParser::Value_visitorContext *> KryptonTypeParser::TermContext::value_visitor() {
  return getRuleContexts<KryptonTypeParser::Value_visitorContext>();
}

KryptonTypeParser::Value_visitorContext* KryptonTypeParser::TermContext::value_visitor(size_t i) {
  return getRuleContext<KryptonTypeParser::Value_visitorContext>(i);
}

std::vector<tree::TerminalNode *> KryptonTypeParser::TermContext::MULTIPLY() {
  return getTokens(KryptonTypeParser::MULTIPLY);
}

tree::TerminalNode* KryptonTypeParser::TermContext::MULTIPLY(size_t i) {
  return getToken(KryptonTypeParser::MULTIPLY, i);
}

std::vector<tree::TerminalNode *> KryptonTypeParser::TermContext::DIVIDE() {
  return getTokens(KryptonTypeParser::DIVIDE);
}

tree::TerminalNode* KryptonTypeParser::TermContext::DIVIDE(size_t i) {
  return getToken(KryptonTypeParser::DIVIDE, i);
}


size_t KryptonTypeParser::TermContext::getRuleIndex() const {
  return KryptonTypeParser::RuleTerm;
}

antlrcpp::Any KryptonTypeParser::TermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonTypeVisitor*>(visitor))
    return parserVisitor->visitTerm(this);
  else
    return visitor->visitChildren(this);
}

KryptonTypeParser::TermContext* KryptonTypeParser::term() {
  TermContext *_localctx = _tracker.createInstance<TermContext>(_ctx, getState());
  enterRule(_localctx, 60, KryptonTypeParser::RuleTerm);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(246);
    value_visitor();
    setState(251);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KryptonTypeParser::MULTIPLY

    || _la == KryptonTypeParser::DIVIDE) {
      setState(247);
      _la = _input->LA(1);
      if (!(_la == KryptonTypeParser::MULTIPLY

      || _la == KryptonTypeParser::DIVIDE)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(248);
      value_visitor();
      setState(253);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionalContext ------------------------------------------------------------------

KryptonTypeParser::ConditionalContext::ConditionalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KryptonTypeParser::ConditionalContext::IF() {
  return getToken(KryptonTypeParser::IF, 0);
}

tree::TerminalNode* KryptonTypeParser::ConditionalContext::LEFT_PARENTHESIS() {
  return getToken(KryptonTypeParser::LEFT_PARENTHESIS, 0);
}

std::vector<KryptonTypeParser::ExprContext *> KryptonTypeParser::ConditionalContext::expr() {
  return getRuleContexts<KryptonTypeParser::ExprContext>();
}

KryptonTypeParser::ExprContext* KryptonTypeParser::ConditionalContext::expr(size_t i) {
  return getRuleContext<KryptonTypeParser::ExprContext>(i);
}

tree::TerminalNode* KryptonTypeParser::ConditionalContext::RIGHT_PARENTHESIS() {
  return getToken(KryptonTypeParser::RIGHT_PARENTHESIS, 0);
}

KryptonTypeParser::Conditional_elseContext* KryptonTypeParser::ConditionalContext::conditional_else() {
  return getRuleContext<KryptonTypeParser::Conditional_elseContext>(0);
}

std::vector<KryptonTypeParser::Conditional_elseifContext *> KryptonTypeParser::ConditionalContext::conditional_elseif() {
  return getRuleContexts<KryptonTypeParser::Conditional_elseifContext>();
}

KryptonTypeParser::Conditional_elseifContext* KryptonTypeParser::ConditionalContext::conditional_elseif(size_t i) {
  return getRuleContext<KryptonTypeParser::Conditional_elseifContext>(i);
}


size_t KryptonTypeParser::ConditionalContext::getRuleIndex() const {
  return KryptonTypeParser::RuleConditional;
}

antlrcpp::Any KryptonTypeParser::ConditionalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonTypeVisitor*>(visitor))
    return parserVisitor->visitConditional(this);
  else
    return visitor->visitChildren(this);
}

KryptonTypeParser::ConditionalContext* KryptonTypeParser::conditional() {
  ConditionalContext *_localctx = _tracker.createInstance<ConditionalContext>(_ctx, getState());
  enterRule(_localctx, 62, KryptonTypeParser::RuleConditional);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(254);
    match(KryptonTypeParser::IF);
    setState(255);
    match(KryptonTypeParser::LEFT_PARENTHESIS);
    setState(256);
    expr();
    setState(257);
    match(KryptonTypeParser::RIGHT_PARENTHESIS);
    setState(258);
    expr();
    setState(262);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KryptonTypeParser::ELSEIF) {
      setState(259);
      conditional_elseif();
      setState(264);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(265);
    conditional_else();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Conditional_elseifContext ------------------------------------------------------------------

KryptonTypeParser::Conditional_elseifContext::Conditional_elseifContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KryptonTypeParser::Conditional_elseifContext::ELSEIF() {
  return getToken(KryptonTypeParser::ELSEIF, 0);
}

tree::TerminalNode* KryptonTypeParser::Conditional_elseifContext::LEFT_PARENTHESIS() {
  return getToken(KryptonTypeParser::LEFT_PARENTHESIS, 0);
}

std::vector<KryptonTypeParser::ExprContext *> KryptonTypeParser::Conditional_elseifContext::expr() {
  return getRuleContexts<KryptonTypeParser::ExprContext>();
}

KryptonTypeParser::ExprContext* KryptonTypeParser::Conditional_elseifContext::expr(size_t i) {
  return getRuleContext<KryptonTypeParser::ExprContext>(i);
}

tree::TerminalNode* KryptonTypeParser::Conditional_elseifContext::RIGHT_PARENTHESIS() {
  return getToken(KryptonTypeParser::RIGHT_PARENTHESIS, 0);
}


size_t KryptonTypeParser::Conditional_elseifContext::getRuleIndex() const {
  return KryptonTypeParser::RuleConditional_elseif;
}

antlrcpp::Any KryptonTypeParser::Conditional_elseifContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonTypeVisitor*>(visitor))
    return parserVisitor->visitConditional_elseif(this);
  else
    return visitor->visitChildren(this);
}

KryptonTypeParser::Conditional_elseifContext* KryptonTypeParser::conditional_elseif() {
  Conditional_elseifContext *_localctx = _tracker.createInstance<Conditional_elseifContext>(_ctx, getState());
  enterRule(_localctx, 64, KryptonTypeParser::RuleConditional_elseif);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(267);
    match(KryptonTypeParser::ELSEIF);
    setState(268);
    match(KryptonTypeParser::LEFT_PARENTHESIS);
    setState(269);
    expr();
    setState(270);
    match(KryptonTypeParser::RIGHT_PARENTHESIS);
    setState(271);
    expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Conditional_elseContext ------------------------------------------------------------------

KryptonTypeParser::Conditional_elseContext::Conditional_elseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KryptonTypeParser::Conditional_elseContext::ELSE() {
  return getToken(KryptonTypeParser::ELSE, 0);
}

KryptonTypeParser::ExprContext* KryptonTypeParser::Conditional_elseContext::expr() {
  return getRuleContext<KryptonTypeParser::ExprContext>(0);
}


size_t KryptonTypeParser::Conditional_elseContext::getRuleIndex() const {
  return KryptonTypeParser::RuleConditional_else;
}

antlrcpp::Any KryptonTypeParser::Conditional_elseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonTypeVisitor*>(visitor))
    return parserVisitor->visitConditional_else(this);
  else
    return visitor->visitChildren(this);
}

KryptonTypeParser::Conditional_elseContext* KryptonTypeParser::conditional_else() {
  Conditional_elseContext *_localctx = _tracker.createInstance<Conditional_elseContext>(_ctx, getState());
  enterRule(_localctx, 66, KryptonTypeParser::RuleConditional_else);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(273);
    match(KryptonTypeParser::ELSE);
    setState(274);
    expr();
   
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
  "basic_types", "type_identifier", "generic_specifier", "type_specifier", 
  "basic_declaration", "inited_declaration", "uninited_declaration", "declaration", 
  "struct_specifier", "struct_generic_parameter", "struct_generic_argument", 
  "struct_generic_argument_list", "struct_generic_arguments", "struct_generic_parameter_list", 
  "struct_generic_parameters", "function_specifier", "function_parameter", 
  "function_parameter_list", "function_parameters", "literal_value", "value", 
  "function_call", "call_operator", "call_parameters", "basic_value", "value_visitor", 
  "expr", "formular", "comparation", "sum", "term", "conditional", "conditional_elseif", 
  "conditional_else"
};

std::vector<std::string> KryptonTypeParser::_literalNames = {
  "", "'c8'", "'i32'", "'struct'", "'type'", "'if'", "'elseif'", "'else'", 
  "'{'", "'}'", "';'", "':'", "'->'", "'<'", "'>'", "'('", "')'", "'''", 
  "'\"'", "','", "'.'", "'+'", "'-'", "'*'", "'/'", "'='"
};

std::vector<std::string> KryptonTypeParser::_symbolicNames = {
  "", "C8", "I32", "STRUCT", "TYPE", "IF", "ELSEIF", "ELSE", "LEFT_BRACE", 
  "RIGHT_BRACE", "SEMICOLON", "COLON", "RIGHT_ARROW", "LESS_THAN", "GREATER_THAN", 
  "LEFT_PARENTHESIS", "RIGHT_PARENTHESIS", "SINGLE_QUOTE", "DOUBLE_QUOTE", 
  "COMMA", "PERIOD", "PLUS", "MINUS", "MULTIPLY", "DIVIDE", "EQUAL", "IDENTIFIER", 
  "INT", "CHAR", "WHITESPACE"
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
    0x3, 0x1f, 0x117, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 
    0x3, 0x5, 0x3, 0x4b, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x5, 0x5, 0x58, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x5c, 0xa, 0x6, 
    0x3, 0x6, 0x5, 0x6, 0x5f, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x5, 
    0x9, 0x6b, 0xa, 0x9, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x6f, 0xa, 0xa, 0x3, 
    0xa, 0x5, 0xa, 0x72, 0xa, 0xa, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 0x76, 0xa, 
    0xa, 0xc, 0xa, 0xe, 0xa, 0x79, 0xb, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x82, 0xa, 0xb, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0x89, 0xa, 0xd, 
    0xc, 0xd, 0xe, 0xd, 0x8c, 0xb, 0xd, 0x3, 0xd, 0x5, 0xd, 0x8f, 0xa, 0xd, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x7, 0xf, 0x98, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0x9b, 0xb, 0xf, 0x3, 0xf, 
    0x5, 0xf, 0x9e, 0xa, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 0x5, 
    0x12, 0xaa, 0xa, 0x12, 0x3, 0x13, 0x5, 0x13, 0xad, 0xa, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x7, 0x13, 0xb1, 0xa, 0x13, 0xc, 0x13, 0xe, 0x13, 0xb4, 0xb, 
    0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x5, 0x16, 0xbf, 0xa, 0x16, 0x3, 0x17, 
    0x3, 0x17, 0x6, 0x17, 0xc3, 0xa, 0x17, 0xd, 0x17, 0xe, 0x17, 0xc4, 0x3, 
    0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 0x5, 0x19, 0xcc, 0xa, 
    0x19, 0x3, 0x19, 0x3, 0x19, 0x7, 0x19, 0xd0, 0xa, 0x19, 0xc, 0x19, 0xe, 
    0x19, 0xd3, 0xb, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 
    0x1a, 0x5, 0x1a, 0xda, 0xa, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x7, 
    0x1b, 0xdf, 0xa, 0x1b, 0xc, 0x1b, 0xe, 0x1b, 0xe2, 0xb, 0x1b, 0x3, 0x1c, 
    0x3, 0x1c, 0x5, 0x1c, 0xe6, 0xa, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 
    0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0xef, 0xa, 0x1e, 
    0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x7, 0x1f, 0xf4, 0xa, 0x1f, 0xc, 0x1f, 
    0xe, 0x1f, 0xf7, 0xb, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x7, 0x20, 
    0xfc, 0xa, 0x20, 0xc, 0x20, 0xe, 0x20, 0xff, 0xb, 0x20, 0x3, 0x21, 0x3, 
    0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x7, 0x21, 0x107, 
    0xa, 0x21, 0xc, 0x21, 0xe, 0x21, 0x10a, 0xb, 0x21, 0x3, 0x21, 0x3, 0x21, 
    0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 
    0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x2, 0x2, 0x24, 0x2, 0x4, 0x6, 
    0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 
    0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 
    0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x2, 0x6, 0x3, 0x2, 0x3, 0x4, 
    0x3, 0x2, 0x1d, 0x1e, 0x3, 0x2, 0x17, 0x18, 0x3, 0x2, 0x19, 0x1a, 0x2, 
    0x113, 0x2, 0x46, 0x3, 0x2, 0x2, 0x2, 0x4, 0x4a, 0x3, 0x2, 0x2, 0x2, 
    0x6, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x8, 0x57, 0x3, 0x2, 0x2, 0x2, 0xa, 0x59, 
    0x3, 0x2, 0x2, 0x2, 0xc, 0x60, 0x3, 0x2, 0x2, 0x2, 0xe, 0x65, 0x3, 0x2, 
    0x2, 0x2, 0x10, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x12, 0x6c, 0x3, 0x2, 0x2, 
    0x2, 0x14, 0x81, 0x3, 0x2, 0x2, 0x2, 0x16, 0x83, 0x3, 0x2, 0x2, 0x2, 
    0x18, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x90, 0x3, 0x2, 0x2, 0x2, 0x1c, 
    0x9d, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x20, 0xa3, 
    0x3, 0x2, 0x2, 0x2, 0x22, 0xa7, 0x3, 0x2, 0x2, 0x2, 0x24, 0xac, 0x3, 
    0x2, 0x2, 0x2, 0x26, 0xb5, 0x3, 0x2, 0x2, 0x2, 0x28, 0xb9, 0x3, 0x2, 
    0x2, 0x2, 0x2a, 0xbe, 0x3, 0x2, 0x2, 0x2, 0x2c, 0xc0, 0x3, 0x2, 0x2, 
    0x2, 0x2e, 0xc6, 0x3, 0x2, 0x2, 0x2, 0x30, 0xcb, 0x3, 0x2, 0x2, 0x2, 
    0x32, 0xd9, 0x3, 0x2, 0x2, 0x2, 0x34, 0xdb, 0x3, 0x2, 0x2, 0x2, 0x36, 
    0xe5, 0x3, 0x2, 0x2, 0x2, 0x38, 0xe7, 0x3, 0x2, 0x2, 0x2, 0x3a, 0xee, 
    0x3, 0x2, 0x2, 0x2, 0x3c, 0xf0, 0x3, 0x2, 0x2, 0x2, 0x3e, 0xf8, 0x3, 
    0x2, 0x2, 0x2, 0x40, 0x100, 0x3, 0x2, 0x2, 0x2, 0x42, 0x10d, 0x3, 0x2, 
    0x2, 0x2, 0x44, 0x113, 0x3, 0x2, 0x2, 0x2, 0x46, 0x47, 0x9, 0x2, 0x2, 
    0x2, 0x47, 0x3, 0x3, 0x2, 0x2, 0x2, 0x48, 0x4b, 0x5, 0x2, 0x2, 0x2, 
    0x49, 0x4b, 0x7, 0x1c, 0x2, 0x2, 0x4a, 0x48, 0x3, 0x2, 0x2, 0x2, 0x4a, 
    0x49, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x5, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x4d, 
    0x7, 0x1c, 0x2, 0x2, 0x4d, 0x4e, 0x5, 0x1a, 0xe, 0x2, 0x4e, 0x7, 0x3, 
    0x2, 0x2, 0x2, 0x4f, 0x58, 0x5, 0x4, 0x3, 0x2, 0x50, 0x58, 0x5, 0x12, 
    0xa, 0x2, 0x51, 0x58, 0x5, 0x6, 0x4, 0x2, 0x52, 0x58, 0x5, 0x20, 0x11, 
    0x2, 0x53, 0x54, 0x7, 0x11, 0x2, 0x2, 0x54, 0x55, 0x5, 0x20, 0x11, 0x2, 
    0x55, 0x56, 0x7, 0x12, 0x2, 0x2, 0x56, 0x58, 0x3, 0x2, 0x2, 0x2, 0x57, 
    0x4f, 0x3, 0x2, 0x2, 0x2, 0x57, 0x50, 0x3, 0x2, 0x2, 0x2, 0x57, 0x51, 
    0x3, 0x2, 0x2, 0x2, 0x57, 0x52, 0x3, 0x2, 0x2, 0x2, 0x57, 0x53, 0x3, 
    0x2, 0x2, 0x2, 0x58, 0x9, 0x3, 0x2, 0x2, 0x2, 0x59, 0x5b, 0x5, 0x8, 
    0x5, 0x2, 0x5a, 0x5c, 0x7, 0x1c, 0x2, 0x2, 0x5b, 0x5a, 0x3, 0x2, 0x2, 
    0x2, 0x5b, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5e, 0x3, 0x2, 0x2, 0x2, 
    0x5d, 0x5f, 0x5, 0x1e, 0x10, 0x2, 0x5e, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x5e, 
    0x5f, 0x3, 0x2, 0x2, 0x2, 0x5f, 0xb, 0x3, 0x2, 0x2, 0x2, 0x60, 0x61, 
    0x5, 0xa, 0x6, 0x2, 0x61, 0x62, 0x7, 0xd, 0x2, 0x2, 0x62, 0x63, 0x5, 
    0x36, 0x1c, 0x2, 0x63, 0x64, 0x7, 0xc, 0x2, 0x2, 0x64, 0xd, 0x3, 0x2, 
    0x2, 0x2, 0x65, 0x66, 0x5, 0xa, 0x6, 0x2, 0x66, 0x67, 0x7, 0xc, 0x2, 
    0x2, 0x67, 0xf, 0x3, 0x2, 0x2, 0x2, 0x68, 0x6b, 0x5, 0xc, 0x7, 0x2, 
    0x69, 0x6b, 0x5, 0xe, 0x8, 0x2, 0x6a, 0x68, 0x3, 0x2, 0x2, 0x2, 0x6a, 
    0x69, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x11, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x6e, 
    0x7, 0x5, 0x2, 0x2, 0x6d, 0x6f, 0x7, 0x1c, 0x2, 0x2, 0x6e, 0x6d, 0x3, 
    0x2, 0x2, 0x2, 0x6e, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x71, 0x3, 0x2, 
    0x2, 0x2, 0x70, 0x72, 0x5, 0x1e, 0x10, 0x2, 0x71, 0x70, 0x3, 0x2, 0x2, 
    0x2, 0x71, 0x72, 0x3, 0x2, 0x2, 0x2, 0x72, 0x73, 0x3, 0x2, 0x2, 0x2, 
    0x73, 0x77, 0x7, 0xa, 0x2, 0x2, 0x74, 0x76, 0x5, 0x10, 0x9, 0x2, 0x75, 
    0x74, 0x3, 0x2, 0x2, 0x2, 0x76, 0x79, 0x3, 0x2, 0x2, 0x2, 0x77, 0x75, 
    0x3, 0x2, 0x2, 0x2, 0x77, 0x78, 0x3, 0x2, 0x2, 0x2, 0x78, 0x7a, 0x3, 
    0x2, 0x2, 0x2, 0x79, 0x77, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x7b, 0x7, 0xb, 
    0x2, 0x2, 0x7b, 0x13, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x7d, 0x7, 0x6, 0x2, 
    0x2, 0x7d, 0x82, 0x7, 0x1c, 0x2, 0x2, 0x7e, 0x7f, 0x5, 0x8, 0x5, 0x2, 
    0x7f, 0x80, 0x7, 0x1c, 0x2, 0x2, 0x80, 0x82, 0x3, 0x2, 0x2, 0x2, 0x81, 
    0x7c, 0x3, 0x2, 0x2, 0x2, 0x81, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x82, 0x15, 
    0x3, 0x2, 0x2, 0x2, 0x83, 0x84, 0x5, 0x8, 0x5, 0x2, 0x84, 0x17, 0x3, 
    0x2, 0x2, 0x2, 0x85, 0x8a, 0x5, 0x16, 0xc, 0x2, 0x86, 0x87, 0x7, 0x15, 
    0x2, 0x2, 0x87, 0x89, 0x5, 0x16, 0xc, 0x2, 0x88, 0x86, 0x3, 0x2, 0x2, 
    0x2, 0x89, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x88, 0x3, 0x2, 0x2, 0x2, 
    0x8a, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x8c, 
    0x8a, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x85, 
    0x3, 0x2, 0x2, 0x2, 0x8e, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x19, 0x3, 
    0x2, 0x2, 0x2, 0x90, 0x91, 0x7, 0xf, 0x2, 0x2, 0x91, 0x92, 0x5, 0x18, 
    0xd, 0x2, 0x92, 0x93, 0x7, 0x10, 0x2, 0x2, 0x93, 0x1b, 0x3, 0x2, 0x2, 
    0x2, 0x94, 0x99, 0x5, 0x14, 0xb, 0x2, 0x95, 0x96, 0x7, 0x15, 0x2, 0x2, 
    0x96, 0x98, 0x5, 0x14, 0xb, 0x2, 0x97, 0x95, 0x3, 0x2, 0x2, 0x2, 0x98, 
    0x9b, 0x3, 0x2, 0x2, 0x2, 0x99, 0x97, 0x3, 0x2, 0x2, 0x2, 0x99, 0x9a, 
    0x3, 0x2, 0x2, 0x2, 0x9a, 0x9e, 0x3, 0x2, 0x2, 0x2, 0x9b, 0x99, 0x3, 
    0x2, 0x2, 0x2, 0x9c, 0x9e, 0x3, 0x2, 0x2, 0x2, 0x9d, 0x94, 0x3, 0x2, 
    0x2, 0x2, 0x9d, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x1d, 0x3, 0x2, 0x2, 
    0x2, 0x9f, 0xa0, 0x7, 0xf, 0x2, 0x2, 0xa0, 0xa1, 0x5, 0x1c, 0xf, 0x2, 
    0xa1, 0xa2, 0x7, 0x10, 0x2, 0x2, 0xa2, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xa3, 
    0xa4, 0x5, 0x26, 0x14, 0x2, 0xa4, 0xa5, 0x7, 0xe, 0x2, 0x2, 0xa5, 0xa6, 
    0x5, 0x8, 0x5, 0x2, 0xa6, 0x21, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xa9, 0x5, 
    0x8, 0x5, 0x2, 0xa8, 0xaa, 0x7, 0x1c, 0x2, 0x2, 0xa9, 0xa8, 0x3, 0x2, 
    0x2, 0x2, 0xa9, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xaa, 0x23, 0x3, 0x2, 0x2, 
    0x2, 0xab, 0xad, 0x5, 0x22, 0x12, 0x2, 0xac, 0xab, 0x3, 0x2, 0x2, 0x2, 
    0xac, 0xad, 0x3, 0x2, 0x2, 0x2, 0xad, 0xb2, 0x3, 0x2, 0x2, 0x2, 0xae, 
    0xaf, 0x7, 0x15, 0x2, 0x2, 0xaf, 0xb1, 0x5, 0x22, 0x12, 0x2, 0xb0, 0xae, 
    0x3, 0x2, 0x2, 0x2, 0xb1, 0xb4, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb0, 0x3, 
    0x2, 0x2, 0x2, 0xb2, 0xb3, 0x3, 0x2, 0x2, 0x2, 0xb3, 0x25, 0x3, 0x2, 
    0x2, 0x2, 0xb4, 0xb2, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xb6, 0x7, 0x11, 0x2, 
    0x2, 0xb6, 0xb7, 0x5, 0x24, 0x13, 0x2, 0xb7, 0xb8, 0x7, 0x12, 0x2, 0x2, 
    0xb8, 0x27, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xba, 0x9, 0x3, 0x2, 0x2, 0xba, 
    0x29, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xbf, 0x5, 0x28, 0x15, 0x2, 0xbc, 0xbf, 
    0x5, 0x2c, 0x17, 0x2, 0xbd, 0xbf, 0x7, 0x1c, 0x2, 0x2, 0xbe, 0xbb, 0x3, 
    0x2, 0x2, 0x2, 0xbe, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xbd, 0x3, 0x2, 
    0x2, 0x2, 0xbf, 0x2b, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xc2, 0x7, 0x1c, 0x2, 
    0x2, 0xc1, 0xc3, 0x5, 0x2e, 0x18, 0x2, 0xc2, 0xc1, 0x3, 0x2, 0x2, 0x2, 
    0xc3, 0xc4, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xc4, 
    0xc5, 0x3, 0x2, 0x2, 0x2, 0xc5, 0x2d, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc7, 
    0x7, 0x11, 0x2, 0x2, 0xc7, 0xc8, 0x5, 0x30, 0x19, 0x2, 0xc8, 0xc9, 0x7, 
    0x12, 0x2, 0x2, 0xc9, 0x2f, 0x3, 0x2, 0x2, 0x2, 0xca, 0xcc, 0x5, 0x36, 
    0x1c, 0x2, 0xcb, 0xca, 0x3, 0x2, 0x2, 0x2, 0xcb, 0xcc, 0x3, 0x2, 0x2, 
    0x2, 0xcc, 0xd1, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xce, 0x7, 0x15, 0x2, 0x2, 
    0xce, 0xd0, 0x5, 0x36, 0x1c, 0x2, 0xcf, 0xcd, 0x3, 0x2, 0x2, 0x2, 0xd0, 
    0xd3, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xcf, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xd2, 
    0x3, 0x2, 0x2, 0x2, 0xd2, 0x31, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xd1, 0x3, 
    0x2, 0x2, 0x2, 0xd4, 0xda, 0x5, 0x2a, 0x16, 0x2, 0xd5, 0xd6, 0x7, 0x11, 
    0x2, 0x2, 0xd6, 0xd7, 0x5, 0x36, 0x1c, 0x2, 0xd7, 0xd8, 0x7, 0x12, 0x2, 
    0x2, 0xd8, 0xda, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xd4, 0x3, 0x2, 0x2, 0x2, 
    0xd9, 0xd5, 0x3, 0x2, 0x2, 0x2, 0xda, 0x33, 0x3, 0x2, 0x2, 0x2, 0xdb, 
    0xe0, 0x5, 0x32, 0x1a, 0x2, 0xdc, 0xdd, 0x7, 0x16, 0x2, 0x2, 0xdd, 0xdf, 
    0x5, 0x2a, 0x16, 0x2, 0xde, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xe2, 0x3, 
    0x2, 0x2, 0x2, 0xe0, 0xde, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xe1, 0x3, 0x2, 
    0x2, 0x2, 0xe1, 0x35, 0x3, 0x2, 0x2, 0x2, 0xe2, 0xe0, 0x3, 0x2, 0x2, 
    0x2, 0xe3, 0xe6, 0x5, 0x40, 0x21, 0x2, 0xe4, 0xe6, 0x5, 0x38, 0x1d, 
    0x2, 0xe5, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xe4, 0x3, 0x2, 0x2, 0x2, 
    0xe6, 0x37, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xe8, 0x5, 0x3a, 0x1e, 0x2, 0xe8, 
    0x39, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xef, 0x5, 0x3c, 0x1f, 0x2, 0xea, 0xeb, 
    0x5, 0x3c, 0x1f, 0x2, 0xeb, 0xec, 0x7, 0x1b, 0x2, 0x2, 0xec, 0xed, 0x5, 
    0x3c, 0x1f, 0x2, 0xed, 0xef, 0x3, 0x2, 0x2, 0x2, 0xee, 0xe9, 0x3, 0x2, 
    0x2, 0x2, 0xee, 0xea, 0x3, 0x2, 0x2, 0x2, 0xef, 0x3b, 0x3, 0x2, 0x2, 
    0x2, 0xf0, 0xf5, 0x5, 0x3e, 0x20, 0x2, 0xf1, 0xf2, 0x9, 0x4, 0x2, 0x2, 
    0xf2, 0xf4, 0x5, 0x3e, 0x20, 0x2, 0xf3, 0xf1, 0x3, 0x2, 0x2, 0x2, 0xf4, 
    0xf7, 0x3, 0x2, 0x2, 0x2, 0xf5, 0xf3, 0x3, 0x2, 0x2, 0x2, 0xf5, 0xf6, 
    0x3, 0x2, 0x2, 0x2, 0xf6, 0x3d, 0x3, 0x2, 0x2, 0x2, 0xf7, 0xf5, 0x3, 
    0x2, 0x2, 0x2, 0xf8, 0xfd, 0x5, 0x34, 0x1b, 0x2, 0xf9, 0xfa, 0x9, 0x5, 
    0x2, 0x2, 0xfa, 0xfc, 0x5, 0x34, 0x1b, 0x2, 0xfb, 0xf9, 0x3, 0x2, 0x2, 
    0x2, 0xfc, 0xff, 0x3, 0x2, 0x2, 0x2, 0xfd, 0xfb, 0x3, 0x2, 0x2, 0x2, 
    0xfd, 0xfe, 0x3, 0x2, 0x2, 0x2, 0xfe, 0x3f, 0x3, 0x2, 0x2, 0x2, 0xff, 
    0xfd, 0x3, 0x2, 0x2, 0x2, 0x100, 0x101, 0x7, 0x7, 0x2, 0x2, 0x101, 0x102, 
    0x7, 0x11, 0x2, 0x2, 0x102, 0x103, 0x5, 0x36, 0x1c, 0x2, 0x103, 0x104, 
    0x7, 0x12, 0x2, 0x2, 0x104, 0x108, 0x5, 0x36, 0x1c, 0x2, 0x105, 0x107, 
    0x5, 0x42, 0x22, 0x2, 0x106, 0x105, 0x3, 0x2, 0x2, 0x2, 0x107, 0x10a, 
    0x3, 0x2, 0x2, 0x2, 0x108, 0x106, 0x3, 0x2, 0x2, 0x2, 0x108, 0x109, 
    0x3, 0x2, 0x2, 0x2, 0x109, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x108, 
    0x3, 0x2, 0x2, 0x2, 0x10b, 0x10c, 0x5, 0x44, 0x23, 0x2, 0x10c, 0x41, 
    0x3, 0x2, 0x2, 0x2, 0x10d, 0x10e, 0x7, 0x8, 0x2, 0x2, 0x10e, 0x10f, 
    0x7, 0x11, 0x2, 0x2, 0x10f, 0x110, 0x5, 0x36, 0x1c, 0x2, 0x110, 0x111, 
    0x7, 0x12, 0x2, 0x2, 0x111, 0x112, 0x5, 0x36, 0x1c, 0x2, 0x112, 0x43, 
    0x3, 0x2, 0x2, 0x2, 0x113, 0x114, 0x7, 0x9, 0x2, 0x2, 0x114, 0x115, 
    0x5, 0x36, 0x1c, 0x2, 0x115, 0x45, 0x3, 0x2, 0x2, 0x2, 0x1d, 0x4a, 0x57, 
    0x5b, 0x5e, 0x6a, 0x6e, 0x71, 0x77, 0x81, 0x8a, 0x8e, 0x99, 0x9d, 0xa9, 
    0xac, 0xb2, 0xbe, 0xc4, 0xcb, 0xd1, 0xd9, 0xe0, 0xe5, 0xee, 0xf5, 0xfd, 
    0x108, 
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
