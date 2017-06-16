%union{
	int intVal;
}
%token <intVal> INTEGER
%token STRING DOUBLE SCI_NOTATION CHAR
%token TYPE TYPE_VOID
%token CONSTANT
%token KEY_FOR KEY_WHILE KEY_DO KEY_IF KEY_ELSE KEY_SWITCH KEY_RETURN KEY_BREAK KEY_CONTINUE KEY_CONST KEY_STRUCT KEY_CASE KEY_DEFAULT
%token ID
%token OP_INCREMENT OP_DECREMENT OP_CMP OP_LAND OP_LOR

%left OP_LOR
%left OP_LAND
%left '!'
%left OP_CMP
%left '+' '-'
%left '*' '/' '%'
%nonassoc SIGN_PRECEDENCE
%left OP_INCREMENT OP_DECREMENT
%nonassoc ARR_IDX
%left '[' ']'

%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <string>
	#include "lex.yy.h"
	#include "y.tab.h"
	#include "SymbolTable.h"
	void yyerror(char *msg);
//	int yylex(void);
//	int sym[26];
	SymbolTable symbolTable;
	extern int num_lines;
	extern char line_buf[];
	extern char* yytext;
	int functionDefinitionExists = 0;
	int error_occurred = 0;
%}

%%

program: declaration ';' program
	|function_declaration '{' compound_statement '}' program {functionDefinitionExists = 1;}
	|
	;
if_else_statement: KEY_IF '(' expression ')' '{' compound_statement '}' KEY_ELSE '{' compound_statement '}'
	| KEY_IF '(' expression ')' '{' compound_statement '}'
	;
for_statement: KEY_FOR '(' optionalExpression ';' optionalExpression ';' optionalExpression ')' '{' compound_statement '}'
	;
while_statemnt: KEY_WHILE '(' expression ')' '{' compound_statement '}'
	| KEY_DO '{' compound_statement '}' KEY_WHILE '(' expression ')' ';'
	;
switch_statement: KEY_SWITCH '(' ID ')' '{' cases defaultCase '}'
	;
cases:KEY_CASE caseConstant ':' compound_statement
	|KEY_CASE caseConstant ':' compound_statement cases
	;
caseConstant:CONSTANT
	|INTEGER
	|DOUBLE
	|SCI_NOTATION
	|CHAR
	;
defaultCase: KEY_DEFAULT ':' compound_statement
	|
	;
optionalExpression: expression
	|
	;
compound_statement: declarations statements
	;
declarations: over1Declarations
	|
	;
over1Declarations: declaration_except_function ';'
	| declaration_except_function ';' over1Declarations
	;
statements: over1Statements
	|
	;

over1Statements: allKindsOfStatements
	| allKindsOfStatements over1Statements
	;

allKindsOfStatements: statement ';'
	| if_else_statement
	| for_statement
	| while_statemnt
	| switch_statement
	;

statement: ID '=' expression
	| ID arr_indices '=' expression
	| ID '(' expressions  ')'
	| ID '(' ')'
	| KEY_BREAK
	| KEY_CONTINUE
	| KEY_RETURN expression
	| ID OP_INCREMENT
	| ID OP_DECREMENT
	;
arr_indices: '[' expression ']'
	| '[' expression ']' arr_indices
	;
declaration: TYPE identifiers
	|KEY_CONST TYPE const_identifiers
	|function_declaration
	;
declaration_except_function:TYPE identifiers
	|KEY_CONST TYPE const_identifiers
	;

function_declaration: TYPE ID '(' parameters ')'
	|TYPE_VOID ID '(' parameters ')'
	;

parameters: parameters_over1
	|
	;
parameters_over1:TYPE ID arr_brackets ',' parameters_over1
	| TYPE ID ',' parameters_over1
	| TYPE ID arr_brackets
	| TYPE ID
	;

identifiers: identifier
	|identifier ',' identifiers
	;

identifier:
	ID
	|ID '=' expression
	|ID arr_brackets
	|ID arr_brackets '=' '{' expressions '}'
	|ID arr_brackets '=' '{' '}'
	;

arr_brackets: '[' INTEGER ']'
	|'[' INTEGER ']'  arr_brackets
	;

const_identifiers: const_identifier
	|const_identifier ',' const_identifiers
	;

const_identifier:ID '=' expression
	;

expressions: expression
	|expression ',' expressions
	;

expression: expression OP_LOR expression
	|expression OP_LAND expression
	|expression OP_CMP expression
	|'!' expression
	|expression '+' expression
	|expression '-' expression
	|expression '*' expression
	|expression '/' expression
	|expression '%' expression
	|ID OP_INCREMENT
	|ID OP_DECREMENT
	|INTEGER {}
	|DOUBLE
	|SCI_NOTATION
	|CHAR
	|ID
	|STRING
	|CONSTANT
	|'(' expression ')'
	|'+' expression %prec SIGN_PRECEDENCE
	|'-' expression %prec SIGN_PRECEDENCE
	|ID '(' expressions ')'
	|ID '(' ')'
	|ID arr_indices %prec ARR_IDX
	;
%%

void yyerror(const char* msg){
	fprintf( stderr, "*** Error at line %d: %s\n", num_lines, line_buf );
	fprintf( stderr, "\n" );	
	fprintf( stderr, "Unmatched token: %s\n", yytext );
	fprintf( stderr, "*** syntax error\n");
	error_occurred = 1;
	exit(-1);
}

int main(void){
	yyparse();
	if(functionDefinitionExists == 0){
		line_buf[0] = '\0';
		std::string temp = "There must be at least 1 function definition!";
	//	yyerror("There must be at least 1 function definition!");
		yyerror(temp.c_str());
	}
	if(error_occurred == 0)
		printf("No syntax error\n");
	return 0;
}
