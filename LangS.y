%{

#include <string>
#include <fstream>
#include <iostream>

#include "ParseTree.h"

#define YYSTYPE Node* 
using namespace std;
using namespace ParseTree;

std::ofstream out;
void yyerror(std::string s);
int yylex (void);

Program *theProg;

%}

%token COMMENT
%token Ident
%token STRING
%token BinOP
%token Print
%token Exit

%left BinOP

%%

Prog:	Stm ';' Prog	{ theProg->add((Statement *)$1); }
	| Stm ';'	{ theProg = new ParseTree::Program(); theProg->add((Statement *)$1); }

Stm:	Exit			{ $$ = new ExitStatement();}
	| Ident '=' Value	{ $$ = new AssingmentStatement((Identifier*)$1,(Value*)$3); }
	| Print Value 		{ $$ = new PrintStatement((Value*)$2); }

Value:	STRING 			{ $$ = $1; }
	| Ident			{ $$ = $1; }
	| Items			{ $$ = $1; }
	| Value BinOP Value	{ $$ = new BinOpValue(((Identifier*)$2)->getName(),(Value*)$1,(Value*)$3); }
    | IdexValue     { $$ = $1; }

IdexValue: Ident '[' Value ']'   { $$ = new IdexedValue((Identifier*)$1,(Value*)$3); }

Items: '[' List ']'		{ $$ = $2; }

List: List ',' Value	{ ((ListValue *)$1)->add((Value*)$3); $$ = $1; }
	| Value		{ $$ = new ListValue((Value*)$1); }

%%

using namespace std;

void yyerror(std::string s) {
    cerr<<s<<endl;
}


