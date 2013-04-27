#include <sstream>
#include <iostream>
#include <map>

#include "ParseTree.h"

using namespace std;

void yyerror(std::string s);
int yyparse (void);


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

extern ParseTree::Program *theProg;

int main(int argc, char *argv[]) {
	theProg = new ParseTree::Program();
    yyparse();
    theProg->run();
    delete theProg;
    return 0;
}//end main

