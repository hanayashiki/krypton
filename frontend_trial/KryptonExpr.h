
// Generated from d:\krypton\frontend_trial/KryptonExpr.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  KryptonExpr : public antlr4::Parser {
public:
  enum {
    C8 = 1, I32 = 2, STRUCT = 3, TYPE = 4, IF = 5, ELSEIF = 6, ELSE = 7, 
    LEFT_BRACE = 8, RIGHT_BRACE = 9, SEMICOLON = 10, COLON = 11, RIGHT_ARROW = 12, 
    LESS_THAN = 13, GREATER_THAN = 14, LEFT_PARENTHESIS = 15, RIGHT_PARENTHESIS = 16, 
    SINGLE_QUOTE = 17, DOUBLE_QUOTE = 18, COMMA = 19, PERIOD = 20, PLUS = 21, 
    MINUS = 22, MULTIPLY = 23, DIVIDE = 24, EQUAL = 25, IDENTIFIER = 26, 
    INT = 27, CHAR = 28, WHITESPACE = 29
  };

  enum {
    RuleLiteral_value = 0, RuleValue = 1, RuleFunction_call = 2, RuleCall_operator = 3, 
    RuleCall_parameters = 4, RuleBasic_value = 5, RuleValue_visitor = 6, 
    RuleExpr = 7, RuleFormular = 8, RuleComparation = 9, RuleSum = 10, RuleTerm = 11, 
    RuleConditional = 12, RuleConditional_elseif = 13, RuleConditional_else = 14
  };

  KryptonExpr(antlr4::TokenStream *input);
  ~KryptonExpr();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class Literal_valueContext;
  class ValueContext;
  class Function_callContext;
  class Call_operatorContext;
  class Call_parametersContext;
  class Basic_valueContext;
  class Value_visitorContext;
  class ExprContext;
  class FormularContext;
  class ComparationContext;
  class SumContext;
  class TermContext;
  class ConditionalContext;
  class Conditional_elseifContext;
  class Conditional_elseContext; 

  class  Literal_valueContext : public antlr4::ParserRuleContext {
  public:
    Literal_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *CHAR();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Literal_valueContext* literal_value();

  class  ValueContext : public antlr4::ParserRuleContext {
  public:
    ValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Literal_valueContext *literal_value();
    Function_callContext *function_call();
    antlr4::tree::TerminalNode *IDENTIFIER();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ValueContext* value();

  class  Function_callContext : public antlr4::ParserRuleContext {
  public:
    Function_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    std::vector<Call_operatorContext *> call_operator();
    Call_operatorContext* call_operator(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_callContext* function_call();

  class  Call_operatorContext : public antlr4::ParserRuleContext {
  public:
    Call_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_PARENTHESIS();
    Call_parametersContext *call_parameters();
    antlr4::tree::TerminalNode *RIGHT_PARENTHESIS();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Call_operatorContext* call_operator();

  class  Call_parametersContext : public antlr4::ParserRuleContext {
  public:
    Call_parametersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Call_parametersContext* call_parameters();

  class  Basic_valueContext : public antlr4::ParserRuleContext {
  public:
    Basic_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ValueContext *value();
    antlr4::tree::TerminalNode *LEFT_PARENTHESIS();
    ExprContext *expr();
    antlr4::tree::TerminalNode *RIGHT_PARENTHESIS();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Basic_valueContext* basic_value();

  class  Value_visitorContext : public antlr4::ParserRuleContext {
  public:
    Value_visitorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Basic_valueContext *basic_value();
    std::vector<antlr4::tree::TerminalNode *> PERIOD();
    antlr4::tree::TerminalNode* PERIOD(size_t i);
    std::vector<ValueContext *> value();
    ValueContext* value(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Value_visitorContext* value_visitor();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConditionalContext *conditional();
    FormularContext *formular();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExprContext* expr();

  class  FormularContext : public antlr4::ParserRuleContext {
  public:
    FormularContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ComparationContext *comparation();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FormularContext* formular();

  class  ComparationContext : public antlr4::ParserRuleContext {
  public:
    ComparationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SumContext *> sum();
    SumContext* sum(size_t i);
    antlr4::tree::TerminalNode *EQUAL();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ComparationContext* comparation();

  class  SumContext : public antlr4::ParserRuleContext {
  public:
    SumContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TermContext *> term();
    TermContext* term(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PLUS();
    antlr4::tree::TerminalNode* PLUS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MINUS();
    antlr4::tree::TerminalNode* MINUS(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SumContext* sum();

  class  TermContext : public antlr4::ParserRuleContext {
  public:
    TermContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Value_visitorContext *> value_visitor();
    Value_visitorContext* value_visitor(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MULTIPLY();
    antlr4::tree::TerminalNode* MULTIPLY(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DIVIDE();
    antlr4::tree::TerminalNode* DIVIDE(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TermContext* term();

  class  ConditionalContext : public antlr4::ParserRuleContext {
  public:
    ConditionalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *LEFT_PARENTHESIS();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *RIGHT_PARENTHESIS();
    Conditional_elseContext *conditional_else();
    std::vector<Conditional_elseifContext *> conditional_elseif();
    Conditional_elseifContext* conditional_elseif(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConditionalContext* conditional();

  class  Conditional_elseifContext : public antlr4::ParserRuleContext {
  public:
    Conditional_elseifContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ELSEIF();
    antlr4::tree::TerminalNode *LEFT_PARENTHESIS();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *RIGHT_PARENTHESIS();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Conditional_elseifContext* conditional_elseif();

  class  Conditional_elseContext : public antlr4::ParserRuleContext {
  public:
    Conditional_elseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ELSE();
    ExprContext *expr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Conditional_elseContext* conditional_else();


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

