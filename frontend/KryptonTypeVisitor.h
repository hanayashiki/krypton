
// Generated from d:\krypton\frontend\KryptonType.g4 by ANTLR 4.7.1

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

    virtual antlrcpp::Any visitUninited_declaration(KryptonTypeParser::Uninited_declarationContext *context) = 0;

    virtual antlrcpp::Any visitInited_declaration(KryptonTypeParser::Inited_declarationContext *context) = 0;

    virtual antlrcpp::Any visitDeclaration(KryptonTypeParser::DeclarationContext *context) = 0;

    virtual antlrcpp::Any visitStruct_declaration(KryptonTypeParser::Struct_declarationContext *context) = 0;


};

