/*
 * ScalarVariable.cpp
 *
 *  Created on: Apr 26, 2013
 *      Author: jimtahu
 */

#include "ScalarVariable.h"

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

