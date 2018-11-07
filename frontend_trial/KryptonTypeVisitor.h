
// Generated from KryptonType.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "KryptonTypeParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by KryptonTypeParser.
 */
class  KryptonTypeVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by KryptonTypeParser.
   */
    virtual antlrcpp::Any visitBasic_types(KryptonTypeParser::Basic_typesContext *context) = 0;

    virtual antlrcpp::Any visitType_identifier(KryptonTypeParser::Type_identifierContext *context) = 0;

    virtual antlrcpp::Any visitGeneric_specifier(KryptonTypeParser::Generic_specifierContext *context) = 0;

    virtual antlrcpp::Any visitType_specifier(KryptonTypeParser::Type_specifierContext *context) = 0;

    virtual antlrcpp::Any visitBasic_declaration(KryptonTypeParser::Basic_declarationContext *context) = 0;

    virtual antlrcpp::Any visitInited_declaration(KryptonTypeParser::Inited_declarationContext *context) = 0;

    virtual antlrcpp::Any visitUninited_declaration(KryptonTypeParser::Uninited_declarationContext *context) = 0;

    virtual antlrcpp::Any visitDeclaration(KryptonTypeParser::DeclarationContext *context) = 0;

    virtual antlrcpp::Any visitStruct_specifier(KryptonTypeParser::Struct_specifierContext *context) = 0;

    virtual antlrcpp::Any visitStruct_generic_parameter(KryptonTypeParser::Struct_generic_parameterContext *context) = 0;

    virtual antlrcpp::Any visitStruct_generic_argument(KryptonTypeParser::Struct_generic_argumentContext *context) = 0;

    virtual antlrcpp::Any visitStruct_generic_argument_list(KryptonTypeParser::Struct_generic_argument_listContext *context) = 0;

    virtual antlrcpp::Any visitStruct_generic_arguments(KryptonTypeParser::Struct_generic_argumentsContext *context) = 0;

    virtual antlrcpp::Any visitStruct_generic_parameter_list(KryptonTypeParser::Struct_generic_parameter_listContext *context) = 0;

    virtual antlrcpp::Any visitStruct_generic_parameters(KryptonTypeParser::Struct_generic_parametersContext *context) = 0;

    virtual antlrcpp::Any visitFunction_specifier(KryptonTypeParser::Function_specifierContext *context) = 0;

    virtual antlrcpp::Any visitFunction_parameter(KryptonTypeParser::Function_parameterContext *context) = 0;

    virtual antlrcpp::Any visitFunction_parameter_list(KryptonTypeParser::Function_parameter_listContext *context) = 0;

    virtual antlrcpp::Any visitFunction_parameters(KryptonTypeParser::Function_parametersContext *context) = 0;

    virtual antlrcpp::Any visitLiteral_value(KryptonTypeParser::Literal_valueContext *context) = 0;

    virtual antlrcpp::Any visitValue(KryptonTypeParser::ValueContext *context) = 0;

    virtual antlrcpp::Any visitFunction_call(KryptonTypeParser::Function_callContext *context) = 0;

    virtual antlrcpp::Any visitCall_operator(KryptonTypeParser::Call_operatorContext *context) = 0;

    virtual antlrcpp::Any visitCall_parameters(KryptonTypeParser::Call_parametersContext *context) = 0;

    virtual antlrcpp::Any visitBasic_value(KryptonTypeParser::Basic_valueContext *context) = 0;

    virtual antlrcpp::Any visitValue_visitor(KryptonTypeParser::Value_visitorContext *context) = 0;

    virtual antlrcpp::Any visitExpr(KryptonTypeParser::ExprContext *context) = 0;

    virtual antlrcpp::Any visitFormular(KryptonTypeParser::FormularContext *context) = 0;

    virtual antlrcpp::Any visitComparation(KryptonTypeParser::ComparationContext *context) = 0;

    virtual antlrcpp::Any visitSum(KryptonTypeParser::SumContext *context) = 0;

    virtual antlrcpp::Any visitTerm(KryptonTypeParser::TermContext *context) = 0;

    virtual antlrcpp::Any visitConditional(KryptonTypeParser::ConditionalContext *context) = 0;

    virtual antlrcpp::Any visitConditional_elseif(KryptonTypeParser::Conditional_elseifContext *context) = 0;

    virtual antlrcpp::Any visitConditional_else(KryptonTypeParser::Conditional_elseContext *context) = 0;


};

