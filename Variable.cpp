/*
 * Variable.cpp
 *
 *  Created on: Apr 25, 2013
 *      Author: jimtahu
 */


#include "Variable.h"

namespace RunTime{

using namespace std;

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

}//end namespace runtime
