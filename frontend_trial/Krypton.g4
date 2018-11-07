grammar Krypton;
options { tokenVocab=KryptonLexer; }
import KryptonType;

program:
    declaration*
    EOF ;
    