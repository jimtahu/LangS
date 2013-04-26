/*
 * Variable.cpp
 *
 *  Created on: Apr 25, 2013
 *      Author: jimtahu
 */

#include "Variable.h"

Variable::Variable(string name){
	this->Name=name;
}

Variable::Variable(Variable &other){
	this->Name=other.GetName();
	this->Value=other.GetValue();
}

string Variable::GetName(void){
	return this->Name;
}

string Variable::GetValue(void){
	return this->Value;
}

void Variable::SetValue(string value){
	this->Value=value;
}

Variable::~Variable(){
	// TODO Auto-generated destructor stub
}

