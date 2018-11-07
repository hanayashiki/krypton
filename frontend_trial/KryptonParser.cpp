
// Generated from Krypton.g4 by ANTLR 4.7.1


#include "KryptonVisitor.h"

#include "KryptonParser.h"


using namespace antlrcpp;
using namespace antlr4;

KryptonParser::KryptonParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

KryptonParser::~KryptonParser() {
  delete _interpreter;
}

std::string KryptonParser::getGrammarFileName() const {
  return "Krypton.g4";
}

const std::vector<std::string>& KryptonParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& KryptonParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgramContext ------------------------------------------------------------------

KryptonParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KryptonParser::ProgramContext::EOF() {
  return getToken(KryptonParser::EOF, 0);
}

std::vector<KryptonParser::DeclarationContext *> KryptonParser::ProgramContext::declaration() {
  return getRuleContexts<KryptonParser::DeclarationContext>();
}

KryptonParser::DeclarationContext* KryptonParser::ProgramContext::declaration(size_t i) {
  return getRuleContext<KryptonParser::DeclarationContext>(i);
}


size_t KryptonParser::ProgramContext::getRuleIndex() const {
  return KryptonParser::RuleProgram;
}

antlrcpp::Any KryptonParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

KryptonParser::ProgramContext* KryptonParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, KryptonParser::RuleProgram);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(73);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << KryptonParser::C8)
      | (1ULL << KryptonParser::I32)
      | (1ULL << KryptonParser::STRUCT)
      | (1ULL << KryptonParser::LEFT_PARENTHESIS)
      | (1ULL << KryptonParser::IDENTIFIER))) != 0)) {
      setState(70);
      declaration();
      setState(75);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(76);
    match(KryptonParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Basic_typesContext ------------------------------------------------------------------

KryptonParser::Basic_typesContext::Basic_typesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KryptonParser::Basic_typesContext::C8() {
  return getToken(KryptonParser::C8, 0);
}

tree::TerminalNode* KryptonParser::Basic_typesContext::I32() {
  return getToken(KryptonParser::I32, 0);
}


size_t KryptonParser::Basic_typesContext::getRuleIndex() const {
  return KryptonParser::RuleBasic_types;
}

antlrcpp::Any KryptonParser::Basic_typesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonVisitor*>(visitor))
    return parserVisitor->visitBasic_types(this);
  else
    return visitor->visitChildren(this);
}

KryptonParser::Basic_typesContext* KryptonParser::basic_types() {
  Basic_typesContext *_localctx = _tracker.createInstance<Basic_typesContext>(_ctx, getState());
  enterRule(_localctx, 2, KryptonParser::RuleBasic_types);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(78);
    _la = _input->LA(1);
    if (!(_la == KryptonParser::C8

    || _la == KryptonParser::I32)) {
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

KryptonParser::Type_identifierContext::Type_identifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KryptonParser::Basic_typesContext* KryptonParser::Type_identifierContext::basic_types() {
  return getRuleContext<KryptonParser::Basic_typesContext>(0);
}

tree::TerminalNode* KryptonParser::Type_identifierContext::IDENTIFIER() {
  return getToken(KryptonParser::IDENTIFIER, 0);
}


size_t KryptonParser::Type_identifierContext::getRuleIndex() const {
  return KryptonParser::RuleType_identifier;
}

antlrcpp::Any KryptonParser::Type_identifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonVisitor*>(visitor))
    return parserVisitor->visitType_identifier(this);
  else
    return visitor->visitChildren(this);
}

KryptonParser::Type_identifierContext* KryptonParser::type_identifier() {
  Type_identifierContext *_localctx = _tracker.createInstance<Type_identifierContext>(_ctx, getState());
  enterRule(_localctx, 4, KryptonParser::RuleType_identifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(82);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KryptonParser::C8:
      case KryptonParser::I32: {
        enterOuterAlt(_localctx, 1);
        setState(80);
        basic_types();
        break;
      }

      case KryptonParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 2);
        setState(81);
        match(KryptonParser::IDENTIFIER);
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

KryptonParser::Generic_specifierContext::Generic_specifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KryptonParser::Generic_specifierContext::IDENTIFIER() {
  return getToken(KryptonParser::IDENTIFIER, 0);
}

KryptonParser::Struct_generic_argumentsContext* KryptonParser::Generic_specifierContext::struct_generic_arguments() {
  return getRuleContext<KryptonParser::Struct_generic_argumentsContext>(0);
}


size_t KryptonParser::Generic_specifierContext::getRuleIndex() const {
  return KryptonParser::RuleGeneric_specifier;
}

antlrcpp::Any KryptonParser::Generic_specifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonVisitor*>(visitor))
    return parserVisitor->visitGeneric_specifier(this);
  else
    return visitor->visitChildren(this);
}

KryptonParser::Generic_specifierContext* KryptonParser::generic_specifier() {
  Generic_specifierContext *_localctx = _tracker.createInstance<Generic_specifierContext>(_ctx, getState());
  enterRule(_localctx, 6, KryptonParser::RuleGeneric_specifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(84);
    match(KryptonParser::IDENTIFIER);
    setState(85);
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

KryptonParser::Type_specifierContext::Type_specifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KryptonParser::Type_identifierContext* KryptonParser::Type_specifierContext::type_identifier() {
  return getRuleContext<KryptonParser::Type_identifierContext>(0);
}

KryptonParser::Struct_specifierContext* KryptonParser::Type_specifierContext::struct_specifier() {
  return getRuleContext<KryptonParser::Struct_specifierContext>(0);
}

KryptonParser::Generic_specifierContext* KryptonParser::Type_specifierContext::generic_specifier() {
  return getRuleContext<KryptonParser::Generic_specifierContext>(0);
}

KryptonParser::Function_specifierContext* KryptonParser::Type_specifierContext::function_specifier() {
  return getRuleContext<KryptonParser::Function_specifierContext>(0);
}

tree::TerminalNode* KryptonParser::Type_specifierContext::LEFT_PARENTHESIS() {
  return getToken(KryptonParser::LEFT_PARENTHESIS, 0);
}

tree::TerminalNode* KryptonParser::Type_specifierContext::RIGHT_PARENTHESIS() {
  return getToken(KryptonParser::RIGHT_PARENTHESIS, 0);
}


size_t KryptonParser::Type_specifierContext::getRuleIndex() const {
  return KryptonParser::RuleType_specifier;
}

antlrcpp::Any KryptonParser::Type_specifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonVisitor*>(visitor))
    return parserVisitor->visitType_specifier(this);
  else
    return visitor->visitChildren(this);
}

KryptonParser::Type_specifierContext* KryptonParser::type_specifier() {
  Type_specifierContext *_localctx = _tracker.createInstance<Type_specifierContext>(_ctx, getState());
  enterRule(_localctx, 8, KryptonParser::RuleType_specifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(95);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(87);
      type_identifier();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(88);
      struct_specifier();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(89);
      generic_specifier();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(90);
      function_specifier();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(91);
      match(KryptonParser::LEFT_PARENTHESIS);
      setState(92);
      function_specifier();
      setState(93);
      match(KryptonParser::RIGHT_PARENTHESIS);
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

KryptonParser::Basic_declarationContext::Basic_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KryptonParser::Type_specifierContext* KryptonParser::Basic_declarationContext::type_specifier() {
  return getRuleContext<KryptonParser::Type_specifierContext>(0);
}

tree::TerminalNode* KryptonParser::Basic_declarationContext::IDENTIFIER() {
  return getToken(KryptonParser::IDENTIFIER, 0);
}

KryptonParser::Struct_generic_parametersContext* KryptonParser::Basic_declarationContext::struct_generic_parameters() {
  return getRuleContext<KryptonParser::Struct_generic_parametersContext>(0);
}


size_t KryptonParser::Basic_declarationContext::getRuleIndex() const {
  return KryptonParser::RuleBasic_declaration;
}

antlrcpp::Any KryptonParser::Basic_declarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonVisitor*>(visitor))
    return parserVisitor->visitBasic_declaration(this);
  else
    return visitor->visitChildren(this);
}

KryptonParser::Basic_declarationContext* KryptonParser::basic_declaration() {
  Basic_declarationContext *_localctx = _tracker.createInstance<Basic_declarationContext>(_ctx, getState());
  enterRule(_localctx, 10, KryptonParser::RuleBasic_declaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(97);
    type_specifier();

    setState(99);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == KryptonParser::IDENTIFIER) {
      setState(98);
      match(KryptonParser::IDENTIFIER);
    }

    setState(102);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == KryptonParser::LESS_THAN) {
      setState(101);
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

KryptonParser::Inited_declarationContext::Inited_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KryptonParser::Basic_declarationContext* KryptonParser::Inited_declarationContext::basic_declaration() {
  return getRuleContext<KryptonParser::Basic_declarationContext>(0);
}

tree::TerminalNode* KryptonParser::Inited_declarationContext::COLON() {
  return getToken(KryptonParser::COLON, 0);
}

KryptonParser::ExprContext* KryptonParser::Inited_declarationContext::expr() {
  return getRuleContext<KryptonParser::ExprContext>(0);
}

tree::TerminalNode* KryptonParser::Inited_declarationContext::SEMICOLON() {
  return getToken(KryptonParser::SEMICOLON, 0);
}


size_t KryptonParser::Inited_declarationContext::getRuleIndex() const {
  return KryptonParser::RuleInited_declaration;
}

antlrcpp::Any KryptonParser::Inited_declarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonVisitor*>(visitor))
    return parserVisitor->visitInited_declaration(this);
  else
    return visitor->visitChildren(this);
}

KryptonParser::Inited_declarationContext* KryptonParser::inited_declaration() {
  Inited_declarationContext *_localctx = _tracker.createInstance<Inited_declarationContext>(_ctx, getState());
  enterRule(_localctx, 12, KryptonParser::RuleInited_declaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(104);
    basic_declaration();
    setState(105);
    match(KryptonParser::COLON);
    setState(106);
    expr();
    setState(107);
    match(KryptonParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Uninited_declarationContext ------------------------------------------------------------------

KryptonParser::Uninited_declarationContext::Uninited_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KryptonParser::Basic_declarationContext* KryptonParser::Uninited_declarationContext::basic_declaration() {
  return getRuleContext<KryptonParser::Basic_declarationContext>(0);
}

tree::TerminalNode* KryptonParser::Uninited_declarationContext::SEMICOLON() {
  return getToken(KryptonParser::SEMICOLON, 0);
}


size_t KryptonParser::Uninited_declarationContext::getRuleIndex() const {
  return KryptonParser::RuleUninited_declaration;
}

antlrcpp::Any KryptonParser::Uninited_declarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonVisitor*>(visitor))
    return parserVisitor->visitUninited_declaration(this);
  else
    return visitor->visitChildren(this);
}

KryptonParser::Uninited_declarationContext* KryptonParser::uninited_declaration() {
  Uninited_declarationContext *_localctx = _tracker.createInstance<Uninited_declarationContext>(_ctx, getState());
  enterRule(_localctx, 14, KryptonParser::RuleUninited_declaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(109);
    basic_declaration();
    setState(110);
    match(KryptonParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationContext ------------------------------------------------------------------

KryptonParser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KryptonParser::Inited_declarationContext* KryptonParser::DeclarationContext::inited_declaration() {
  return getRuleContext<KryptonParser::Inited_declarationContext>(0);
}

KryptonParser::Uninited_declarationContext* KryptonParser::DeclarationContext::uninited_declaration() {
  return getRuleContext<KryptonParser::Uninited_declarationContext>(0);
}


size_t KryptonParser::DeclarationContext::getRuleIndex() const {
  return KryptonParser::RuleDeclaration;
}

antlrcpp::Any KryptonParser::DeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonVisitor*>(visitor))
    return parserVisitor->visitDeclaration(this);
  else
    return visitor->visitChildren(this);
}

KryptonParser::DeclarationContext* KryptonParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 16, KryptonParser::RuleDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(114);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(112);
      inited_declaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(113);
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

KryptonParser::Struct_specifierContext::Struct_specifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KryptonParser::Struct_specifierContext::STRUCT() {
  return getToken(KryptonParser::STRUCT, 0);
}

tree::TerminalNode* KryptonParser::Struct_specifierContext::LEFT_BRACE() {
  return getToken(KryptonParser::LEFT_BRACE, 0);
}

tree::TerminalNode* KryptonParser::Struct_specifierContext::RIGHT_BRACE() {
  return getToken(KryptonParser::RIGHT_BRACE, 0);
}

KryptonParser::Struct_generic_parametersContext* KryptonParser::Struct_specifierContext::struct_generic_parameters() {
  return getRuleContext<KryptonParser::Struct_generic_parametersContext>(0);
}

std::vector<KryptonParser::DeclarationContext *> KryptonParser::Struct_specifierContext::declaration() {
  return getRuleContexts<KryptonParser::DeclarationContext>();
}

KryptonParser::DeclarationContext* KryptonParser::Struct_specifierContext::declaration(size_t i) {
  return getRuleContext<KryptonParser::DeclarationContext>(i);
}

tree::TerminalNode* KryptonParser::Struct_specifierContext::IDENTIFIER() {
  return getToken(KryptonParser::IDENTIFIER, 0);
}


size_t KryptonParser::Struct_specifierContext::getRuleIndex() const {
  return KryptonParser::RuleStruct_specifier;
}

antlrcpp::Any KryptonParser::Struct_specifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonVisitor*>(visitor))
    return parserVisitor->visitStruct_specifier(this);
  else
    return visitor->visitChildren(this);
}

KryptonParser::Struct_specifierContext* KryptonParser::struct_specifier() {
  Struct_specifierContext *_localctx = _tracker.createInstance<Struct_specifierContext>(_ctx, getState());
  enterRule(_localctx, 18, KryptonParser::RuleStruct_specifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(116);
    match(KryptonParser::STRUCT);

    setState(118);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == KryptonParser::IDENTIFIER) {
      setState(117);
      match(KryptonParser::IDENTIFIER);
    }
    setState(121);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == KryptonParser::LESS_THAN) {
      setState(120);
      struct_generic_parameters();
    }
    setState(123);
    match(KryptonParser::LEFT_BRACE);
    setState(127);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << KryptonParser::C8)
      | (1ULL << KryptonParser::I32)
      | (1ULL << KryptonParser::STRUCT)
      | (1ULL << KryptonParser::LEFT_PARENTHESIS)
      | (1ULL << KryptonParser::IDENTIFIER))) != 0)) {
      setState(124);
      declaration();
      setState(129);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(130);
    match(KryptonParser::RIGHT_BRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Struct_generic_parameterContext ------------------------------------------------------------------

KryptonParser::Struct_generic_parameterContext::Struct_generic_parameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KryptonParser::Struct_generic_parameterContext::TYPE() {
  return getToken(KryptonParser::TYPE, 0);
}

tree::TerminalNode* KryptonParser::Struct_generic_parameterContext::IDENTIFIER() {
  return getToken(KryptonParser::IDENTIFIER, 0);
}

KryptonParser::Type_specifierContext* KryptonParser::Struct_generic_parameterContext::type_specifier() {
  return getRuleContext<KryptonParser::Type_specifierContext>(0);
}


size_t KryptonParser::Struct_generic_parameterContext::getRuleIndex() const {
  return KryptonParser::RuleStruct_generic_parameter;
}

antlrcpp::Any KryptonParser::Struct_generic_parameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonVisitor*>(visitor))
    return parserVisitor->visitStruct_generic_parameter(this);
  else
    return visitor->visitChildren(this);
}

KryptonParser::Struct_generic_parameterContext* KryptonParser::struct_generic_parameter() {
  Struct_generic_parameterContext *_localctx = _tracker.createInstance<Struct_generic_parameterContext>(_ctx, getState());
  enterRule(_localctx, 20, KryptonParser::RuleStruct_generic_parameter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(137);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KryptonParser::TYPE: {
        enterOuterAlt(_localctx, 1);
        setState(132);
        match(KryptonParser::TYPE);
        setState(133);
        match(KryptonParser::IDENTIFIER);
        break;
      }

      case KryptonParser::C8:
      case KryptonParser::I32:
      case KryptonParser::STRUCT:
      case KryptonParser::LEFT_PARENTHESIS:
      case KryptonParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 2);
        setState(134);
        type_specifier();
        setState(135);
        match(KryptonParser::IDENTIFIER);
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

KryptonParser::Struct_generic_argumentContext::Struct_generic_argumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KryptonParser::Type_specifierContext* KryptonParser::Struct_generic_argumentContext::type_specifier() {
  return getRuleContext<KryptonParser::Type_specifierContext>(0);
}


size_t KryptonParser::Struct_generic_argumentContext::getRuleIndex() const {
  return KryptonParser::RuleStruct_generic_argument;
}

antlrcpp::Any KryptonParser::Struct_generic_argumentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonVisitor*>(visitor))
    return parserVisitor->visitStruct_generic_argument(this);
  else
    return visitor->visitChildren(this);
}

KryptonParser::Struct_generic_argumentContext* KryptonParser::struct_generic_argument() {
  Struct_generic_argumentContext *_localctx = _tracker.createInstance<Struct_generic_argumentContext>(_ctx, getState());
  enterRule(_localctx, 22, KryptonParser::RuleStruct_generic_argument);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(139);
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

KryptonParser::Struct_generic_argument_listContext::Struct_generic_argument_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<KryptonParser::Struct_generic_argumentContext *> KryptonParser::Struct_generic_argument_listContext::struct_generic_argument() {
  return getRuleContexts<KryptonParser::Struct_generic_argumentContext>();
}

KryptonParser::Struct_generic_argumentContext* KryptonParser::Struct_generic_argument_listContext::struct_generic_argument(size_t i) {
  return getRuleContext<KryptonParser::Struct_generic_argumentContext>(i);
}

std::vector<tree::TerminalNode *> KryptonParser::Struct_generic_argument_listContext::COMMA() {
  return getTokens(KryptonParser::COMMA);
}

tree::TerminalNode* KryptonParser::Struct_generic_argument_listContext::COMMA(size_t i) {
  return getToken(KryptonParser::COMMA, i);
}


size_t KryptonParser::Struct_generic_argument_listContext::getRuleIndex() const {
  return KryptonParser::RuleStruct_generic_argument_list;
}

antlrcpp::Any KryptonParser::Struct_generic_argument_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonVisitor*>(visitor))
    return parserVisitor->visitStruct_generic_argument_list(this);
  else
    return visitor->visitChildren(this);
}

KryptonParser::Struct_generic_argument_listContext* KryptonParser::struct_generic_argument_list() {
  Struct_generic_argument_listContext *_localctx = _tracker.createInstance<Struct_generic_argument_listContext>(_ctx, getState());
  enterRule(_localctx, 24, KryptonParser::RuleStruct_generic_argument_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(150);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KryptonParser::C8:
      case KryptonParser::I32:
      case KryptonParser::STRUCT:
      case KryptonParser::LEFT_PARENTHESIS:
      case KryptonParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(141);
        struct_generic_argument();
        setState(146);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == KryptonParser::COMMA) {
          setState(142);
          match(KryptonParser::COMMA);
          setState(143);
          struct_generic_argument();
          setState(148);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case KryptonParser::GREATER_THAN: {
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

KryptonParser::Struct_generic_argumentsContext::Struct_generic_argumentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KryptonParser::Struct_generic_argumentsContext::LESS_THAN() {
  return getToken(KryptonParser::LESS_THAN, 0);
}

KryptonParser::Struct_generic_argument_listContext* KryptonParser::Struct_generic_argumentsContext::struct_generic_argument_list() {
  return getRuleContext<KryptonParser::Struct_generic_argument_listContext>(0);
}

tree::TerminalNode* KryptonParser::Struct_generic_argumentsContext::GREATER_THAN() {
  return getToken(KryptonParser::GREATER_THAN, 0);
}


size_t KryptonParser::Struct_generic_argumentsContext::getRuleIndex() const {
  return KryptonParser::RuleStruct_generic_arguments;
}

antlrcpp::Any KryptonParser::Struct_generic_argumentsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonVisitor*>(visitor))
    return parserVisitor->visitStruct_generic_arguments(this);
  else
    return visitor->visitChildren(this);
}

KryptonParser::Struct_generic_argumentsContext* KryptonParser::struct_generic_arguments() {
  Struct_generic_argumentsContext *_localctx = _tracker.createInstance<Struct_generic_argumentsContext>(_ctx, getState());
  enterRule(_localctx, 26, KryptonParser::RuleStruct_generic_arguments);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(152);
    match(KryptonParser::LESS_THAN);
    setState(153);
    struct_generic_argument_list();
    setState(154);
    match(KryptonParser::GREATER_THAN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Struct_generic_parameter_listContext ------------------------------------------------------------------

KryptonParser::Struct_generic_parameter_listContext::Struct_generic_parameter_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<KryptonParser::Struct_generic_parameterContext *> KryptonParser::Struct_generic_parameter_listContext::struct_generic_parameter() {
  return getRuleContexts<KryptonParser::Struct_generic_parameterContext>();
}

KryptonParser::Struct_generic_parameterContext* KryptonParser::Struct_generic_parameter_listContext::struct_generic_parameter(size_t i) {
  return getRuleContext<KryptonParser::Struct_generic_parameterContext>(i);
}

std::vector<tree::TerminalNode *> KryptonParser::Struct_generic_parameter_listContext::COMMA() {
  return getTokens(KryptonParser::COMMA);
}

tree::TerminalNode* KryptonParser::Struct_generic_parameter_listContext::COMMA(size_t i) {
  return getToken(KryptonParser::COMMA, i);
}


size_t KryptonParser::Struct_generic_parameter_listContext::getRuleIndex() const {
  return KryptonParser::RuleStruct_generic_parameter_list;
}

antlrcpp::Any KryptonParser::Struct_generic_parameter_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonVisitor*>(visitor))
    return parserVisitor->visitStruct_generic_parameter_list(this);
  else
    return visitor->visitChildren(this);
}

KryptonParser::Struct_generic_parameter_listContext* KryptonParser::struct_generic_parameter_list() {
  Struct_generic_parameter_listContext *_localctx = _tracker.createInstance<Struct_generic_parameter_listContext>(_ctx, getState());
  enterRule(_localctx, 28, KryptonParser::RuleStruct_generic_parameter_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(165);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KryptonParser::C8:
      case KryptonParser::I32:
      case KryptonParser::STRUCT:
      case KryptonParser::TYPE:
      case KryptonParser::LEFT_PARENTHESIS:
      case KryptonParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(156);
        struct_generic_parameter();
        setState(161);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == KryptonParser::COMMA) {
          setState(157);
          match(KryptonParser::COMMA);
          setState(158);
          struct_generic_parameter();
          setState(163);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case KryptonParser::GREATER_THAN: {
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

KryptonParser::Struct_generic_parametersContext::Struct_generic_parametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KryptonParser::Struct_generic_parametersContext::LESS_THAN() {
  return getToken(KryptonParser::LESS_THAN, 0);
}

KryptonParser::Struct_generic_parameter_listContext* KryptonParser::Struct_generic_parametersContext::struct_generic_parameter_list() {
  return getRuleContext<KryptonParser::Struct_generic_parameter_listContext>(0);
}

tree::TerminalNode* KryptonParser::Struct_generic_parametersContext::GREATER_THAN() {
  return getToken(KryptonParser::GREATER_THAN, 0);
}


size_t KryptonParser::Struct_generic_parametersContext::getRuleIndex() const {
  return KryptonParser::RuleStruct_generic_parameters;
}

antlrcpp::Any KryptonParser::Struct_generic_parametersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonVisitor*>(visitor))
    return parserVisitor->visitStruct_generic_parameters(this);
  else
    return visitor->visitChildren(this);
}

KryptonParser::Struct_generic_parametersContext* KryptonParser::struct_generic_parameters() {
  Struct_generic_parametersContext *_localctx = _tracker.createInstance<Struct_generic_parametersContext>(_ctx, getState());
  enterRule(_localctx, 30, KryptonParser::RuleStruct_generic_parameters);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(167);
    match(KryptonParser::LESS_THAN);
    setState(168);
    struct_generic_parameter_list();
    setState(169);
    match(KryptonParser::GREATER_THAN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_specifierContext ------------------------------------------------------------------

KryptonParser::Function_specifierContext::Function_specifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KryptonParser::Function_parametersContext* KryptonParser::Function_specifierContext::function_parameters() {
  return getRuleContext<KryptonParser::Function_parametersContext>(0);
}

tree::TerminalNode* KryptonParser::Function_specifierContext::RIGHT_ARROW() {
  return getToken(KryptonParser::RIGHT_ARROW, 0);
}

KryptonParser::Type_specifierContext* KryptonParser::Function_specifierContext::type_specifier() {
  return getRuleContext<KryptonParser::Type_specifierContext>(0);
}


size_t KryptonParser::Function_specifierContext::getRuleIndex() const {
  return KryptonParser::RuleFunction_specifier;
}

antlrcpp::Any KryptonParser::Function_specifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonVisitor*>(visitor))
    return parserVisitor->visitFunction_specifier(this);
  else
    return visitor->visitChildren(this);
}

KryptonParser::Function_specifierContext* KryptonParser::function_specifier() {
  Function_specifierContext *_localctx = _tracker.createInstance<Function_specifierContext>(_ctx, getState());
  enterRule(_localctx, 32, KryptonParser::RuleFunction_specifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(171);
    function_parameters();
    setState(172);
    match(KryptonParser::RIGHT_ARROW);
    setState(173);
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

KryptonParser::Function_parameterContext::Function_parameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KryptonParser::Type_specifierContext* KryptonParser::Function_parameterContext::type_specifier() {
  return getRuleContext<KryptonParser::Type_specifierContext>(0);
}

tree::TerminalNode* KryptonParser::Function_parameterContext::IDENTIFIER() {
  return getToken(KryptonParser::IDENTIFIER, 0);
}


size_t KryptonParser::Function_parameterContext::getRuleIndex() const {
  return KryptonParser::RuleFunction_parameter;
}

antlrcpp::Any KryptonParser::Function_parameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonVisitor*>(visitor))
    return parserVisitor->visitFunction_parameter(this);
  else
    return visitor->visitChildren(this);
}

KryptonParser::Function_parameterContext* KryptonParser::function_parameter() {
  Function_parameterContext *_localctx = _tracker.createInstance<Function_parameterContext>(_ctx, getState());
  enterRule(_localctx, 34, KryptonParser::RuleFunction_parameter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(175);
    type_specifier();

    setState(177);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == KryptonParser::IDENTIFIER) {
      setState(176);
      match(KryptonParser::IDENTIFIER);
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

KryptonParser::Function_parameter_listContext::Function_parameter_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> KryptonParser::Function_parameter_listContext::COMMA() {
  return getTokens(KryptonParser::COMMA);
}

tree::TerminalNode* KryptonParser::Function_parameter_listContext::COMMA(size_t i) {
  return getToken(KryptonParser::COMMA, i);
}

std::vector<KryptonParser::Function_parameterContext *> KryptonParser::Function_parameter_listContext::function_parameter() {
  return getRuleContexts<KryptonParser::Function_parameterContext>();
}

KryptonParser::Function_parameterContext* KryptonParser::Function_parameter_listContext::function_parameter(size_t i) {
  return getRuleContext<KryptonParser::Function_parameterContext>(i);
}


size_t KryptonParser::Function_parameter_listContext::getRuleIndex() const {
  return KryptonParser::RuleFunction_parameter_list;
}

antlrcpp::Any KryptonParser::Function_parameter_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonVisitor*>(visitor))
    return parserVisitor->visitFunction_parameter_list(this);
  else
    return visitor->visitChildren(this);
}

KryptonParser::Function_parameter_listContext* KryptonParser::function_parameter_list() {
  Function_parameter_listContext *_localctx = _tracker.createInstance<Function_parameter_listContext>(_ctx, getState());
  enterRule(_localctx, 36, KryptonParser::RuleFunction_parameter_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(180);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << KryptonParser::C8)
      | (1ULL << KryptonParser::I32)
      | (1ULL << KryptonParser::STRUCT)
      | (1ULL << KryptonParser::LEFT_PARENTHESIS)
      | (1ULL << KryptonParser::IDENTIFIER))) != 0)) {
      setState(179);
      function_parameter();
    }
    setState(186);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KryptonParser::COMMA) {
      setState(182);
      match(KryptonParser::COMMA);
      setState(183);
      function_parameter();
      setState(188);
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

KryptonParser::Function_parametersContext::Function_parametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KryptonParser::Function_parametersContext::LEFT_PARENTHESIS() {
  return getToken(KryptonParser::LEFT_PARENTHESIS, 0);
}

KryptonParser::Function_parameter_listContext* KryptonParser::Function_parametersContext::function_parameter_list() {
  return getRuleContext<KryptonParser::Function_parameter_listContext>(0);
}

tree::TerminalNode* KryptonParser::Function_parametersContext::RIGHT_PARENTHESIS() {
  return getToken(KryptonParser::RIGHT_PARENTHESIS, 0);
}


size_t KryptonParser::Function_parametersContext::getRuleIndex() const {
  return KryptonParser::RuleFunction_parameters;
}

antlrcpp::Any KryptonParser::Function_parametersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonVisitor*>(visitor))
    return parserVisitor->visitFunction_parameters(this);
  else
    return visitor->visitChildren(this);
}

KryptonParser::Function_parametersContext* KryptonParser::function_parameters() {
  Function_parametersContext *_localctx = _tracker.createInstance<Function_parametersContext>(_ctx, getState());
  enterRule(_localctx, 38, KryptonParser::RuleFunction_parameters);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(189);
    match(KryptonParser::LEFT_PARENTHESIS);
    setState(190);
    function_parameter_list();
    setState(191);
    match(KryptonParser::RIGHT_PARENTHESIS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Literal_valueContext ------------------------------------------------------------------

KryptonParser::Literal_valueContext::Literal_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KryptonParser::Literal_valueContext::INT() {
  return getToken(KryptonParser::INT, 0);
}

tree::TerminalNode* KryptonParser::Literal_valueContext::CHAR() {
  return getToken(KryptonParser::CHAR, 0);
}


size_t KryptonParser::Literal_valueContext::getRuleIndex() const {
  return KryptonParser::RuleLiteral_value;
}

antlrcpp::Any KryptonParser::Literal_valueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonVisitor*>(visitor))
    return parserVisitor->visitLiteral_value(this);
  else
    return visitor->visitChildren(this);
}

KryptonParser::Literal_valueContext* KryptonParser::literal_value() {
  Literal_valueContext *_localctx = _tracker.createInstance<Literal_valueContext>(_ctx, getState());
  enterRule(_localctx, 40, KryptonParser::RuleLiteral_value);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(193);
    _la = _input->LA(1);
    if (!(_la == KryptonParser::INT

    || _la == KryptonParser::CHAR)) {
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

KryptonParser::ValueContext::ValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KryptonParser::Literal_valueContext* KryptonParser::ValueContext::literal_value() {
  return getRuleContext<KryptonParser::Literal_valueContext>(0);
}

KryptonParser::Function_callContext* KryptonParser::ValueContext::function_call() {
  return getRuleContext<KryptonParser::Function_callContext>(0);
}

tree::TerminalNode* KryptonParser::ValueContext::IDENTIFIER() {
  return getToken(KryptonParser::IDENTIFIER, 0);
}


size_t KryptonParser::ValueContext::getRuleIndex() const {
  return KryptonParser::RuleValue;
}

antlrcpp::Any KryptonParser::ValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonVisitor*>(visitor))
    return parserVisitor->visitValue(this);
  else
    return visitor->visitChildren(this);
}

KryptonParser::ValueContext* KryptonParser::value() {
  ValueContext *_localctx = _tracker.createInstance<ValueContext>(_ctx, getState());
  enterRule(_localctx, 42, KryptonParser::RuleValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(198);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(195);
      literal_value();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(196);
      function_call();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(197);
      match(KryptonParser::IDENTIFIER);
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

KryptonParser::Function_callContext::Function_callContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KryptonParser::Function_callContext::IDENTIFIER() {
  return getToken(KryptonParser::IDENTIFIER, 0);
}

std::vector<KryptonParser::Call_operatorContext *> KryptonParser::Function_callContext::call_operator() {
  return getRuleContexts<KryptonParser::Call_operatorContext>();
}

KryptonParser::Call_operatorContext* KryptonParser::Function_callContext::call_operator(size_t i) {
  return getRuleContext<KryptonParser::Call_operatorContext>(i);
}


size_t KryptonParser::Function_callContext::getRuleIndex() const {
  return KryptonParser::RuleFunction_call;
}

antlrcpp::Any KryptonParser::Function_callContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonVisitor*>(visitor))
    return parserVisitor->visitFunction_call(this);
  else
    return visitor->visitChildren(this);
}

KryptonParser::Function_callContext* KryptonParser::function_call() {
  Function_callContext *_localctx = _tracker.createInstance<Function_callContext>(_ctx, getState());
  enterRule(_localctx, 44, KryptonParser::RuleFunction_call);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(200);
    match(KryptonParser::IDENTIFIER);
    setState(202); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(201);
      call_operator();
      setState(204); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == KryptonParser::LEFT_PARENTHESIS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Call_operatorContext ------------------------------------------------------------------

KryptonParser::Call_operatorContext::Call_operatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KryptonParser::Call_operatorContext::LEFT_PARENTHESIS() {
  return getToken(KryptonParser::LEFT_PARENTHESIS, 0);
}

KryptonParser::Call_parametersContext* KryptonParser::Call_operatorContext::call_parameters() {
  return getRuleContext<KryptonParser::Call_parametersContext>(0);
}

tree::TerminalNode* KryptonParser::Call_operatorContext::RIGHT_PARENTHESIS() {
  return getToken(KryptonParser::RIGHT_PARENTHESIS, 0);
}


size_t KryptonParser::Call_operatorContext::getRuleIndex() const {
  return KryptonParser::RuleCall_operator;
}

antlrcpp::Any KryptonParser::Call_operatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonVisitor*>(visitor))
    return parserVisitor->visitCall_operator(this);
  else
    return visitor->visitChildren(this);
}

KryptonParser::Call_operatorContext* KryptonParser::call_operator() {
  Call_operatorContext *_localctx = _tracker.createInstance<Call_operatorContext>(_ctx, getState());
  enterRule(_localctx, 46, KryptonParser::RuleCall_operator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(206);
    match(KryptonParser::LEFT_PARENTHESIS);
    setState(207);
    call_parameters();
    setState(208);
    match(KryptonParser::RIGHT_PARENTHESIS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Call_parametersContext ------------------------------------------------------------------

KryptonParser::Call_parametersContext::Call_parametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> KryptonParser::Call_parametersContext::COMMA() {
  return getTokens(KryptonParser::COMMA);
}

tree::TerminalNode* KryptonParser::Call_parametersContext::COMMA(size_t i) {
  return getToken(KryptonParser::COMMA, i);
}

std::vector<KryptonParser::ExprContext *> KryptonParser::Call_parametersContext::expr() {
  return getRuleContexts<KryptonParser::ExprContext>();
}

KryptonParser::ExprContext* KryptonParser::Call_parametersContext::expr(size_t i) {
  return getRuleContext<KryptonParser::ExprContext>(i);
}


size_t KryptonParser::Call_parametersContext::getRuleIndex() const {
  return KryptonParser::RuleCall_parameters;
}

antlrcpp::Any KryptonParser::Call_parametersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonVisitor*>(visitor))
    return parserVisitor->visitCall_parameters(this);
  else
    return visitor->visitChildren(this);
}

KryptonParser::Call_parametersContext* KryptonParser::call_parameters() {
  Call_parametersContext *_localctx = _tracker.createInstance<Call_parametersContext>(_ctx, getState());
  enterRule(_localctx, 48, KryptonParser::RuleCall_parameters);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(211);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << KryptonParser::IF)
      | (1ULL << KryptonParser::LEFT_PARENTHESIS)
      | (1ULL << KryptonParser::IDENTIFIER)
      | (1ULL << KryptonParser::INT)
      | (1ULL << KryptonParser::CHAR))) != 0)) {
      setState(210);
      expr();
    }
    setState(217);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KryptonParser::COMMA) {
      setState(213);
      match(KryptonParser::COMMA);
      setState(214);
      expr();
      setState(219);
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

KryptonParser::Basic_valueContext::Basic_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KryptonParser::ValueContext* KryptonParser::Basic_valueContext::value() {
  return getRuleContext<KryptonParser::ValueContext>(0);
}

tree::TerminalNode* KryptonParser::Basic_valueContext::LEFT_PARENTHESIS() {
  return getToken(KryptonParser::LEFT_PARENTHESIS, 0);
}

KryptonParser::ExprContext* KryptonParser::Basic_valueContext::expr() {
  return getRuleContext<KryptonParser::ExprContext>(0);
}

tree::TerminalNode* KryptonParser::Basic_valueContext::RIGHT_PARENTHESIS() {
  return getToken(KryptonParser::RIGHT_PARENTHESIS, 0);
}


size_t KryptonParser::Basic_valueContext::getRuleIndex() const {
  return KryptonParser::RuleBasic_value;
}

antlrcpp::Any KryptonParser::Basic_valueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonVisitor*>(visitor))
    return parserVisitor->visitBasic_value(this);
  else
    return visitor->visitChildren(this);
}

KryptonParser::Basic_valueContext* KryptonParser::basic_value() {
  Basic_valueContext *_localctx = _tracker.createInstance<Basic_valueContext>(_ctx, getState());
  enterRule(_localctx, 50, KryptonParser::RuleBasic_value);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(225);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KryptonParser::IDENTIFIER:
      case KryptonParser::INT:
      case KryptonParser::CHAR: {
        enterOuterAlt(_localctx, 1);
        setState(220);
        value();
        break;
      }

      case KryptonParser::LEFT_PARENTHESIS: {
        enterOuterAlt(_localctx, 2);
        setState(221);
        match(KryptonParser::LEFT_PARENTHESIS);
        setState(222);
        expr();
        setState(223);
        match(KryptonParser::RIGHT_PARENTHESIS);
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

KryptonParser::Value_visitorContext::Value_visitorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KryptonParser::Basic_valueContext* KryptonParser::Value_visitorContext::basic_value() {
  return getRuleContext<KryptonParser::Basic_valueContext>(0);
}

std::vector<tree::TerminalNode *> KryptonParser::Value_visitorContext::PERIOD() {
  return getTokens(KryptonParser::PERIOD);
}

tree::TerminalNode* KryptonParser::Value_visitorContext::PERIOD(size_t i) {
  return getToken(KryptonParser::PERIOD, i);
}

std::vector<KryptonParser::ValueContext *> KryptonParser::Value_visitorContext::value() {
  return getRuleContexts<KryptonParser::ValueContext>();
}

KryptonParser::ValueContext* KryptonParser::Value_visitorContext::value(size_t i) {
  return getRuleContext<KryptonParser::ValueContext>(i);
}


size_t KryptonParser::Value_visitorContext::getRuleIndex() const {
  return KryptonParser::RuleValue_visitor;
}

antlrcpp::Any KryptonParser::Value_visitorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonVisitor*>(visitor))
    return parserVisitor->visitValue_visitor(this);
  else
    return visitor->visitChildren(this);
}

KryptonParser::Value_visitorContext* KryptonParser::value_visitor() {
  Value_visitorContext *_localctx = _tracker.createInstance<Value_visitorContext>(_ctx, getState());
  enterRule(_localctx, 52, KryptonParser::RuleValue_visitor);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(227);
    basic_value();
    setState(232);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KryptonParser::PERIOD) {
      setState(228);
      match(KryptonParser::PERIOD);
      setState(229);
      value();
      setState(234);
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

KryptonParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KryptonParser::ConditionalContext* KryptonParser::ExprContext::conditional() {
  return getRuleContext<KryptonParser::ConditionalContext>(0);
}

KryptonParser::FormularContext* KryptonParser::ExprContext::formular() {
  return getRuleContext<KryptonParser::FormularContext>(0);
}


size_t KryptonParser::ExprContext::getRuleIndex() const {
  return KryptonParser::RuleExpr;
}

antlrcpp::Any KryptonParser::ExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonVisitor*>(visitor))
    return parserVisitor->visitExpr(this);
  else
    return visitor->visitChildren(this);
}

KryptonParser::ExprContext* KryptonParser::expr() {
  ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, getState());
  enterRule(_localctx, 54, KryptonParser::RuleExpr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(237);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KryptonParser::IF: {
        enterOuterAlt(_localctx, 1);
        setState(235);
        conditional();
        break;
      }

      case KryptonParser::LEFT_PARENTHESIS:
      case KryptonParser::IDENTIFIER:
      case KryptonParser::INT:
      case KryptonParser::CHAR: {
        enterOuterAlt(_localctx, 2);
        setState(236);
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

KryptonParser::FormularContext::FormularContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KryptonParser::ComparationContext* KryptonParser::FormularContext::comparation() {
  return getRuleContext<KryptonParser::ComparationContext>(0);
}


size_t KryptonParser::FormularContext::getRuleIndex() const {
  return KryptonParser::RuleFormular;
}

antlrcpp::Any KryptonParser::FormularContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonVisitor*>(visitor))
    return parserVisitor->visitFormular(this);
  else
    return visitor->visitChildren(this);
}

KryptonParser::FormularContext* KryptonParser::formular() {
  FormularContext *_localctx = _tracker.createInstance<FormularContext>(_ctx, getState());
  enterRule(_localctx, 56, KryptonParser::RuleFormular);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(239);
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

KryptonParser::ComparationContext::ComparationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<KryptonParser::SumContext *> KryptonParser::ComparationContext::sum() {
  return getRuleContexts<KryptonParser::SumContext>();
}

KryptonParser::SumContext* KryptonParser::ComparationContext::sum(size_t i) {
  return getRuleContext<KryptonParser::SumContext>(i);
}

tree::TerminalNode* KryptonParser::ComparationContext::EQUAL() {
  return getToken(KryptonParser::EQUAL, 0);
}


size_t KryptonParser::ComparationContext::getRuleIndex() const {
  return KryptonParser::RuleComparation;
}

antlrcpp::Any KryptonParser::ComparationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonVisitor*>(visitor))
    return parserVisitor->visitComparation(this);
  else
    return visitor->visitChildren(this);
}

KryptonParser::ComparationContext* KryptonParser::comparation() {
  ComparationContext *_localctx = _tracker.createInstance<ComparationContext>(_ctx, getState());
  enterRule(_localctx, 58, KryptonParser::RuleComparation);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(246);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(241);
      sum();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(242);
      sum();
      setState(243);
      match(KryptonParser::EQUAL);
      setState(244);
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

KryptonParser::SumContext::SumContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<KryptonParser::TermContext *> KryptonParser::SumContext::term() {
  return getRuleContexts<KryptonParser::TermContext>();
}

KryptonParser::TermContext* KryptonParser::SumContext::term(size_t i) {
  return getRuleContext<KryptonParser::TermContext>(i);
}

std::vector<tree::TerminalNode *> KryptonParser::SumContext::PLUS() {
  return getTokens(KryptonParser::PLUS);
}

tree::TerminalNode* KryptonParser::SumContext::PLUS(size_t i) {
  return getToken(KryptonParser::PLUS, i);
}

std::vector<tree::TerminalNode *> KryptonParser::SumContext::MINUS() {
  return getTokens(KryptonParser::MINUS);
}

tree::TerminalNode* KryptonParser::SumContext::MINUS(size_t i) {
  return getToken(KryptonParser::MINUS, i);
}


size_t KryptonParser::SumContext::getRuleIndex() const {
  return KryptonParser::RuleSum;
}

antlrcpp::Any KryptonParser::SumContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonVisitor*>(visitor))
    return parserVisitor->visitSum(this);
  else
    return visitor->visitChildren(this);
}

KryptonParser::SumContext* KryptonParser::sum() {
  SumContext *_localctx = _tracker.createInstance<SumContext>(_ctx, getState());
  enterRule(_localctx, 60, KryptonParser::RuleSum);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(248);
    term();
    setState(253);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KryptonParser::PLUS

    || _la == KryptonParser::MINUS) {
      setState(249);
      _la = _input->LA(1);
      if (!(_la == KryptonParser::PLUS

      || _la == KryptonParser::MINUS)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(250);
      term();
      setState(255);
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

KryptonParser::TermContext::TermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<KryptonParser::Value_visitorContext *> KryptonParser::TermContext::value_visitor() {
  return getRuleContexts<KryptonParser::Value_visitorContext>();
}

KryptonParser::Value_visitorContext* KryptonParser::TermContext::value_visitor(size_t i) {
  return getRuleContext<KryptonParser::Value_visitorContext>(i);
}

std::vector<tree::TerminalNode *> KryptonParser::TermContext::MULTIPLY() {
  return getTokens(KryptonParser::MULTIPLY);
}

tree::TerminalNode* KryptonParser::TermContext::MULTIPLY(size_t i) {
  return getToken(KryptonParser::MULTIPLY, i);
}

std::vector<tree::TerminalNode *> KryptonParser::TermContext::DIVIDE() {
  return getTokens(KryptonParser::DIVIDE);
}

tree::TerminalNode* KryptonParser::TermContext::DIVIDE(size_t i) {
  return getToken(KryptonParser::DIVIDE, i);
}


size_t KryptonParser::TermContext::getRuleIndex() const {
  return KryptonParser::RuleTerm;
}

antlrcpp::Any KryptonParser::TermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonVisitor*>(visitor))
    return parserVisitor->visitTerm(this);
  else
    return visitor->visitChildren(this);
}

KryptonParser::TermContext* KryptonParser::term() {
  TermContext *_localctx = _tracker.createInstance<TermContext>(_ctx, getState());
  enterRule(_localctx, 62, KryptonParser::RuleTerm);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(256);
    value_visitor();
    setState(261);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KryptonParser::MULTIPLY

    || _la == KryptonParser::DIVIDE) {
      setState(257);
      _la = _input->LA(1);
      if (!(_la == KryptonParser::MULTIPLY

      || _la == KryptonParser::DIVIDE)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(258);
      value_visitor();
      setState(263);
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

KryptonParser::ConditionalContext::ConditionalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KryptonParser::ConditionalContext::IF() {
  return getToken(KryptonParser::IF, 0);
}

tree::TerminalNode* KryptonParser::ConditionalContext::LEFT_PARENTHESIS() {
  return getToken(KryptonParser::LEFT_PARENTHESIS, 0);
}

std::vector<KryptonParser::ExprContext *> KryptonParser::ConditionalContext::expr() {
  return getRuleContexts<KryptonParser::ExprContext>();
}

KryptonParser::ExprContext* KryptonParser::ConditionalContext::expr(size_t i) {
  return getRuleContext<KryptonParser::ExprContext>(i);
}

tree::TerminalNode* KryptonParser::ConditionalContext::RIGHT_PARENTHESIS() {
  return getToken(KryptonParser::RIGHT_PARENTHESIS, 0);
}

KryptonParser::Conditional_elseContext* KryptonParser::ConditionalContext::conditional_else() {
  return getRuleContext<KryptonParser::Conditional_elseContext>(0);
}

std::vector<KryptonParser::Conditional_elseifContext *> KryptonParser::ConditionalContext::conditional_elseif() {
  return getRuleContexts<KryptonParser::Conditional_elseifContext>();
}

KryptonParser::Conditional_elseifContext* KryptonParser::ConditionalContext::conditional_elseif(size_t i) {
  return getRuleContext<KryptonParser::Conditional_elseifContext>(i);
}


size_t KryptonParser::ConditionalContext::getRuleIndex() const {
  return KryptonParser::RuleConditional;
}

antlrcpp::Any KryptonParser::ConditionalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonVisitor*>(visitor))
    return parserVisitor->visitConditional(this);
  else
    return visitor->visitChildren(this);
}

KryptonParser::ConditionalContext* KryptonParser::conditional() {
  ConditionalContext *_localctx = _tracker.createInstance<ConditionalContext>(_ctx, getState());
  enterRule(_localctx, 64, KryptonParser::RuleConditional);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(264);
    match(KryptonParser::IF);
    setState(265);
    match(KryptonParser::LEFT_PARENTHESIS);
    setState(266);
    expr();
    setState(267);
    match(KryptonParser::RIGHT_PARENTHESIS);
    setState(268);
    expr();
    setState(272);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KryptonParser::ELSEIF) {
      setState(269);
      conditional_elseif();
      setState(274);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(275);
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

KryptonParser::Conditional_elseifContext::Conditional_elseifContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KryptonParser::Conditional_elseifContext::ELSEIF() {
  return getToken(KryptonParser::ELSEIF, 0);
}

tree::TerminalNode* KryptonParser::Conditional_elseifContext::LEFT_PARENTHESIS() {
  return getToken(KryptonParser::LEFT_PARENTHESIS, 0);
}

std::vector<KryptonParser::ExprContext *> KryptonParser::Conditional_elseifContext::expr() {
  return getRuleContexts<KryptonParser::ExprContext>();
}

KryptonParser::ExprContext* KryptonParser::Conditional_elseifContext::expr(size_t i) {
  return getRuleContext<KryptonParser::ExprContext>(i);
}

tree::TerminalNode* KryptonParser::Conditional_elseifContext::RIGHT_PARENTHESIS() {
  return getToken(KryptonParser::RIGHT_PARENTHESIS, 0);
}


size_t KryptonParser::Conditional_elseifContext::getRuleIndex() const {
  return KryptonParser::RuleConditional_elseif;
}

antlrcpp::Any KryptonParser::Conditional_elseifContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonVisitor*>(visitor))
    return parserVisitor->visitConditional_elseif(this);
  else
    return visitor->visitChildren(this);
}

KryptonParser::Conditional_elseifContext* KryptonParser::conditional_elseif() {
  Conditional_elseifContext *_localctx = _tracker.createInstance<Conditional_elseifContext>(_ctx, getState());
  enterRule(_localctx, 66, KryptonParser::RuleConditional_elseif);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(277);
    match(KryptonParser::ELSEIF);
    setState(278);
    match(KryptonParser::LEFT_PARENTHESIS);
    setState(279);
    expr();
    setState(280);
    match(KryptonParser::RIGHT_PARENTHESIS);
    setState(281);
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

KryptonParser::Conditional_elseContext::Conditional_elseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KryptonParser::Conditional_elseContext::ELSE() {
  return getToken(KryptonParser::ELSE, 0);
}

KryptonParser::ExprContext* KryptonParser::Conditional_elseContext::expr() {
  return getRuleContext<KryptonParser::ExprContext>(0);
}


size_t KryptonParser::Conditional_elseContext::getRuleIndex() const {
  return KryptonParser::RuleConditional_else;
}

antlrcpp::Any KryptonParser::Conditional_elseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonVisitor*>(visitor))
    return parserVisitor->visitConditional_else(this);
  else
    return visitor->visitChildren(this);
}

KryptonParser::Conditional_elseContext* KryptonParser::conditional_else() {
  Conditional_elseContext *_localctx = _tracker.createInstance<Conditional_elseContext>(_ctx, getState());
  enterRule(_localctx, 68, KryptonParser::RuleConditional_else);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(283);
    match(KryptonParser::ELSE);
    setState(284);
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
std::vector<dfa::DFA> KryptonParser::_decisionToDFA;
atn::PredictionContextCache KryptonParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN KryptonParser::_atn;
std::vector<uint16_t> KryptonParser::_serializedATN;

std::vector<std::string> KryptonParser::_ruleNames = {
  "program", "basic_types", "type_identifier", "generic_specifier", "type_specifier", 
  "basic_declaration", "inited_declaration", "uninited_declaration", "declaration", 
  "struct_specifier", "struct_generic_parameter", "struct_generic_argument", 
  "struct_generic_argument_list", "struct_generic_arguments", "struct_generic_parameter_list", 
  "struct_generic_parameters", "function_specifier", "function_parameter", 
  "function_parameter_list", "function_parameters", "literal_value", "value", 
  "function_call", "call_operator", "call_parameters", "basic_value", "value_visitor", 
  "expr", "formular", "comparation", "sum", "term", "conditional", "conditional_elseif", 
  "conditional_else"
};

std::vector<std::string> KryptonParser::_literalNames = {
  "", "'c8'", "'i32'", "'struct'", "'type'", "'if'", "'elseif'", "'else'", 
  "'{'", "'}'", "';'", "':'", "'->'", "'<'", "'>'", "'('", "')'", "'''", 
  "'\"'", "','", "'.'", "'+'", "'-'", "'*'", "'/'", "'='"
};

std::vector<std::string> KryptonParser::_symbolicNames = {
  "", "C8", "I32", "STRUCT", "TYPE", "IF", "ELSEIF", "ELSE", "LEFT_BRACE", 
  "RIGHT_BRACE", "SEMICOLON", "COLON", "RIGHT_ARROW", "LESS_THAN", "GREATER_THAN", 
  "LEFT_PARENTHESIS", "RIGHT_PARENTHESIS", "SINGLE_QUOTE", "DOUBLE_QUOTE", 
  "COMMA", "PERIOD", "PLUS", "MINUS", "MULTIPLY", "DIVIDE", "EQUAL", "IDENTIFIER", 
  "INT", "CHAR", "WHITESPACE"
};

dfa::Vocabulary KryptonParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> KryptonParser::_tokenNames;

KryptonParser::Initializer::Initializer() {
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
    0x3, 0x1f, 0x121, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x3, 0x2, 0x7, 
    0x2, 0x4a, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x4d, 0xb, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x55, 0xa, 0x4, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x62, 0xa, 0x6, 0x3, 
    0x7, 0x3, 0x7, 0x5, 0x7, 0x66, 0xa, 0x7, 0x3, 0x7, 0x5, 0x7, 0x69, 0xa, 
    0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x75, 0xa, 0xa, 0x3, 0xb, 
    0x3, 0xb, 0x5, 0xb, 0x79, 0xa, 0xb, 0x3, 0xb, 0x5, 0xb, 0x7c, 0xa, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0x80, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0x83, 
    0xb, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x5, 0xc, 0x8c, 0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x7, 0xe, 0x93, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0x96, 0xb, 
    0xe, 0x3, 0xe, 0x5, 0xe, 0x99, 0xa, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x7, 0x10, 0xa2, 0xa, 0x10, 
    0xc, 0x10, 0xe, 0x10, 0xa5, 0xb, 0x10, 0x3, 0x10, 0x5, 0x10, 0xa8, 0xa, 
    0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0xb4, 0xa, 0x13, 
    0x3, 0x14, 0x5, 0x14, 0xb7, 0xa, 0x14, 0x3, 0x14, 0x3, 0x14, 0x7, 0x14, 
    0xbb, 0xa, 0x14, 0xc, 0x14, 0xe, 0x14, 0xbe, 0xb, 0x14, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 
    0x3, 0x17, 0x5, 0x17, 0xc9, 0xa, 0x17, 0x3, 0x18, 0x3, 0x18, 0x6, 0x18, 
    0xcd, 0xa, 0x18, 0xd, 0x18, 0xe, 0x18, 0xce, 0x3, 0x19, 0x3, 0x19, 0x3, 
    0x19, 0x3, 0x19, 0x3, 0x1a, 0x5, 0x1a, 0xd6, 0xa, 0x1a, 0x3, 0x1a, 0x3, 
    0x1a, 0x7, 0x1a, 0xda, 0xa, 0x1a, 0xc, 0x1a, 0xe, 0x1a, 0xdd, 0xb, 0x1a, 
    0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x5, 0x1b, 0xe4, 
    0xa, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x7, 0x1c, 0xe9, 0xa, 0x1c, 
    0xc, 0x1c, 0xe, 0x1c, 0xec, 0xb, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x5, 0x1d, 
    0xf0, 0xa, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 
    0x3, 0x1f, 0x3, 0x1f, 0x5, 0x1f, 0xf9, 0xa, 0x1f, 0x3, 0x20, 0x3, 0x20, 
    0x3, 0x20, 0x7, 0x20, 0xfe, 0xa, 0x20, 0xc, 0x20, 0xe, 0x20, 0x101, 
    0xb, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x7, 0x21, 0x106, 0xa, 0x21, 
    0xc, 0x21, 0xe, 0x21, 0x109, 0xb, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 
    0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x7, 0x22, 0x111, 0xa, 0x22, 0xc, 0x22, 
    0xe, 0x22, 0x114, 0xb, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x23, 0x3, 0x23, 
    0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 
    0x24, 0x3, 0x24, 0x2, 0x2, 0x25, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 
    0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 
    0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 
    0x40, 0x42, 0x44, 0x46, 0x2, 0x6, 0x3, 0x2, 0x3, 0x4, 0x3, 0x2, 0x1d, 
    0x1e, 0x3, 0x2, 0x17, 0x18, 0x3, 0x2, 0x19, 0x1a, 0x2, 0x11d, 0x2, 0x4b, 
    0x3, 0x2, 0x2, 0x2, 0x4, 0x50, 0x3, 0x2, 0x2, 0x2, 0x6, 0x54, 0x3, 0x2, 
    0x2, 0x2, 0x8, 0x56, 0x3, 0x2, 0x2, 0x2, 0xa, 0x61, 0x3, 0x2, 0x2, 0x2, 
    0xc, 0x63, 0x3, 0x2, 0x2, 0x2, 0xe, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x10, 
    0x6f, 0x3, 0x2, 0x2, 0x2, 0x12, 0x74, 0x3, 0x2, 0x2, 0x2, 0x14, 0x76, 
    0x3, 0x2, 0x2, 0x2, 0x16, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x18, 0x8d, 0x3, 
    0x2, 0x2, 0x2, 0x1a, 0x98, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x9a, 0x3, 0x2, 
    0x2, 0x2, 0x1e, 0xa7, 0x3, 0x2, 0x2, 0x2, 0x20, 0xa9, 0x3, 0x2, 0x2, 
    0x2, 0x22, 0xad, 0x3, 0x2, 0x2, 0x2, 0x24, 0xb1, 0x3, 0x2, 0x2, 0x2, 
    0x26, 0xb6, 0x3, 0x2, 0x2, 0x2, 0x28, 0xbf, 0x3, 0x2, 0x2, 0x2, 0x2a, 
    0xc3, 0x3, 0x2, 0x2, 0x2, 0x2c, 0xc8, 0x3, 0x2, 0x2, 0x2, 0x2e, 0xca, 
    0x3, 0x2, 0x2, 0x2, 0x30, 0xd0, 0x3, 0x2, 0x2, 0x2, 0x32, 0xd5, 0x3, 
    0x2, 0x2, 0x2, 0x34, 0xe3, 0x3, 0x2, 0x2, 0x2, 0x36, 0xe5, 0x3, 0x2, 
    0x2, 0x2, 0x38, 0xef, 0x3, 0x2, 0x2, 0x2, 0x3a, 0xf1, 0x3, 0x2, 0x2, 
    0x2, 0x3c, 0xf8, 0x3, 0x2, 0x2, 0x2, 0x3e, 0xfa, 0x3, 0x2, 0x2, 0x2, 
    0x40, 0x102, 0x3, 0x2, 0x2, 0x2, 0x42, 0x10a, 0x3, 0x2, 0x2, 0x2, 0x44, 
    0x117, 0x3, 0x2, 0x2, 0x2, 0x46, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x48, 0x4a, 
    0x5, 0x12, 0xa, 0x2, 0x49, 0x48, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x4d, 0x3, 
    0x2, 0x2, 0x2, 0x4b, 0x49, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x4c, 0x3, 0x2, 
    0x2, 0x2, 0x4c, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x4b, 0x3, 0x2, 0x2, 
    0x2, 0x4e, 0x4f, 0x7, 0x2, 0x2, 0x3, 0x4f, 0x3, 0x3, 0x2, 0x2, 0x2, 
    0x50, 0x51, 0x9, 0x2, 0x2, 0x2, 0x51, 0x5, 0x3, 0x2, 0x2, 0x2, 0x52, 
    0x55, 0x5, 0x4, 0x3, 0x2, 0x53, 0x55, 0x7, 0x1c, 0x2, 0x2, 0x54, 0x52, 
    0x3, 0x2, 0x2, 0x2, 0x54, 0x53, 0x3, 0x2, 0x2, 0x2, 0x55, 0x7, 0x3, 
    0x2, 0x2, 0x2, 0x56, 0x57, 0x7, 0x1c, 0x2, 0x2, 0x57, 0x58, 0x5, 0x1c, 
    0xf, 0x2, 0x58, 0x9, 0x3, 0x2, 0x2, 0x2, 0x59, 0x62, 0x5, 0x6, 0x4, 
    0x2, 0x5a, 0x62, 0x5, 0x14, 0xb, 0x2, 0x5b, 0x62, 0x5, 0x8, 0x5, 0x2, 
    0x5c, 0x62, 0x5, 0x22, 0x12, 0x2, 0x5d, 0x5e, 0x7, 0x11, 0x2, 0x2, 0x5e, 
    0x5f, 0x5, 0x22, 0x12, 0x2, 0x5f, 0x60, 0x7, 0x12, 0x2, 0x2, 0x60, 0x62, 
    0x3, 0x2, 0x2, 0x2, 0x61, 0x59, 0x3, 0x2, 0x2, 0x2, 0x61, 0x5a, 0x3, 
    0x2, 0x2, 0x2, 0x61, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x61, 0x5c, 0x3, 0x2, 
    0x2, 0x2, 0x61, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x62, 0xb, 0x3, 0x2, 0x2, 
    0x2, 0x63, 0x65, 0x5, 0xa, 0x6, 0x2, 0x64, 0x66, 0x7, 0x1c, 0x2, 0x2, 
    0x65, 0x64, 0x3, 0x2, 0x2, 0x2, 0x65, 0x66, 0x3, 0x2, 0x2, 0x2, 0x66, 
    0x68, 0x3, 0x2, 0x2, 0x2, 0x67, 0x69, 0x5, 0x20, 0x11, 0x2, 0x68, 0x67, 
    0x3, 0x2, 0x2, 0x2, 0x68, 0x69, 0x3, 0x2, 0x2, 0x2, 0x69, 0xd, 0x3, 
    0x2, 0x2, 0x2, 0x6a, 0x6b, 0x5, 0xc, 0x7, 0x2, 0x6b, 0x6c, 0x7, 0xd, 
    0x2, 0x2, 0x6c, 0x6d, 0x5, 0x38, 0x1d, 0x2, 0x6d, 0x6e, 0x7, 0xc, 0x2, 
    0x2, 0x6e, 0xf, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x70, 0x5, 0xc, 0x7, 0x2, 
    0x70, 0x71, 0x7, 0xc, 0x2, 0x2, 0x71, 0x11, 0x3, 0x2, 0x2, 0x2, 0x72, 
    0x75, 0x5, 0xe, 0x8, 0x2, 0x73, 0x75, 0x5, 0x10, 0x9, 0x2, 0x74, 0x72, 
    0x3, 0x2, 0x2, 0x2, 0x74, 0x73, 0x3, 0x2, 0x2, 0x2, 0x75, 0x13, 0x3, 
    0x2, 0x2, 0x2, 0x76, 0x78, 0x7, 0x5, 0x2, 0x2, 0x77, 0x79, 0x7, 0x1c, 
    0x2, 0x2, 0x78, 0x77, 0x3, 0x2, 0x2, 0x2, 0x78, 0x79, 0x3, 0x2, 0x2, 
    0x2, 0x79, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x7c, 0x5, 0x20, 0x11, 0x2, 
    0x7b, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x7c, 
    0x7d, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x81, 0x7, 0xa, 0x2, 0x2, 0x7e, 0x80, 
    0x5, 0x12, 0xa, 0x2, 0x7f, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x80, 0x83, 0x3, 
    0x2, 0x2, 0x2, 0x81, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x81, 0x82, 0x3, 0x2, 
    0x2, 0x2, 0x82, 0x84, 0x3, 0x2, 0x2, 0x2, 0x83, 0x81, 0x3, 0x2, 0x2, 
    0x2, 0x84, 0x85, 0x7, 0xb, 0x2, 0x2, 0x85, 0x15, 0x3, 0x2, 0x2, 0x2, 
    0x86, 0x87, 0x7, 0x6, 0x2, 0x2, 0x87, 0x8c, 0x7, 0x1c, 0x2, 0x2, 0x88, 
    0x89, 0x5, 0xa, 0x6, 0x2, 0x89, 0x8a, 0x7, 0x1c, 0x2, 0x2, 0x8a, 0x8c, 
    0x3, 0x2, 0x2, 0x2, 0x8b, 0x86, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x88, 0x3, 
    0x2, 0x2, 0x2, 0x8c, 0x17, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x8e, 0x5, 0xa, 
    0x6, 0x2, 0x8e, 0x19, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x94, 0x5, 0x18, 0xd, 
    0x2, 0x90, 0x91, 0x7, 0x15, 0x2, 0x2, 0x91, 0x93, 0x5, 0x18, 0xd, 0x2, 
    0x92, 0x90, 0x3, 0x2, 0x2, 0x2, 0x93, 0x96, 0x3, 0x2, 0x2, 0x2, 0x94, 
    0x92, 0x3, 0x2, 0x2, 0x2, 0x94, 0x95, 0x3, 0x2, 0x2, 0x2, 0x95, 0x99, 
    0x3, 0x2, 0x2, 0x2, 0x96, 0x94, 0x3, 0x2, 0x2, 0x2, 0x97, 0x99, 0x3, 
    0x2, 0x2, 0x2, 0x98, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x98, 0x97, 0x3, 0x2, 
    0x2, 0x2, 0x99, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x9b, 0x7, 0xf, 0x2, 
    0x2, 0x9b, 0x9c, 0x5, 0x1a, 0xe, 0x2, 0x9c, 0x9d, 0x7, 0x10, 0x2, 0x2, 
    0x9d, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x9e, 0xa3, 0x5, 0x16, 0xc, 0x2, 0x9f, 
    0xa0, 0x7, 0x15, 0x2, 0x2, 0xa0, 0xa2, 0x5, 0x16, 0xc, 0x2, 0xa1, 0x9f, 
    0x3, 0x2, 0x2, 0x2, 0xa2, 0xa5, 0x3, 0x2, 0x2, 0x2, 0xa3, 0xa1, 0x3, 
    0x2, 0x2, 0x2, 0xa3, 0xa4, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa8, 0x3, 0x2, 
    0x2, 0x2, 0xa5, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xa6, 0xa8, 0x3, 0x2, 0x2, 
    0x2, 0xa7, 0x9e, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xa6, 0x3, 0x2, 0x2, 0x2, 
    0xa8, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xaa, 0x7, 0xf, 0x2, 0x2, 0xaa, 
    0xab, 0x5, 0x1e, 0x10, 0x2, 0xab, 0xac, 0x7, 0x10, 0x2, 0x2, 0xac, 0x21, 
    0x3, 0x2, 0x2, 0x2, 0xad, 0xae, 0x5, 0x28, 0x15, 0x2, 0xae, 0xaf, 0x7, 
    0xe, 0x2, 0x2, 0xaf, 0xb0, 0x5, 0xa, 0x6, 0x2, 0xb0, 0x23, 0x3, 0x2, 
    0x2, 0x2, 0xb1, 0xb3, 0x5, 0xa, 0x6, 0x2, 0xb2, 0xb4, 0x7, 0x1c, 0x2, 
    0x2, 0xb3, 0xb2, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xb4, 0x3, 0x2, 0x2, 0x2, 
    0xb4, 0x25, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xb7, 0x5, 0x24, 0x13, 0x2, 0xb6, 
    0xb5, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xbc, 
    0x3, 0x2, 0x2, 0x2, 0xb8, 0xb9, 0x7, 0x15, 0x2, 0x2, 0xb9, 0xbb, 0x5, 
    0x24, 0x13, 0x2, 0xba, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xbe, 0x3, 0x2, 
    0x2, 0x2, 0xbc, 0xba, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xbd, 0x3, 0x2, 0x2, 
    0x2, 0xbd, 0x27, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xbc, 0x3, 0x2, 0x2, 0x2, 
    0xbf, 0xc0, 0x7, 0x11, 0x2, 0x2, 0xc0, 0xc1, 0x5, 0x26, 0x14, 0x2, 0xc1, 
    0xc2, 0x7, 0x12, 0x2, 0x2, 0xc2, 0x29, 0x3, 0x2, 0x2, 0x2, 0xc3, 0xc4, 
    0x9, 0x3, 0x2, 0x2, 0xc4, 0x2b, 0x3, 0x2, 0x2, 0x2, 0xc5, 0xc9, 0x5, 
    0x2a, 0x16, 0x2, 0xc6, 0xc9, 0x5, 0x2e, 0x18, 0x2, 0xc7, 0xc9, 0x7, 
    0x1c, 0x2, 0x2, 0xc8, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xc6, 0x3, 0x2, 
    0x2, 0x2, 0xc8, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xc9, 0x2d, 0x3, 0x2, 0x2, 
    0x2, 0xca, 0xcc, 0x7, 0x1c, 0x2, 0x2, 0xcb, 0xcd, 0x5, 0x30, 0x19, 0x2, 
    0xcc, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xce, 0x3, 0x2, 0x2, 0x2, 0xce, 
    0xcc, 0x3, 0x2, 0x2, 0x2, 0xce, 0xcf, 0x3, 0x2, 0x2, 0x2, 0xcf, 0x2f, 
    0x3, 0x2, 0x2, 0x2, 0xd0, 0xd1, 0x7, 0x11, 0x2, 0x2, 0xd1, 0xd2, 0x5, 
    0x32, 0x1a, 0x2, 0xd2, 0xd3, 0x7, 0x12, 0x2, 0x2, 0xd3, 0x31, 0x3, 0x2, 
    0x2, 0x2, 0xd4, 0xd6, 0x5, 0x38, 0x1d, 0x2, 0xd5, 0xd4, 0x3, 0x2, 0x2, 
    0x2, 0xd5, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xdb, 0x3, 0x2, 0x2, 0x2, 
    0xd7, 0xd8, 0x7, 0x15, 0x2, 0x2, 0xd8, 0xda, 0x5, 0x38, 0x1d, 0x2, 0xd9, 
    0xd7, 0x3, 0x2, 0x2, 0x2, 0xda, 0xdd, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xd9, 
    0x3, 0x2, 0x2, 0x2, 0xdb, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xdc, 0x33, 0x3, 
    0x2, 0x2, 0x2, 0xdd, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xde, 0xe4, 0x5, 0x2c, 
    0x17, 0x2, 0xdf, 0xe0, 0x7, 0x11, 0x2, 0x2, 0xe0, 0xe1, 0x5, 0x38, 0x1d, 
    0x2, 0xe1, 0xe2, 0x7, 0x12, 0x2, 0x2, 0xe2, 0xe4, 0x3, 0x2, 0x2, 0x2, 
    0xe3, 0xde, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xdf, 0x3, 0x2, 0x2, 0x2, 0xe4, 
    0x35, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xea, 0x5, 0x34, 0x1b, 0x2, 0xe6, 0xe7, 
    0x7, 0x16, 0x2, 0x2, 0xe7, 0xe9, 0x5, 0x2c, 0x17, 0x2, 0xe8, 0xe6, 0x3, 
    0x2, 0x2, 0x2, 0xe9, 0xec, 0x3, 0x2, 0x2, 0x2, 0xea, 0xe8, 0x3, 0x2, 
    0x2, 0x2, 0xea, 0xeb, 0x3, 0x2, 0x2, 0x2, 0xeb, 0x37, 0x3, 0x2, 0x2, 
    0x2, 0xec, 0xea, 0x3, 0x2, 0x2, 0x2, 0xed, 0xf0, 0x5, 0x42, 0x22, 0x2, 
    0xee, 0xf0, 0x5, 0x3a, 0x1e, 0x2, 0xef, 0xed, 0x3, 0x2, 0x2, 0x2, 0xef, 
    0xee, 0x3, 0x2, 0x2, 0x2, 0xf0, 0x39, 0x3, 0x2, 0x2, 0x2, 0xf1, 0xf2, 
    0x5, 0x3c, 0x1f, 0x2, 0xf2, 0x3b, 0x3, 0x2, 0x2, 0x2, 0xf3, 0xf9, 0x5, 
    0x3e, 0x20, 0x2, 0xf4, 0xf5, 0x5, 0x3e, 0x20, 0x2, 0xf5, 0xf6, 0x7, 
    0x1b, 0x2, 0x2, 0xf6, 0xf7, 0x5, 0x3e, 0x20, 0x2, 0xf7, 0xf9, 0x3, 0x2, 
    0x2, 0x2, 0xf8, 0xf3, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xf4, 0x3, 0x2, 0x2, 
    0x2, 0xf9, 0x3d, 0x3, 0x2, 0x2, 0x2, 0xfa, 0xff, 0x5, 0x40, 0x21, 0x2, 
    0xfb, 0xfc, 0x9, 0x4, 0x2, 0x2, 0xfc, 0xfe, 0x5, 0x40, 0x21, 0x2, 0xfd, 
    0xfb, 0x3, 0x2, 0x2, 0x2, 0xfe, 0x101, 0x3, 0x2, 0x2, 0x2, 0xff, 0xfd, 
    0x3, 0x2, 0x2, 0x2, 0xff, 0x100, 0x3, 0x2, 0x2, 0x2, 0x100, 0x3f, 0x3, 
    0x2, 0x2, 0x2, 0x101, 0xff, 0x3, 0x2, 0x2, 0x2, 0x102, 0x107, 0x5, 0x36, 
    0x1c, 0x2, 0x103, 0x104, 0x9, 0x5, 0x2, 0x2, 0x104, 0x106, 0x5, 0x36, 
    0x1c, 0x2, 0x105, 0x103, 0x3, 0x2, 0x2, 0x2, 0x106, 0x109, 0x3, 0x2, 
    0x2, 0x2, 0x107, 0x105, 0x3, 0x2, 0x2, 0x2, 0x107, 0x108, 0x3, 0x2, 
    0x2, 0x2, 0x108, 0x41, 0x3, 0x2, 0x2, 0x2, 0x109, 0x107, 0x3, 0x2, 0x2, 
    0x2, 0x10a, 0x10b, 0x7, 0x7, 0x2, 0x2, 0x10b, 0x10c, 0x7, 0x11, 0x2, 
    0x2, 0x10c, 0x10d, 0x5, 0x38, 0x1d, 0x2, 0x10d, 0x10e, 0x7, 0x12, 0x2, 
    0x2, 0x10e, 0x112, 0x5, 0x38, 0x1d, 0x2, 0x10f, 0x111, 0x5, 0x44, 0x23, 
    0x2, 0x110, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x111, 0x114, 0x3, 0x2, 0x2, 
    0x2, 0x112, 0x110, 0x3, 0x2, 0x2, 0x2, 0x112, 0x113, 0x3, 0x2, 0x2, 
    0x2, 0x113, 0x115, 0x3, 0x2, 0x2, 0x2, 0x114, 0x112, 0x3, 0x2, 0x2, 
    0x2, 0x115, 0x116, 0x5, 0x46, 0x24, 0x2, 0x116, 0x43, 0x3, 0x2, 0x2, 
    0x2, 0x117, 0x118, 0x7, 0x8, 0x2, 0x2, 0x118, 0x119, 0x7, 0x11, 0x2, 
    0x2, 0x119, 0x11a, 0x5, 0x38, 0x1d, 0x2, 0x11a, 0x11b, 0x7, 0x12, 0x2, 
    0x2, 0x11b, 0x11c, 0x5, 0x38, 0x1d, 0x2, 0x11c, 0x45, 0x3, 0x2, 0x2, 
    0x2, 0x11d, 0x11e, 0x7, 0x9, 0x2, 0x2, 0x11e, 0x11f, 0x5, 0x38, 0x1d, 
    0x2, 0x11f, 0x47, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x4b, 0x54, 0x61, 0x65, 
    0x68, 0x74, 0x78, 0x7b, 0x81, 0x8b, 0x94, 0x98, 0xa3, 0xa7, 0xb3, 0xb6, 
    0xbc, 0xc8, 0xce, 0xd5, 0xdb, 0xe3, 0xea, 0xef, 0xf8, 0xff, 0x107, 0x112, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

KryptonParser::Initializer KryptonParser::_init;
