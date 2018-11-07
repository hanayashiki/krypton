grammar KryptonType;
import KryptonLexer;
/* Basic types */

basic_types
        : C8 | I32 ;

type_identifier
        : basic_types | IDENTIFIER ;

/* declaration */

uninited_declaration
        : type_identifier IDENTIFIER SEMICOLON ;

/* i8 x : 233 ; */
inited_declaration
        : type_identifier IDENTIFIER COLON LITERAL SEMICOLON ;

declaration : 
        uninited_declaration 
        | inited_declaration ;

/* struct */

struct_declaration : 
        STRUCT (IDENTIFIER?) LEFT_BRACE
                (declaration)*
        RIGHT_BRACE SEMICOLON ;


