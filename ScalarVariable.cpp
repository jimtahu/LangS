/*
 * ScalarVariable.cpp
 *
 *  Created on: Apr 26, 2013
 *      Author: jimtahu
 */

#include <map>
#include "ScalarVariable.h"

namespace runtime{

using namespace std;

map<string, ScalarVariable*> scalarTable;

/**
* Places a varable into the table.
* @param name The lable for the varable.
* @param value The value the varable now holds.
* @return value, for convienace.
*/
string setScalar(string name, string value){
	if(scalarTable.count(name)==0)scalarTable[name]=new ScalarVariable(name);
	scalarTable[name]->SetValue(value);
	return value;
}//end setValue

/**
* Fetches the value for a varable.
* @param name The lable of the varable to fetch.
* @return the value.
* Fetching a variable which has not been stored is undefined.
*/
string getScalar(string name){
	if(scalarTable.count(name))
		return scalarTable[name]->GetValue();
	else return "EMPTY";
}//end getValue

ScalarVariable::ScalarVariable(string name):Variable(name){
	this->Value="";
}

ScalarVariable::ScalarVariable(ScalarVariable &other):Variable(other){
	this->Value=other.GetValue();
}

string ScalarVariable::GetValue(void){
	return this->Value;
}

void ScalarVariable::SetValue(string value){
	this->Value=value;
}

ScalarVariable::~ScalarVariable() {
	// TODO Auto-generated destructor stub
}

}//end namespace runtime
