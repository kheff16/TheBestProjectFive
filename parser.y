%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <iostream>

    #include "ast.hpp"
    #define YYINITDEPTH 10000
    #define YYDEBUG 1
    int yylex(void);
    void yyerror(const char *);
    
    extern ASTNode* astRoot;
%}

%error-verbose
/*%glr-parser*/

/* WRITEME: List all your tokens here */
%token U_MINUS
%token T_NUM 
%token T_NEW 
%token T_IF 
%token T_ELSE 
%token T_WHILE 
%token T_EQUAL
%token T_AND
%token T_OR
%token T_NOT
%token T_EXTENDS
%token T_DO
%token T_INTEGER
%token T_BOOLEAN
%token T_EQUALS
%token T_TRUE
%token T_FALSE
%token T_NONE
%token T_PRINT
%token T_RETURN
%token T_ID
%token T_PLUS
%token T_ARROW
%token T_MINUS
%token T_MULTIPLY 
%token T_DIVIDE 
%token T_GT
%token T_GTE
%token END 0 "end of file"

/* WRITEME: Specify precedence here */
%left T_OR
%left T_AND
%left T_GT
%left T_GTE
%left T_EQUALS
%left T_PLUS T_MINUS
%left T_MULTIPLY T_DIVIDE
%precedence T_NOT U_MINUS

%type <program_ptr> Start
%type <class_list_ptr> Classes
%type <class_ptr> Class
%type <declaration_list_ptr> members
%type <declaration_ptr> member
%type <identifier_list_ptr> mem
%type <method_ptr> method
%type <method_list_ptr> methods
%type <methodbody_ptr> body
%type <parameter_list_ptr> parameters parameter
%type <parameter_ptr> parm
%type <declaration_list_ptr> declarations
%type <declaration_ptr> declaration
%type <identifier_list_ptr> realDec
%type <statement_list_ptr> statements block
%type <statement_ptr> statement
%type <assignment_ptr> assign
%type <ifelse_ptr> iff
%type <while_ptr> whil
%type <dowhile_ptr> doo
%type <print_ptr> prin
%type <type_ptr> returnType type
%type <returnstatement_ptr> returnT
%type <expression_ptr> expr
%type <methodcall_ptr> MethodCall
%type <expression_list_ptr> Argument Arguments
%type <identifier_ptr> T_ID
%type <integer_ptr> T_NUM
%type <booleantype_ptr> T_TRUE T_FALSE
%%

Start         : Classes                                                       {astRoot = new ProgramNode($1);}
              ;

Classes       : Class Classes                                                 {$$ = $2; $$->push_front($1);}
              | Class                                                         {$$ = new std::list<ClassNode*>(); $$->push_front($1);}
              ;

Class         : T_ID '{' members methods '}'                                  {$$ = new ClassNode($1,NULL,$3,$4);}
              | T_ID T_EXTENDS T_ID '{' members methods'}'                    {$$ = new ClassNode($1,$3,$5,$6);}
              ;

members       : members member                                                {$$ = $1; $$->push_back($2);}
              | %empty                                                        {$$ = new std::list<DeclarationNode*>();} 
              ; 

member        : type mem ';'                                                  {$$ = new DeclarationNode($1,$2);}
              ;

mem           : T_ID                                                          {$$ = new std::list<IdentifierNode*>();$$->push_front($1);}
              ;

method        : T_ID '(' parameters ')' T_ARROW returnType '{' body '}'       {$$ = new MethodNode($1, $3, $6, $8);}
              ;

methods       : method methods                                                {$$ = $2; $$->push_front($1);}
              | %empty                                                        {$$ = new std::list<MethodNode*>();}
              ;

body          : declarations statements returnT                               {$$ = new MethodBodyNode($1, $2, $3);}
              ;

              
parameters    : parameter                                                     {$$ = $1;}
              | %empty                                                        {$$ = NULL;}
              ;

parameter     : parameter ',' parm                                            {$$ = $1; $$->push_back($3);} 
              | parm                                                          {$$ = new std::list<ParameterNode*>(); $$->push_back($1);}
              ;
 
parm          : type T_ID                                                     {$$ = new ParameterNode($1,$2);}           
              ;
              
declarations  : declarations declaration                                      {$$ = $1; $$->push_back($2);}
              | %empty                                                        {$$ = new std::list<DeclarationNode*>();}
              ;
              
declaration   : type realDec                                                  {$$ = new DeclarationNode($1,$2);}
              ;

realDec       : T_ID ',' realDec                                              {$$ = $3; $$->push_front($1);}
              | T_ID ';'                                                      {$$ = new std::list<IdentifierNode*>();$$->push_front($1);}
              ;

statements    : statement statements                                          {$$ = $2; $$->push_front($1);}
              | %empty                                                        {$$ = new std::list<StatementNode*>(); /* Could run into errors here and in block*/ }
              ;

block         : statement block                                               {$$ = $2; $$->push_front($1);}
              | statement                                                     {$$ = new std::list<StatementNode*>(); $$->push_front($1);}
              ;

statement     : assign                                                        {$$ = $1;}                          
              | MethodCall ";"                                                {$$ = new CallNode($1);}
              | iff                                                           {$$ = $1;}
              | whil                                                          {$$ = $1;}
              | doo                                                           {$$ = $1;}
              | prin                                                          {$$ = $1;}
              ;

assign        : T_ID T_EQUAL expr ';'                                         {$$ = new AssignmentNode($1, NULL, $3);}
              | T_ID '.' T_ID T_EQUAL expr ';'                                {$$ = new AssignmentNode($1, $3, $5);}
              ;

iff           : T_IF expr '{' block '}' T_ELSE '{' block '}'                  {$$ = new IfElseNode($2,$4,$8);}
              | T_IF expr '{' block '}'                                       {$$ = new IfElseNode($2,$4, NULL);}
              ;

whil          : T_WHILE expr '{' block '}'                                    {$$ = new WhileNode($2, $4);}
              ;

doo           : T_DO '{' block '}' T_WHILE '(' expr ')' ';'                   {$$ = new DoWhileNode($3, $7);}
              ;

prin          : T_PRINT expr ';'                                              {$$ = new PrintNode($2);}
              ;
              
returnType    : type                                                          {$$ = $1;}                     
              | T_NONE                                                        {$$ = new NoneNode();}
              ;

type          : T_INTEGER                                                     {$$ = new IntegerTypeNode();}
              | T_BOOLEAN                                                     {$$ = new BooleanTypeNode();}
              | T_ID                                                          {$$ = new ObjectTypeNode($1);}
              ;

returnT       : T_RETURN expr ';'                                             {$$ = new ReturnStatementNode($2);}
              | %empty                                                        {$$ = NULL; /* May be different*/}
              ;

expr          : expr T_PLUS expr                                              {$$ = new PlusNode($1, $3);}
	            |	expr T_MINUS expr                                             {$$ = new MinusNode($1, $3);} 
	            |	expr T_MULTIPLY expr                                          {$$ = new TimesNode($1, $3);}
	            |	expr T_DIVIDE expr                                            {$$ = new DivideNode($1, $3);}
	            |	expr T_GT expr                                                {$$ = new GreaterNode($1, $3);}
	            |	expr T_GTE expr                                               {$$ = new GreaterEqualNode($1, $3);}
	            |	expr T_EQUALS expr                                            {$$ = new EqualNode($1, $3);}
	            |	expr T_AND expr                                               {$$ = new AndNode($1, $3);}
	            |	expr T_OR expr                                                {$$ = new OrNode($1, $3);}
	            |	T_NOT expr %prec T_NOT                                        {$$ = new NotNode($2);}
	            |	T_MINUS expr %prec U_MINUS                                    {$$ = new NegationNode($2);}
	            |	T_ID                                                          {$$ = new VariableNode($1);}
	            |	T_ID '.' T_ID                                                 {$$ = new MemberAccessNode($1,$3);}
	            |	MethodCall                                                    {$$ = $1;}
	            |	'(' expr ')'                                                  {$$ = $2;}
	            |	T_NUM                                                         {$$ = new IntegerLiteralNode($1);}
	            |	T_TRUE                                                        {/*$$ = new BooleanLiteralNode($1);*/}
	            |	T_FALSE                                                       {/*$$ = new BooleanLiteralNode($1);*/}
	            |	T_NEW T_ID                                                    {$$ = new NewNode($2, NULL);}
	            |	T_NEW T_ID '(' Arguments ')'                                  {$$ = new NewNode($2, $4);}
              ;

MethodCall    :	T_ID '(' Arguments ')'                                        {$$ = new MethodCallNode($1, NULL, $3);}  
	            |	T_ID '.' T_ID '(' Arguments ')'                               {$$ = new MethodCallNode($1, $3, $5);}
              ;

Arguments	    :	Argument                                                      {$$ = $1;}
	            |	%empty                                                        {$$ = new std::list<ExpressionNode*>();}
              ;

Argument      :	Argument ',' expr                                             { $$ = $1; $$->push_back($3); }
	            |	expr                                                          { $$ = new std::list<ExpressionNode*>(); $$->push_back($1);}
              ;
%%

extern int yylineno;

void yyerror(const char *s) {
  fprintf(stderr, "%s at line %d\n", s, yylineno);
  exit(0);
}
