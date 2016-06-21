%{

#include <string>
#include <iostream>
#include <stdlib.h>

#define YYSTYPE ParseTree::Node*

#include "ParseTree.h"
#include "LangS.tab.h"

void yyerror(std::string s);

%}

%%

exit        {return Exit; }
print       {return Print; }
'.*'		{
	     std::string text=yytext;
		 text.erase(text.begin());
		 text.erase(text.end()-1);
		 yylval = new ParseTree::StringValue(text);
		 return STRING;
		}
[[:digit:]]+      {yylval = new ParseTree::StringValue(yytext); return STRING; }
$[[:alpha:]]+     {yylval = new ParseTree::Identifier(yytext); return Ident; }
[-]         {yylval = new ParseTree::Identifier("-"); return BinOP; }
[+]         {yylval = new ParseTree::Identifier("+"); return BinOP; }
[\*]        {yylval = new ParseTree::Identifier("*"); return BinOP; }
[\\/]       {yylval = new ParseTree::Identifier("/"); return BinOP; }
[[:punct:]]      {return *yytext; }
[[:space:]]+        ;       /* ignore whitespace */
.               { yyerror("Unhandeled character "+std::string(yytext)); };
%%

int yywrap(void){
    return 1;
}


