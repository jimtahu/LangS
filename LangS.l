%{

#include <string>
#include <iostream>
#include <stdlib.h>

#define YYSTYPE std::string 

#include "LangS.tab.hpp"

void yyerror(std::string s);

%}

%%

exit        {return Exit; }
print       {return Print; }
'.*'		{
		 yylval = yytext; 
		 yylval.erase(yylval.begin());
		 yylval.erase(yylval.end()-1);
		 return STRING;
		}
[[:digit:]]+      {yylval = yytext; return STRING; }
$[[:alpha:]]+     {yylval = yytext; return Scalar; }
%[[:alpha:]]+     {yylval = yytext; return Vector; }
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


