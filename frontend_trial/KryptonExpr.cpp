
// Generated from d:\krypton\frontend_trial/KryptonExpr.g4 by ANTLR 4.7.1


#include "KryptonExprVisitor.h"

#include "KryptonExpr.h"


using namespace antlrcpp;
using namespace antlr4;

KryptonExpr::KryptonExpr(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

KryptonExpr::~KryptonExpr() {
  delete _interpreter;
}

std::string KryptonExpr::getGrammarFileName() const {
  return "KryptonExpr.g4";
}

const std::vector<std::string>& KryptonExpr::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& KryptonExpr::getVocabulary() const {
  return _vocabulary;
}


//----------------- Literal_valueContext ------------------------------------------------------------------

KryptonExpr::Literal_valueContext::Literal_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KryptonExpr::Literal_valueContext::INT() {
  return getToken(KryptonExpr::INT, 0);
}

tree::TerminalNode* KryptonExpr::Literal_valueContext::CHAR() {
  return getToken(KryptonExpr::CHAR, 0);
}


size_t KryptonExpr::Literal_valueContext::getRuleIndex() const {
  return KryptonExpr::RuleLiteral_value;
}

antlrcpp::Any KryptonExpr::Literal_valueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonExprVisitor*>(visitor))
    return parserVisitor->visitLiteral_value(this);
  else
    return visitor->visitChildren(this);
}

KryptonExpr::Literal_valueContext* KryptonExpr::literal_value() {
  Literal_valueContext *_localctx = _tracker.createInstance<Literal_valueContext>(_ctx, getState());
  enterRule(_localctx, 0, KryptonExpr::RuleLiteral_value);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(30);
    _la = _input->LA(1);
    if (!(_la == KryptonExpr::INT

    || _la == KryptonExpr::CHAR)) {
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

KryptonExpr::ValueContext::ValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KryptonExpr::Literal_valueContext* KryptonExpr::ValueContext::literal_value() {
  return getRuleContext<KryptonExpr::Literal_valueContext>(0);
}

KryptonExpr::Function_callContext* KryptonExpr::ValueContext::function_call() {
  return getRuleContext<KryptonExpr::Function_callContext>(0);
}

tree::TerminalNode* KryptonExpr::ValueContext::IDENTIFIER() {
  return getToken(KryptonExpr::IDENTIFIER, 0);
}


size_t KryptonExpr::ValueContext::getRuleIndex() const {
  return KryptonExpr::RuleValue;
}

antlrcpp::Any KryptonExpr::ValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonExprVisitor*>(visitor))
    return parserVisitor->visitValue(this);
  else
    return visitor->visitChildren(this);
}

KryptonExpr::ValueContext* KryptonExpr::value() {
  ValueContext *_localctx = _tracker.createInstance<ValueContext>(_ctx, getState());
  enterRule(_localctx, 2, KryptonExpr::RuleValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(35);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(32);
      literal_value();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(33);
      function_call();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(34);
      match(KryptonExpr::IDENTIFIER);
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

KryptonExpr::Function_callContext::Function_callContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KryptonExpr::Function_callContext::IDENTIFIER() {
  return getToken(KryptonExpr::IDENTIFIER, 0);
}

std::vector<KryptonExpr::Call_operatorContext *> KryptonExpr::Function_callContext::call_operator() {
  return getRuleContexts<KryptonExpr::Call_operatorContext>();
}

KryptonExpr::Call_operatorContext* KryptonExpr::Function_callContext::call_operator(size_t i) {
  return getRuleContext<KryptonExpr::Call_operatorContext>(i);
}


size_t KryptonExpr::Function_callContext::getRuleIndex() const {
  return KryptonExpr::RuleFunction_call;
}

antlrcpp::Any KryptonExpr::Function_callContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonExprVisitor*>(visitor))
    return parserVisitor->visitFunction_call(this);
  else
    return visitor->visitChildren(this);
}

KryptonExpr::Function_callContext* KryptonExpr::function_call() {
  Function_callContext *_localctx = _tracker.createInstance<Function_callContext>(_ctx, getState());
  enterRule(_localctx, 4, KryptonExpr::RuleFunction_call);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(37);
    match(KryptonExpr::IDENTIFIER);
    setState(39); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(38);
      call_operator();
      setState(41); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == KryptonExpr::LEFT_PARENTHESIS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Call_operatorContext ------------------------------------------------------------------

KryptonExpr::Call_operatorContext::Call_operatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KryptonExpr::Call_operatorContext::LEFT_PARENTHESIS() {
  return getToken(KryptonExpr::LEFT_PARENTHESIS, 0);
}

KryptonExpr::Call_parametersContext* KryptonExpr::Call_operatorContext::call_parameters() {
  return getRuleContext<KryptonExpr::Call_parametersContext>(0);
}

tree::TerminalNode* KryptonExpr::Call_operatorContext::RIGHT_PARENTHESIS() {
  return getToken(KryptonExpr::RIGHT_PARENTHESIS, 0);
}


size_t KryptonExpr::Call_operatorContext::getRuleIndex() const {
  return KryptonExpr::RuleCall_operator;
}

antlrcpp::Any KryptonExpr::Call_operatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonExprVisitor*>(visitor))
    return parserVisitor->visitCall_operator(this);
  else
    return visitor->visitChildren(this);
}

KryptonExpr::Call_operatorContext* KryptonExpr::call_operator() {
  Call_operatorContext *_localctx = _tracker.createInstance<Call_operatorContext>(_ctx, getState());
  enterRule(_localctx, 6, KryptonExpr::RuleCall_operator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(43);
    match(KryptonExpr::LEFT_PARENTHESIS);
    setState(44);
    call_parameters();
    setState(45);
    match(KryptonExpr::RIGHT_PARENTHESIS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Call_parametersContext ------------------------------------------------------------------

KryptonExpr::Call_parametersContext::Call_parametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> KryptonExpr::Call_parametersContext::COMMA() {
  return getTokens(KryptonExpr::COMMA);
}

tree::TerminalNode* KryptonExpr::Call_parametersContext::COMMA(size_t i) {
  return getToken(KryptonExpr::COMMA, i);
}

std::vector<KryptonExpr::ExprContext *> KryptonExpr::Call_parametersContext::expr() {
  return getRuleContexts<KryptonExpr::ExprContext>();
}

KryptonExpr::ExprContext* KryptonExpr::Call_parametersContext::expr(size_t i) {
  return getRuleContext<KryptonExpr::ExprContext>(i);
}


size_t KryptonExpr::Call_parametersContext::getRuleIndex() const {
  return KryptonExpr::RuleCall_parameters;
}

antlrcpp::Any KryptonExpr::Call_parametersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonExprVisitor*>(visitor))
    return parserVisitor->visitCall_parameters(this);
  else
    return visitor->visitChildren(this);
}

KryptonExpr::Call_parametersContext* KryptonExpr::call_parameters() {
  Call_parametersContext *_localctx = _tracker.createInstance<Call_parametersContext>(_ctx, getState());
  enterRule(_localctx, 8, KryptonExpr::RuleCall_parameters);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(48);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << KryptonExpr::IF)
      | (1ULL << KryptonExpr::LEFT_PARENTHESIS)
      | (1ULL << KryptonExpr::IDENTIFIER)
      | (1ULL << KryptonExpr::INT)
      | (1ULL << KryptonExpr::CHAR))) != 0)) {
      setState(47);
      expr();
    }
    setState(54);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KryptonExpr::COMMA) {
      setState(50);
      match(KryptonExpr::COMMA);
      setState(51);
      expr();
      setState(56);
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

KryptonExpr::Basic_valueContext::Basic_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KryptonExpr::ValueContext* KryptonExpr::Basic_valueContext::value() {
  return getRuleContext<KryptonExpr::ValueContext>(0);
}

tree::TerminalNode* KryptonExpr::Basic_valueContext::LEFT_PARENTHESIS() {
  return getToken(KryptonExpr::LEFT_PARENTHESIS, 0);
}

KryptonExpr::ExprContext* KryptonExpr::Basic_valueContext::expr() {
  return getRuleContext<KryptonExpr::ExprContext>(0);
}

tree::TerminalNode* KryptonExpr::Basic_valueContext::RIGHT_PARENTHESIS() {
  return getToken(KryptonExpr::RIGHT_PARENTHESIS, 0);
}


size_t KryptonExpr::Basic_valueContext::getRuleIndex() const {
  return KryptonExpr::RuleBasic_value;
}

antlrcpp::Any KryptonExpr::Basic_valueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonExprVisitor*>(visitor))
    return parserVisitor->visitBasic_value(this);
  else
    return visitor->visitChildren(this);
}

KryptonExpr::Basic_valueContext* KryptonExpr::basic_value() {
  Basic_valueContext *_localctx = _tracker.createInstance<Basic_valueContext>(_ctx, getState());
  enterRule(_localctx, 10, KryptonExpr::RuleBasic_value);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(62);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KryptonExpr::IDENTIFIER:
      case KryptonExpr::INT:
      case KryptonExpr::CHAR: {
        enterOuterAlt(_localctx, 1);
        setState(57);
        value();
        break;
      }

      case KryptonExpr::LEFT_PARENTHESIS: {
        enterOuterAlt(_localctx, 2);
        setState(58);
        match(KryptonExpr::LEFT_PARENTHESIS);
        setState(59);
        expr();
        setState(60);
        match(KryptonExpr::RIGHT_PARENTHESIS);
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

KryptonExpr::Value_visitorContext::Value_visitorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KryptonExpr::Basic_valueContext* KryptonExpr::Value_visitorContext::basic_value() {
  return getRuleContext<KryptonExpr::Basic_valueContext>(0);
}

std::vector<tree::TerminalNode *> KryptonExpr::Value_visitorContext::PERIOD() {
  return getTokens(KryptonExpr::PERIOD);
}

tree::TerminalNode* KryptonExpr::Value_visitorContext::PERIOD(size_t i) {
  return getToken(KryptonExpr::PERIOD, i);
}

std::vector<KryptonExpr::ValueContext *> KryptonExpr::Value_visitorContext::value() {
  return getRuleContexts<KryptonExpr::ValueContext>();
}

KryptonExpr::ValueContext* KryptonExpr::Value_visitorContext::value(size_t i) {
  return getRuleContext<KryptonExpr::ValueContext>(i);
}


size_t KryptonExpr::Value_visitorContext::getRuleIndex() const {
  return KryptonExpr::RuleValue_visitor;
}

antlrcpp::Any KryptonExpr::Value_visitorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonExprVisitor*>(visitor))
    return parserVisitor->visitValue_visitor(this);
  else
    return visitor->visitChildren(this);
}

KryptonExpr::Value_visitorContext* KryptonExpr::value_visitor() {
  Value_visitorContext *_localctx = _tracker.createInstance<Value_visitorContext>(_ctx, getState());
  enterRule(_localctx, 12, KryptonExpr::RuleValue_visitor);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(64);
    basic_value();
    setState(69);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KryptonExpr::PERIOD) {
      setState(65);
      match(KryptonExpr::PERIOD);
      setState(66);
      value();
      setState(71);
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

KryptonExpr::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KryptonExpr::ConditionalContext* KryptonExpr::ExprContext::conditional() {
  return getRuleContext<KryptonExpr::ConditionalContext>(0);
}

KryptonExpr::FormularContext* KryptonExpr::ExprContext::formular() {
  return getRuleContext<KryptonExpr::FormularContext>(0);
}


size_t KryptonExpr::ExprContext::getRuleIndex() const {
  return KryptonExpr::RuleExpr;
}

antlrcpp::Any KryptonExpr::ExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonExprVisitor*>(visitor))
    return parserVisitor->visitExpr(this);
  else
    return visitor->visitChildren(this);
}

KryptonExpr::ExprContext* KryptonExpr::expr() {
  ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, getState());
  enterRule(_localctx, 14, KryptonExpr::RuleExpr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(74);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KryptonExpr::IF: {
        enterOuterAlt(_localctx, 1);
        setState(72);
        conditional();
        break;
      }

      case KryptonExpr::LEFT_PARENTHESIS:
      case KryptonExpr::IDENTIFIER:
      case KryptonExpr::INT:
      case KryptonExpr::CHAR: {
        enterOuterAlt(_localctx, 2);
        setState(73);
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

KryptonExpr::FormularContext::FormularContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KryptonExpr::ComparationContext* KryptonExpr::FormularContext::comparation() {
  return getRuleContext<KryptonExpr::ComparationContext>(0);
}


size_t KryptonExpr::FormularContext::getRuleIndex() const {
  return KryptonExpr::RuleFormular;
}

antlrcpp::Any KryptonExpr::FormularContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonExprVisitor*>(visitor))
    return parserVisitor->visitFormular(this);
  else
    return visitor->visitChildren(this);
}

KryptonExpr::FormularContext* KryptonExpr::formular() {
  FormularContext *_localctx = _tracker.createInstance<FormularContext>(_ctx, getState());
  enterRule(_localctx, 16, KryptonExpr::RuleFormular);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(76);
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

KryptonExpr::ComparationContext::ComparationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<KryptonExpr::SumContext *> KryptonExpr::ComparationContext::sum() {
  return getRuleContexts<KryptonExpr::SumContext>();
}

KryptonExpr::SumContext* KryptonExpr::ComparationContext::sum(size_t i) {
  return getRuleContext<KryptonExpr::SumContext>(i);
}

tree::TerminalNode* KryptonExpr::ComparationContext::EQUAL() {
  return getToken(KryptonExpr::EQUAL, 0);
}


size_t KryptonExpr::ComparationContext::getRuleIndex() const {
  return KryptonExpr::RuleComparation;
}

antlrcpp::Any KryptonExpr::ComparationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonExprVisitor*>(visitor))
    return parserVisitor->visitComparation(this);
  else
    return visitor->visitChildren(this);
}

KryptonExpr::ComparationContext* KryptonExpr::comparation() {
  ComparationContext *_localctx = _tracker.createInstance<ComparationContext>(_ctx, getState());
  enterRule(_localctx, 18, KryptonExpr::RuleComparation);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(83);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(78);
      sum();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(79);
      sum();
      setState(80);
      match(KryptonExpr::EQUAL);
      setState(81);
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

KryptonExpr::SumContext::SumContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<KryptonExpr::TermContext *> KryptonExpr::SumContext::term() {
  return getRuleContexts<KryptonExpr::TermContext>();
}

KryptonExpr::TermContext* KryptonExpr::SumContext::term(size_t i) {
  return getRuleContext<KryptonExpr::TermContext>(i);
}

std::vector<tree::TerminalNode *> KryptonExpr::SumContext::PLUS() {
  return getTokens(KryptonExpr::PLUS);
}

tree::TerminalNode* KryptonExpr::SumContext::PLUS(size_t i) {
  return getToken(KryptonExpr::PLUS, i);
}

std::vector<tree::TerminalNode *> KryptonExpr::SumContext::MINUS() {
  return getTokens(KryptonExpr::MINUS);
}

tree::TerminalNode* KryptonExpr::SumContext::MINUS(size_t i) {
  return getToken(KryptonExpr::MINUS, i);
}


size_t KryptonExpr::SumContext::getRuleIndex() const {
  return KryptonExpr::RuleSum;
}

antlrcpp::Any KryptonExpr::SumContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonExprVisitor*>(visitor))
    return parserVisitor->visitSum(this);
  else
    return visitor->visitChildren(this);
}

KryptonExpr::SumContext* KryptonExpr::sum() {
  SumContext *_localctx = _tracker.createInstance<SumContext>(_ctx, getState());
  enterRule(_localctx, 20, KryptonExpr::RuleSum);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(85);
    term();
    setState(90);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KryptonExpr::PLUS

    || _la == KryptonExpr::MINUS) {
      setState(86);
      _la = _input->LA(1);
      if (!(_la == KryptonExpr::PLUS

      || _la == KryptonExpr::MINUS)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(87);
      term();
      setState(92);
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

KryptonExpr::TermContext::TermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<KryptonExpr::Value_visitorContext *> KryptonExpr::TermContext::value_visitor() {
  return getRuleContexts<KryptonExpr::Value_visitorContext>();
}

KryptonExpr::Value_visitorContext* KryptonExpr::TermContext::value_visitor(size_t i) {
  return getRuleContext<KryptonExpr::Value_visitorContext>(i);
}

std::vector<tree::TerminalNode *> KryptonExpr::TermContext::MULTIPLY() {
  return getTokens(KryptonExpr::MULTIPLY);
}

tree::TerminalNode* KryptonExpr::TermContext::MULTIPLY(size_t i) {
  return getToken(KryptonExpr::MULTIPLY, i);
}

std::vector<tree::TerminalNode *> KryptonExpr::TermContext::DIVIDE() {
  return getTokens(KryptonExpr::DIVIDE);
}

tree::TerminalNode* KryptonExpr::TermContext::DIVIDE(size_t i) {
  return getToken(KryptonExpr::DIVIDE, i);
}


size_t KryptonExpr::TermContext::getRuleIndex() const {
  return KryptonExpr::RuleTerm;
}

antlrcpp::Any KryptonExpr::TermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonExprVisitor*>(visitor))
    return parserVisitor->visitTerm(this);
  else
    return visitor->visitChildren(this);
}

KryptonExpr::TermContext* KryptonExpr::term() {
  TermContext *_localctx = _tracker.createInstance<TermContext>(_ctx, getState());
  enterRule(_localctx, 22, KryptonExpr::RuleTerm);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(93);
    value_visitor();
    setState(98);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KryptonExpr::MULTIPLY

    || _la == KryptonExpr::DIVIDE) {
      setState(94);
      _la = _input->LA(1);
      if (!(_la == KryptonExpr::MULTIPLY

      || _la == KryptonExpr::DIVIDE)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(95);
      value_visitor();
      setState(100);
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

KryptonExpr::ConditionalContext::ConditionalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KryptonExpr::ConditionalContext::IF() {
  return getToken(KryptonExpr::IF, 0);
}

tree::TerminalNode* KryptonExpr::ConditionalContext::LEFT_PARENTHESIS() {
  return getToken(KryptonExpr::LEFT_PARENTHESIS, 0);
}

std::vector<KryptonExpr::ExprContext *> KryptonExpr::ConditionalContext::expr() {
  return getRuleContexts<KryptonExpr::ExprContext>();
}

KryptonExpr::ExprContext* KryptonExpr::ConditionalContext::expr(size_t i) {
  return getRuleContext<KryptonExpr::ExprContext>(i);
}

tree::TerminalNode* KryptonExpr::ConditionalContext::RIGHT_PARENTHESIS() {
  return getToken(KryptonExpr::RIGHT_PARENTHESIS, 0);
}

KryptonExpr::Conditional_elseContext* KryptonExpr::ConditionalContext::conditional_else() {
  return getRuleContext<KryptonExpr::Conditional_elseContext>(0);
}

std::vector<KryptonExpr::Conditional_elseifContext *> KryptonExpr::ConditionalContext::conditional_elseif() {
  return getRuleContexts<KryptonExpr::Conditional_elseifContext>();
}

KryptonExpr::Conditional_elseifContext* KryptonExpr::ConditionalContext::conditional_elseif(size_t i) {
  return getRuleContext<KryptonExpr::Conditional_elseifContext>(i);
}


size_t KryptonExpr::ConditionalContext::getRuleIndex() const {
  return KryptonExpr::RuleConditional;
}

antlrcpp::Any KryptonExpr::ConditionalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonExprVisitor*>(visitor))
    return parserVisitor->visitConditional(this);
  else
    return visitor->visitChildren(this);
}

KryptonExpr::ConditionalContext* KryptonExpr::conditional() {
  ConditionalContext *_localctx = _tracker.createInstance<ConditionalContext>(_ctx, getState());
  enterRule(_localctx, 24, KryptonExpr::RuleConditional);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(101);
    match(KryptonExpr::IF);
    setState(102);
    match(KryptonExpr::LEFT_PARENTHESIS);
    setState(103);
    expr();
    setState(104);
    match(KryptonExpr::RIGHT_PARENTHESIS);
    setState(105);
    expr();
    setState(109);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KryptonExpr::ELSEIF) {
      setState(106);
      conditional_elseif();
      setState(111);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(112);
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

KryptonExpr::Conditional_elseifContext::Conditional_elseifContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KryptonExpr::Conditional_elseifContext::ELSEIF() {
  return getToken(KryptonExpr::ELSEIF, 0);
}

tree::TerminalNode* KryptonExpr::Conditional_elseifContext::LEFT_PARENTHESIS() {
  return getToken(KryptonExpr::LEFT_PARENTHESIS, 0);
}

std::vector<KryptonExpr::ExprContext *> KryptonExpr::Conditional_elseifContext::expr() {
  return getRuleContexts<KryptonExpr::ExprContext>();
}

KryptonExpr::ExprContext* KryptonExpr::Conditional_elseifContext::expr(size_t i) {
  return getRuleContext<KryptonExpr::ExprContext>(i);
}

tree::TerminalNode* KryptonExpr::Conditional_elseifContext::RIGHT_PARENTHESIS() {
  return getToken(KryptonExpr::RIGHT_PARENTHESIS, 0);
}


size_t KryptonExpr::Conditional_elseifContext::getRuleIndex() const {
  return KryptonExpr::RuleConditional_elseif;
}

antlrcpp::Any KryptonExpr::Conditional_elseifContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonExprVisitor*>(visitor))
    return parserVisitor->visitConditional_elseif(this);
  else
    return visitor->visitChildren(this);
}

KryptonExpr::Conditional_elseifContext* KryptonExpr::conditional_elseif() {
  Conditional_elseifContext *_localctx = _tracker.createInstance<Conditional_elseifContext>(_ctx, getState());
  enterRule(_localctx, 26, KryptonExpr::RuleConditional_elseif);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(114);
    match(KryptonExpr::ELSEIF);
    setState(115);
    match(KryptonExpr::LEFT_PARENTHESIS);
    setState(116);
    expr();
    setState(117);
    match(KryptonExpr::RIGHT_PARENTHESIS);
    setState(118);
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

KryptonExpr::Conditional_elseContext::Conditional_elseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KryptonExpr::Conditional_elseContext::ELSE() {
  return getToken(KryptonExpr::ELSE, 0);
}

KryptonExpr::ExprContext* KryptonExpr::Conditional_elseContext::expr() {
  return getRuleContext<KryptonExpr::ExprContext>(0);
}


size_t KryptonExpr::Conditional_elseContext::getRuleIndex() const {
  return KryptonExpr::RuleConditional_else;
}

antlrcpp::Any KryptonExpr::Conditional_elseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KryptonExprVisitor*>(visitor))
    return parserVisitor->visitConditional_else(this);
  else
    return visitor->visitChildren(this);
}

KryptonExpr::Conditional_elseContext* KryptonExpr::conditional_else() {
  Conditional_elseContext *_localctx = _tracker.createInstance<Conditional_elseContext>(_ctx, getState());
  enterRule(_localctx, 28, KryptonExpr::RuleConditional_else);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(120);
    match(KryptonExpr::ELSE);
    setState(121);
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
std::vector<dfa::DFA> KryptonExpr::_decisionToDFA;
atn::PredictionContextCache KryptonExpr::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN KryptonExpr::_atn;
std::vector<uint16_t> KryptonExpr::_serializedATN;

std::vector<std::string> KryptonExpr::_ruleNames = {
  "literal_value", "value", "function_call", "call_operator", "call_parameters", 
  "basic_value", "value_visitor", "expr", "formular", "comparation", "sum", 
  "term", "conditional", "conditional_elseif", "conditional_else"
};

std::vector<std::string> KryptonExpr::_literalNames = {
  "", "'c8'", "'i32'", "'struct'", "'type'", "'if'", "'elseif'", "'else'", 
  "'{'", "'}'", "';'", "':'", "'->'", "'<'", "'>'", "'('", "')'", "'''", 
  "'\"'", "','", "'.'", "'+'", "'-'", "'*'", "'/'", "'='"
};

std::vector<std::string> KryptonExpr::_symbolicNames = {
  "", "C8", "I32", "STRUCT", "TYPE", "IF", "ELSEIF", "ELSE", "LEFT_BRACE", 
  "RIGHT_BRACE", "SEMICOLON", "COLON", "RIGHT_ARROW", "LESS_THAN", "GREATER_THAN", 
  "LEFT_PARENTHESIS", "RIGHT_PARENTHESIS", "SINGLE_QUOTE", "DOUBLE_QUOTE", 
  "COMMA", "PERIOD", "PLUS", "MINUS", "MULTIPLY", "DIVIDE", "EQUAL", "IDENTIFIER", 
  "INT", "CHAR", "WHITESPACE"
};

dfa::Vocabulary KryptonExpr::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> KryptonExpr::_tokenNames;

KryptonExpr::Initializer::Initializer() {
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
    0x3, 0x1f, 0x7e, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x5, 0x3, 0x26, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x6, 0x4, 
    0x2a, 0xa, 0x4, 0xd, 0x4, 0xe, 0x4, 0x2b, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x6, 0x5, 0x6, 0x33, 0xa, 0x6, 0x3, 0x6, 0x3, 0x6, 0x7, 
    0x6, 0x37, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0x3a, 0xb, 0x6, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x41, 0xa, 0x7, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 0x46, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0x49, 
    0xb, 0x8, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x4d, 0xa, 0x9, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x56, 
    0xa, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0x5b, 0xa, 0xc, 0xc, 
    0xc, 0xe, 0xc, 0x5e, 0xb, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 
    0x63, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0x66, 0xb, 0xd, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0x6e, 0xa, 0xe, 0xc, 
    0xe, 0xe, 0xe, 0x71, 0xb, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x2, 0x2, 0x11, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 
    0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x2, 0x5, 0x3, 0x2, 0x1d, 
    0x1e, 0x3, 0x2, 0x17, 0x18, 0x3, 0x2, 0x19, 0x1a, 0x2, 0x7a, 0x2, 0x20, 
    0x3, 0x2, 0x2, 0x2, 0x4, 0x25, 0x3, 0x2, 0x2, 0x2, 0x6, 0x27, 0x3, 0x2, 
    0x2, 0x2, 0x8, 0x2d, 0x3, 0x2, 0x2, 0x2, 0xa, 0x32, 0x3, 0x2, 0x2, 0x2, 
    0xc, 0x40, 0x3, 0x2, 0x2, 0x2, 0xe, 0x42, 0x3, 0x2, 0x2, 0x2, 0x10, 
    0x4c, 0x3, 0x2, 0x2, 0x2, 0x12, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x14, 0x55, 
    0x3, 0x2, 0x2, 0x2, 0x16, 0x57, 0x3, 0x2, 0x2, 0x2, 0x18, 0x5f, 0x3, 
    0x2, 0x2, 0x2, 0x1a, 0x67, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x74, 0x3, 0x2, 
    0x2, 0x2, 0x1e, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x20, 0x21, 0x9, 0x2, 0x2, 
    0x2, 0x21, 0x3, 0x3, 0x2, 0x2, 0x2, 0x22, 0x26, 0x5, 0x2, 0x2, 0x2, 
    0x23, 0x26, 0x5, 0x6, 0x4, 0x2, 0x24, 0x26, 0x7, 0x1c, 0x2, 0x2, 0x25, 
    0x22, 0x3, 0x2, 0x2, 0x2, 0x25, 0x23, 0x3, 0x2, 0x2, 0x2, 0x25, 0x24, 
    0x3, 0x2, 0x2, 0x2, 0x26, 0x5, 0x3, 0x2, 0x2, 0x2, 0x27, 0x29, 0x7, 
    0x1c, 0x2, 0x2, 0x28, 0x2a, 0x5, 0x8, 0x5, 0x2, 0x29, 0x28, 0x3, 0x2, 
    0x2, 0x2, 0x2a, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x2b, 0x29, 0x3, 0x2, 0x2, 
    0x2, 0x2b, 0x2c, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x7, 0x3, 0x2, 0x2, 0x2, 
    0x2d, 0x2e, 0x7, 0x11, 0x2, 0x2, 0x2e, 0x2f, 0x5, 0xa, 0x6, 0x2, 0x2f, 
    0x30, 0x7, 0x12, 0x2, 0x2, 0x30, 0x9, 0x3, 0x2, 0x2, 0x2, 0x31, 0x33, 
    0x5, 0x10, 0x9, 0x2, 0x32, 0x31, 0x3, 0x2, 0x2, 0x2, 0x32, 0x33, 0x3, 
    0x2, 0x2, 0x2, 0x33, 0x38, 0x3, 0x2, 0x2, 0x2, 0x34, 0x35, 0x7, 0x15, 
    0x2, 0x2, 0x35, 0x37, 0x5, 0x10, 0x9, 0x2, 0x36, 0x34, 0x3, 0x2, 0x2, 
    0x2, 0x37, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x38, 0x36, 0x3, 0x2, 0x2, 0x2, 
    0x38, 0x39, 0x3, 0x2, 0x2, 0x2, 0x39, 0xb, 0x3, 0x2, 0x2, 0x2, 0x3a, 
    0x38, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x41, 0x5, 0x4, 0x3, 0x2, 0x3c, 0x3d, 
    0x7, 0x11, 0x2, 0x2, 0x3d, 0x3e, 0x5, 0x10, 0x9, 0x2, 0x3e, 0x3f, 0x7, 
    0x12, 0x2, 0x2, 0x3f, 0x41, 0x3, 0x2, 0x2, 0x2, 0x40, 0x3b, 0x3, 0x2, 
    0x2, 0x2, 0x40, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x41, 0xd, 0x3, 0x2, 0x2, 
    0x2, 0x42, 0x47, 0x5, 0xc, 0x7, 0x2, 0x43, 0x44, 0x7, 0x16, 0x2, 0x2, 
    0x44, 0x46, 0x5, 0x4, 0x3, 0x2, 0x45, 0x43, 0x3, 0x2, 0x2, 0x2, 0x46, 
    0x49, 0x3, 0x2, 0x2, 0x2, 0x47, 0x45, 0x3, 0x2, 0x2, 0x2, 0x47, 0x48, 
    0x3, 0x2, 0x2, 0x2, 0x48, 0xf, 0x3, 0x2, 0x2, 0x2, 0x49, 0x47, 0x3, 
    0x2, 0x2, 0x2, 0x4a, 0x4d, 0x5, 0x1a, 0xe, 0x2, 0x4b, 0x4d, 0x5, 0x12, 
    0xa, 0x2, 0x4c, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x4b, 0x3, 0x2, 0x2, 
    0x2, 0x4d, 0x11, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x4f, 0x5, 0x14, 0xb, 0x2, 
    0x4f, 0x13, 0x3, 0x2, 0x2, 0x2, 0x50, 0x56, 0x5, 0x16, 0xc, 0x2, 0x51, 
    0x52, 0x5, 0x16, 0xc, 0x2, 0x52, 0x53, 0x7, 0x1b, 0x2, 0x2, 0x53, 0x54, 
    0x5, 0x16, 0xc, 0x2, 0x54, 0x56, 0x3, 0x2, 0x2, 0x2, 0x55, 0x50, 0x3, 
    0x2, 0x2, 0x2, 0x55, 0x51, 0x3, 0x2, 0x2, 0x2, 0x56, 0x15, 0x3, 0x2, 
    0x2, 0x2, 0x57, 0x5c, 0x5, 0x18, 0xd, 0x2, 0x58, 0x59, 0x9, 0x3, 0x2, 
    0x2, 0x59, 0x5b, 0x5, 0x18, 0xd, 0x2, 0x5a, 0x58, 0x3, 0x2, 0x2, 0x2, 
    0x5b, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x5c, 
    0x5d, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x17, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x5c, 
    0x3, 0x2, 0x2, 0x2, 0x5f, 0x64, 0x5, 0xe, 0x8, 0x2, 0x60, 0x61, 0x9, 
    0x4, 0x2, 0x2, 0x61, 0x63, 0x5, 0xe, 0x8, 0x2, 0x62, 0x60, 0x3, 0x2, 
    0x2, 0x2, 0x63, 0x66, 0x3, 0x2, 0x2, 0x2, 0x64, 0x62, 0x3, 0x2, 0x2, 
    0x2, 0x64, 0x65, 0x3, 0x2, 0x2, 0x2, 0x65, 0x19, 0x3, 0x2, 0x2, 0x2, 
    0x66, 0x64, 0x3, 0x2, 0x2, 0x2, 0x67, 0x68, 0x7, 0x7, 0x2, 0x2, 0x68, 
    0x69, 0x7, 0x11, 0x2, 0x2, 0x69, 0x6a, 0x5, 0x10, 0x9, 0x2, 0x6a, 0x6b, 
    0x7, 0x12, 0x2, 0x2, 0x6b, 0x6f, 0x5, 0x10, 0x9, 0x2, 0x6c, 0x6e, 0x5, 
    0x1c, 0xf, 0x2, 0x6d, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x71, 0x3, 0x2, 
    0x2, 0x2, 0x6f, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x70, 0x3, 0x2, 0x2, 
    0x2, 0x70, 0x72, 0x3, 0x2, 0x2, 0x2, 0x71, 0x6f, 0x3, 0x2, 0x2, 0x2, 
    0x72, 0x73, 0x5, 0x1e, 0x10, 0x2, 0x73, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x74, 
    0x75, 0x7, 0x8, 0x2, 0x2, 0x75, 0x76, 0x7, 0x11, 0x2, 0x2, 0x76, 0x77, 
    0x5, 0x10, 0x9, 0x2, 0x77, 0x78, 0x7, 0x12, 0x2, 0x2, 0x78, 0x79, 0x5, 
    0x10, 0x9, 0x2, 0x79, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x7b, 0x7, 0x9, 
    0x2, 0x2, 0x7b, 0x7c, 0x5, 0x10, 0x9, 0x2, 0x7c, 0x1f, 0x3, 0x2, 0x2, 
    0x2, 0xd, 0x25, 0x2b, 0x32, 0x38, 0x40, 0x47, 0x4c, 0x55, 0x5c, 0x64, 
    0x6f, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

KryptonExpr::Initializer KryptonExpr::_init;
