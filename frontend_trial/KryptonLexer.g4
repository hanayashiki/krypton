lexer grammar KryptonLexer;

/* Keywords */

C8      : 'c8';
I32     : 'i32';

STRUCT  : 'struct';
TYPE    : 'type';

IF      : 'if';
ELSEIF  : 'elseif';
ELSE    : 'else';



/* Delimiters */

LEFT_BRACE  : '{';
RIGHT_BRACE : '}';
SEMICOLON : ';';
COLON       : ':';

RIGHT_ARROW : '->';

LESS_THAN : '<';
GREATER_THAN : '>';

LEFT_PARENTHESIS : '(';
RIGHT_PARENTHESIS : ')';

SINGLE_QUOTE : '\'';
DOUBLE_QUOTE : '"';

COMMA : ',';
PERIOD : '.';

PLUS : '+';
MINUS : '-';
MULTIPLY : '*';
DIVIDE : '/' ;

EQUAL : '=' ;

/* Numbers and Ids */

IDENTIFIER : [_a-zA-Z][_a-zA-Z0-9]* ;
INT        : [0-9]+ ;
CHAR       : SINGLE_QUOTE [a-z] SINGLE_QUOTE;

/* Miscellaneous */

WHITESPACE : [ \n\t\r]+ -> skip ;