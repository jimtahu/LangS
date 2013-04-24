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
$[a-z]+     {yylval = yytext; return VAR; }
[0-9]+      {yylval = yytext; return NUM; }
[-]         {yylval = "OpExp.Minus"; return BinOP; }
[+]         {yylval = "OpExp.Plus"; return BinOP; }
[\*]        {yylval = "OpExp.Times"; return BinOP; }
[\\/]       {yylval = "OpExp.Div"; return BinOP; }
[=()\[\],;]      {return *yytext; }

[ \r\t\n]+        ;       /* ignore whitespace */
.               { yyerror("Unknown character"+std::string(yytext)); };
%%

int yywrap(void){
    return 1;
}


