#include <iostream>
#include <map>

using namespace std;

void yyerror(std::string s);
int yylex (void);

map<string, string> varTable;

string setValue(string name, string value){
	varTable[name]=value;
	return value;
}

string getValue(string name){
	return varTable[name];
}

string binOP(string op, string a, string b){
	return a+b;
}
