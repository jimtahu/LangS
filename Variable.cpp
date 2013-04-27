/*
 * Variable.cpp
 *
 *  Created on: Apr 25, 2013
 *      Author: jimtahu
 */

#include <map>

#include "Variable.h"
#include "ScalarVariable.h"

using namespace std;

map<string, ScalarVariable*> varTable;

/**
* Places a varable into the table.
* @param name The lable for the varable.
* @param value The value the varable now holds.
* @return value, for convienace.
*/
string setScalar(string name, string value){
	if(varTable.count(name)==0)varTable[name]=new ScalarVariable(name);
	varTable[name]->SetValue(value);
	return value;
}//end setValue

/**
* Fetches the value for a varable.
* @param name The lable of the varable to fetch.
* @return the value.
* Fetching a variable which has not been stored is undefined.
*/
string getScalar(string name){
	if(varTable.count(name))
		return varTable[name]->GetValue();
	else return "EMPTY";
}//end getValue

Variable::Variable(string name){
	this->Name=name;
}

Variable::Variable(Variable &other){
	this->Name=other.GetName();
}

string Variable::GetName(void){
	return this->Name;
}

Variable::~Variable(){
	// TODO Auto-generated destructor stub
}

