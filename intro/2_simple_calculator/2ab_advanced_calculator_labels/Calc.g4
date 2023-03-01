grammar Calc;

prog:  stat+ EOF ;

stat:  expr NEWLINE           # printExpr
    |  ID '=' expr NEWLINE    # assign
    |  IF expr THEN stat NEWLINE ENDIF # if
    |  NEWLINE                # blank
    ;

expr: LPAR expr RPAR    # pars
    |  SUM LPAR args RPAR   # sum          // (expr (COMA expr)*)?
    |  SUB expr         # negate
    |  expr (MUL|DIV) expr    # prod_div
    |  expr (ADD|SUB) expr    # plus_sub
    |  INT              # int
    |  ID               # id
    ;

args: expr (COMA expr)*  # arg           //retornara un vector perque altres pugui tractar
    ;


IF: 'if';
THEN: 'then';
ENDIF: 'endif';

COMA: ',';
SUM: 'sum';
LPAR: '(';
RPAR: ')';
MUL :  '*' ;
DIV : '/';
ADD :  '+' ;
SUB : '-';
ID  :  [a-zA-Z]+ ;       // match identifiers
INT :  [0-9]+ ;          // match integers
NEWLINE: '\r'? '\n' ;    // return newlines to parser (is end-statement signal)
WS  :  [ \t]+ -> skip ;  // toss out whitespace
