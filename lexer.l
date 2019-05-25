%option yylineno
%pointer

%{
    #include <stdlib.h>
    #include <errno.h>
    #include <limits.h>
    #include "ast.hpp"
    #include "parser.hpp"
    void yyerror(const char *);
%}

%x COMMENT

%%

  /* WRITEME: Write your Flex token rules here */
"/*"                                { BEGIN(COMMENT); }
<COMMENT>"*/"                       { BEGIN(INITIAL); }
<COMMENT>.                          ;
<COMMENT>"\n"                       ;
<COMMENT><<EOF>>                    { yyerror("dangling comment"); }

new                                 { return T_NEW;}
if                                  { return T_IF;}
else                                { return T_ELSE;}
while                               { return T_WHILE;}
and                                 { return T_AND;}
or                                  { return T_OR;}
not                                 { return T_NOT;}
extends                             { return T_EXTENDS;}
do                                  { return T_DO;}
integer                             { return T_INTEGER;}
equals                              { return T_EQUALS; }
boolean                             { return T_BOOLEAN;}
true                                { IntegerNode* a = new IntegerNode(1); yylval.booleanliteral_ptr = new BooleanLiteralNode(a); return T_TRUE;}
false                               { IntegerNode* b = new IntegerNode(0); yylval.booleanliteral_ptr = new BooleanLiteralNode(b); return T_FALSE;}
none                                { return T_NONE;}
print                               { return T_PRINT;}
return                              { return T_RETURN; }
0|([1-9][0-9]*)                     { yylval.integer_ptr = new IntegerNode(std::atoi(yytext)); return T_NUM;}
[\+]                                { return T_PLUS;}
->                                  { return T_ARROW; } 
[\-]                                { return T_MINUS; }
>=                                  { return T_GTE; }
=                                   { return T_EQUAL; }
>                                   { return T_GT; }
[\/]                                { return T_DIVIDE; }     
[\*]                                { return T_MULTIPLY; }
[ \t\n]                             ; // Skip white space */
[a-zA-Z][0-9a-zA-Z]*                { yylval.identifier_ptr = new IdentifierNode(yytext); return T_ID;}
[\(\)\{\}\/\,\;\.]                  { return *yytext;}
.                                   { yyerror("invalid character"); }

%%

int yywrap(void) {
  return 1;
}
