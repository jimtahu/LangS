#include <sstream>
#include <iostream>
#include <map>

#include "Variable.h"

using namespace std;

void yyerror(std::string s);
int yyparse (void);

map<string, Variable*> varTable;

/**
* Converts a string into a double.
* @return The double repersented by the string.
* @param text The string to convert.
* Uses stringstream for the conversion, so 7k.89 is 7.
*/
double str2num(string text){
	stringstream ss(text);
	double ret;
	ss>>ret ? ret : throw text;
	return ret;
}//end str2num

/**
* Converts a double to a string.
* @param val The double to convert.
* @return The string repersenting the double.
*/
string num2str(double val){
	stringstream ss;
	ss<<val;
	return ss.str();
}//end num2str

/**
* Places a varable into the table.
* @param name The lable for the varable.
* @param value The value the varable now holds.
* @return value, for convienace.
*/
string setValue(string name, string value){
	if(varTable.count(name)==0)varTable[name]=new Variable(name);
	varTable[name]->SetValue(value);
	return value;
}//end setValue

/**
* Fetches the value for a varable.
* @param name The lable of the varable to fetch.
* @return the value.
* Fetching a variable which has not been stored is undefined.
*/
string getValue(string name){
	return varTable[name]->GetValue();
}//end getValue

#define TRY_NUM(OP) try{                 \
		double x=str2num(a);     \
		double y=str2num(b);	 \
		return num2str(x OP y);  \
	}catch(string &tx){               \
		return "NaN";		 \
	}//end try                       \

/**
* Performs an operation on two values.
* @param op The operation to perform
* @param a First Operator
* @param b Second Operator
* @return The result of the operation on the two values.
*/
string binOP(string op, string a, string b){
	if(!op.compare("+")){
	try{
		double x=str2num(a);
		double y=str2num(b);
		return num2str(x+y);
	}catch(string &tx){
		return a+b;
	}//end try
	}else if(!op.compare("-")){
		TRY_NUM(-);
	}else if(!op.compare("*")){
		TRY_NUM(*);
	}else if(!op.compare("/")){
		TRY_NUM(/);
	}else return a+b;
	return "MAJICS_VALUE";
}//end binOP

int main(int argc, char *argv[]) {
    yyparse();
    return 0;
}//end main
