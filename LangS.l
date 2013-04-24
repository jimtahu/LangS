%{

#include <string>
#include <iostream>
#include <stdlib.h>

#define YYSTYPE std::string 

#include "LangS.tab.hpp"

void yyerror(std::string s);

%}

%%

print       {return Print; }
'.*'		{yylval = yytext; return STRING; }
$[[:alpha:]]+     {yylval = yytext; return VAR; }
[[:digit:]]+      {yylval = yytext; return NUM; }
[-]         {yylval = '-'; return BinOP; }
[+]         {yylval = '+'; return BinOP; }
[\*]        {yylval = '*'; return BinOP; }
[\\/]       {yylval = '/'; return BinOP; }
[[:punct:]]      {return *yytext; }
[[:space:]]+        ;       /* ignore whitespace */
.               { yyerror("Unhandeled character "+std::string(yytext)); };
%%

int yywrap(void){
    return 1;
}


