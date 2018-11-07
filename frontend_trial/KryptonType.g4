grammar KryptonType;
options { tokenVocab=KryptonLexer; }
import KryptonExpr;
/* Basic types */

basic_types
        : C8 | I32 ;

type_identifier
        : basic_types | IDENTIFIER ;

generic_specifier
        : IDENTIFIER struct_generic_arguments ;

type_specifier
        : type_identifier | struct_specifier | generic_specifier | function_specifier | 
                LEFT_PARENTHESIS function_specifier RIGHT_PARENTHESIS ;

/* declaration */

/* i8 x : 233 ; */

basic_declaration 
        : type_specifier (IDENTIFIER?) (struct_generic_parameters?) ;

inited_declaration
        : basic_declaration COLON expr SEMICOLON ;

uninited_declaration
        : basic_declaration SEMICOLON ;

declaration : 
        inited_declaration | uninited_declaration ;

/* struct */

struct_specifier :
        STRUCT (IDENTIFIER?) (struct_generic_parameters)? LEFT_BRACE
                (declaration)*
        RIGHT_BRACE ;

struct_generic_parameter :
        TYPE IDENTIFIER
        | type_specifier IDENTIFIER ; 

struct_generic_argument :
        type_specifier ; /* TODO: Or expression */

struct_generic_argument_list :
        struct_generic_argument (COMMA struct_generic_argument)*
        | ;

struct_generic_arguments: 
        LESS_THAN struct_generic_argument_list GREATER_THAN ;

struct_generic_parameter_list :
        struct_generic_parameter (COMMA struct_generic_parameter)*
        | ;

struct_generic_parameters :
        LESS_THAN struct_generic_parameter_list GREATER_THAN ;


/* function */

function_specifier :
        function_parameters RIGHT_ARROW type_specifier ;

function_parameter :
        type_specifier (IDENTIFIER?) ;

function_parameter_list :
        (function_parameter?) (COMMA function_parameter)* ;

function_parameters:
        LEFT_PARENTHESIS function_parameter_list RIGHT_PARENTHESIS ;