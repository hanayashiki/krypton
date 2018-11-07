
// Generated from Krypton.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  KryptonParser : public antlr4::Parser {
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
    RuleProgram = 0, RuleBasic_types = 1, RuleType_identifier = 2, RuleGeneric_specifier = 3, 
    RuleType_specifier = 4, RuleBasic_declaration = 5, RuleInited_declaration = 6, 
    RuleUninited_declaration = 7, RuleDeclaration = 8, RuleStruct_specifier = 9, 
    RuleStruct_generic_parameter = 10, RuleStruct_generic_argument = 11, 
    RuleStruct_generic_argument_list = 12, RuleStruct_generic_arguments = 13, 
    RuleStruct_generic_parameter_list = 14, RuleStruct_generic_parameters = 15, 
    RuleFunction_specifier = 16, RuleFunction_parameter = 17, RuleFunction_parameter_list = 18, 
    RuleFunction_parameters = 19, RuleLiteral_value = 20, RuleValue = 21, 
    RuleFunction_call = 22, RuleCall_operator = 23, RuleCall_parameters = 24, 
    RuleBasic_value = 25, RuleValue_visitor = 26, RuleExpr = 27, RuleFormular = 28, 
    RuleComparation = 29, RuleSum = 30, RuleTerm = 31, RuleConditional = 32, 
    RuleConditional_elseif = 33, RuleConditional_else = 34
  };

  KryptonParser(antlr4::TokenStream *input);
  ~KryptonParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ProgramContext;
  class Basic_typesContext;
  class Type_identifierContext;
  class Generic_specifierContext;
  class Type_specifierContext;
  class Basic_declarationContext;
  class Inited_declarationContext;
  class Uninited_declarationContext;
  class DeclarationContext;
  class Struct_specifierContext;
  class Struct_generic_parameterContext;
  class Struct_generic_argumentContext;
  class Struct_generic_argument_listContext;
  class Struct_generic_argumentsContext;
  class Struct_generic_parameter_listContext;
  class Struct_generic_parametersContext;
  class Function_specifierContext;
  class Function_parameterContext;
  class Function_parameter_listContext;
  class Function_parametersContext;
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

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<DeclarationContext *> declaration();
    DeclarationContext* declaration(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  Basic_typesContext : public antlr4::ParserRuleContext {
  public:
    Basic_typesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *C8();
    antlr4::tree::TerminalNode *I32();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Basic_typesContext* basic_types();

  class  Type_identifierContext : public antlr4::ParserRuleContext {
  public:
    Type_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Basic_typesContext *basic_types();
    antlr4::tree::TerminalNode *IDENTIFIER();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_identifierContext* type_identifier();

  class  Generic_specifierContext : public antlr4::ParserRuleContext {
  public:
    Generic_specifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    Struct_generic_argumentsContext *struct_generic_arguments();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Generic_specifierContext* generic_specifier();

  class  Type_specifierContext : public antlr4::ParserRuleContext {
  public:
    Type_specifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Type_identifierContext *type_identifier();
    Struct_specifierContext *struct_specifier();
    Generic_specifierContext *generic_specifier();
    Function_specifierContext *function_specifier();
    antlr4::tree::TerminalNode *LEFT_PARENTHESIS();
    antlr4::tree::TerminalNode *RIGHT_PARENTHESIS();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_specifierContext* type_specifier();

  class  Basic_declarationContext : public antlr4::ParserRuleContext {
  public:
    Basic_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Type_specifierContext *type_specifier();
    antlr4::tree::TerminalNode *IDENTIFIER();
    Struct_generic_parametersContext *struct_generic_parameters();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Basic_declarationContext* basic_declaration();

  class  Inited_declarationContext : public antlr4::ParserRuleContext {
  public:
    Inited_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Basic_declarationContext *basic_declaration();
    antlr4::tree::TerminalNode *COLON();
    ExprContext *expr();
    antlr4::tree::TerminalNode *SEMICOLON();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Inited_declarationContext* inited_declaration();

  class  Uninited_declarationContext : public antlr4::ParserRuleContext {
  public:
    Uninited_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Basic_declarationContext *basic_declaration();
    antlr4::tree::TerminalNode *SEMICOLON();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Uninited_declarationContext* uninited_declaration();

  class  DeclarationContext : public antlr4::ParserRuleContext {
  public:
    DeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Inited_declarationContext *inited_declaration();
    Uninited_declarationContext *uninited_declaration();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationContext* declaration();

  class  Struct_specifierContext : public antlr4::ParserRuleContext {
  public:
    Struct_specifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRUCT();
    antlr4::tree::TerminalNode *LEFT_BRACE();
    antlr4::tree::TerminalNode *RIGHT_BRACE();
    Struct_generic_parametersContext *struct_generic_parameters();
    std::vector<DeclarationContext *> declaration();
    DeclarationContext* declaration(size_t i);
    antlr4::tree::TerminalNode *IDENTIFIER();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Struct_specifierContext* struct_specifier();

  class  Struct_generic_parameterContext : public antlr4::ParserRuleContext {
  public:
    Struct_generic_parameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TYPE();
    antlr4::tree::TerminalNode *IDENTIFIER();
    Type_specifierContext *type_specifier();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Struct_generic_parameterContext* struct_generic_parameter();

  class  Struct_generic_argumentContext : public antlr4::ParserRuleContext {
  public:
    Struct_generic_argumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Type_specifierContext *type_specifier();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Struct_generic_argumentContext* struct_generic_argument();

  class  Struct_generic_argument_listContext : public antlr4::ParserRuleContext {
  public:
    Struct_generic_argument_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Struct_generic_argumentContext *> struct_generic_argument();
    Struct_generic_argumentContext* struct_generic_argument(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Struct_generic_argument_listContext* struct_generic_argument_list();

  class  Struct_generic_argumentsContext : public antlr4::ParserRuleContext {
  public:
    Struct_generic_argumentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LESS_THAN();
    Struct_generic_argument_listContext *struct_generic_argument_list();
    antlr4::tree::TerminalNode *GREATER_THAN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Struct_generic_argumentsContext* struct_generic_arguments();

  class  Struct_generic_parameter_listContext : public antlr4::ParserRuleContext {
  public:
    Struct_generic_parameter_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Struct_generic_parameterContext *> struct_generic_parameter();
    Struct_generic_parameterContext* struct_generic_parameter(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Struct_generic_parameter_listContext* struct_generic_parameter_list();

  class  Struct_generic_parametersContext : public antlr4::ParserRuleContext {
  public:
    Struct_generic_parametersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LESS_THAN();
    Struct_generic_parameter_listContext *struct_generic_parameter_list();
    antlr4::tree::TerminalNode *GREATER_THAN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Struct_generic_parametersContext* struct_generic_parameters();

  class  Function_specifierContext : public antlr4::ParserRuleContext {
  public:
    Function_specifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Function_parametersContext *function_parameters();
    antlr4::tree::TerminalNode *RIGHT_ARROW();
    Type_specifierContext *type_specifier();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_specifierContext* function_specifier();

  class  Function_parameterContext : public antlr4::ParserRuleContext {
  public:
    Function_parameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Type_specifierContext *type_specifier();
    antlr4::tree::TerminalNode *IDENTIFIER();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_parameterContext* function_parameter();

  class  Function_parameter_listContext : public antlr4::ParserRuleContext {
  public:
    Function_parameter_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<Function_parameterContext *> function_parameter();
    Function_parameterContext* function_parameter(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_parameter_listContext* function_parameter_list();

  class  Function_parametersContext : public antlr4::ParserRuleContext {
  public:
    Function_parametersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_PARENTHESIS();
    Function_parameter_listContext *function_parameter_list();
    antlr4::tree::TerminalNode *RIGHT_PARENTHESIS();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_parametersContext* function_parameters();

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

