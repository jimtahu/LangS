#include <sstream>
#include <iostream>
#include <map>

using namespace std;

void yyerror(std::string s);
int yylex (void);

map<string, string> varTable;

double str2num(string text){
	stringstream ss(text);
	double ret;
	ss>>ret ? ret : throw text;
	return ret;
}

string num2str(double val){
	stringstream ss;
	ss<<val;
	return ss.str();
}

string setValue(string name, string value){
	varTable[name]=value;
	return value;
}

string getValue(string name){
	return varTable[name];
}//end getValue

string binOP(string op, string a, string b){
	try{
		double x=str2num(a);
		double y=str2num(b);
		return num2str(x+y);
	}catch(string tx){
		return a+b;
	}
}//end binOP

