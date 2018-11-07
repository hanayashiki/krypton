parser grammar KryptonExpr;
options { tokenVocab=KryptonLexer; }

/* Atoms */

literal_value : INT | CHAR ;

value : literal_value | function_call | IDENTIFIER ;

function_call : IDENTIFIER call_operator+ ;

call_operator : LEFT_PARENTHESIS call_parameters RIGHT_PARENTHESIS ;

call_parameters : (expr?) (COMMA expr)* ;   

basic_value : value | LEFT_PARENTHESIS expr RIGHT_PARENTHESIS;

value_visitor : basic_value (PERIOD value)* ;

expr : conditional | formular ;

/* formular expressions */

formular : comparation ;

comparation : sum 
            | sum EQUAL sum ;

sum : term ((PLUS | MINUS) term)* ;

term : value_visitor ((MULTIPLY | DIVIDE) value_visitor)*; 

/* conditional expressions */

conditional : IF 
            LEFT_PARENTHESIS expr RIGHT_PARENTHESIS 
            expr 
            conditional_elseif*
            conditional_else
            ;

conditional_elseif :
            ELSEIF
            LEFT_PARENTHESIS expr RIGHT_PARENTHESIS 
            expr ;

conditional_else :
            ELSE expr ;
