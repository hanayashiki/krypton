lexer grammar KryptonLexer;

/* Keywords */

C8      : 'c8';
I32     : 'i32';

LEFT_BRACE  : '{';
RIGHT_BRACE : '}';
SEMICOLON : ';';
COLON       : ':';

SINGLE_QUOTE : '\'';
DOUBLE_QUOTE : '"';

STRUCT  : 'struct';

/* Delimiters */


/* Numbers and Ids */

IDENTIFIER : [_a-zA-Z][_a-zA-Z0-9]* ;
INT        : [0-9]+ ;
CHAR       : SINGLE_QUOTE [a-z] SINGLE_QUOTE;

/* Literals */

LITERAL     : IDENTIFIER | INT | CHAR ;