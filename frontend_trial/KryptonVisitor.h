
// Generated from Krypton.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "KryptonParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by KryptonParser.
 */
class  KryptonVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by KryptonParser.
   */
    virtual antlrcpp::Any visitProgram(KryptonParser::ProgramContext *context) = 0;

    virtual antlrcpp::Any visitBasic_types(KryptonParser::Basic_typesContext *context) = 0;

    virtual antlrcpp::Any visitType_identifier(KryptonParser::Type_identifierContext *context) = 0;

    virtual antlrcpp::Any visitGeneric_specifier(KryptonParser::Generic_specifierContext *context) = 0;

    virtual antlrcpp::Any visitType_specifier(KryptonParser::Type_specifierContext *context) = 0;

    virtual antlrcpp::Any visitBasic_declaration(KryptonParser::Basic_declarationContext *context) = 0;

    virtual antlrcpp::Any visitInited_declaration(KryptonParser::Inited_declarationContext *context) = 0;

    virtual antlrcpp::Any visitUninited_declaration(KryptonParser::Uninited_declarationContext *context) = 0;

    virtual antlrcpp::Any visitDeclaration(KryptonParser::DeclarationContext *context) = 0;

    virtual antlrcpp::Any visitStruct_specifier(KryptonParser::Struct_specifierContext *context) = 0;

    virtual antlrcpp::Any visitStruct_generic_parameter(KryptonParser::Struct_generic_parameterContext *context) = 0;

    virtual antlrcpp::Any visitStruct_generic_argument(KryptonParser::Struct_generic_argumentContext *context) = 0;

    virtual antlrcpp::Any visitStruct_generic_argument_list(KryptonParser::Struct_generic_argument_listContext *context) = 0;

    virtual antlrcpp::Any visitStruct_generic_arguments(KryptonParser::Struct_generic_argumentsContext *context) = 0;

    virtual antlrcpp::Any visitStruct_generic_parameter_list(KryptonParser::Struct_generic_parameter_listContext *context) = 0;

    virtual antlrcpp::Any visitStruct_generic_parameters(KryptonParser::Struct_generic_parametersContext *context) = 0;

    virtual antlrcpp::Any visitFunction_specifier(KryptonParser::Function_specifierContext *context) = 0;

    virtual antlrcpp::Any visitFunction_parameter(KryptonParser::Function_parameterContext *context) = 0;

    virtual antlrcpp::Any visitFunction_parameter_list(KryptonParser::Function_parameter_listContext *context) = 0;

    virtual antlrcpp::Any visitFunction_parameters(KryptonParser::Function_parametersContext *context) = 0;

    virtual antlrcpp::Any visitLiteral_value(KryptonParser::Literal_valueContext *context) = 0;

    virtual antlrcpp::Any visitValue(KryptonParser::ValueContext *context) = 0;

    virtual antlrcpp::Any visitFunction_call(KryptonParser::Function_callContext *context) = 0;

    virtual antlrcpp::Any visitCall_operator(KryptonParser::Call_operatorContext *context) = 0;

    virtual antlrcpp::Any visitCall_parameters(KryptonParser::Call_parametersContext *context) = 0;

    virtual antlrcpp::Any visitBasic_value(KryptonParser::Basic_valueContext *context) = 0;

    virtual antlrcpp::Any visitValue_visitor(KryptonParser::Value_visitorContext *context) = 0;

    virtual antlrcpp::Any visitExpr(KryptonParser::ExprContext *context) = 0;

    virtual antlrcpp::Any visitFormular(KryptonParser::FormularContext *context) = 0;

    virtual antlrcpp::Any visitComparation(KryptonParser::ComparationContext *context) = 0;

    virtual antlrcpp::Any visitSum(KryptonParser::SumContext *context) = 0;

    virtual antlrcpp::Any visitTerm(KryptonParser::TermContext *context) = 0;

    virtual antlrcpp::Any visitConditional(KryptonParser::ConditionalContext *context) = 0;

    virtual antlrcpp::Any visitConditional_elseif(KryptonParser::Conditional_elseifContext *context) = 0;

    virtual antlrcpp::Any visitConditional_else(KryptonParser::Conditional_elseContext *context) = 0;


};

