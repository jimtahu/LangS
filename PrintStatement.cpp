/*
 * PrintStatement.cpp
 *
 *  Created on: Apr 26, 2013
 *      Author: jimtahu
 */

#include <iostream>

#include "PrintStatement.h"
#include <iostream>

namespace ParseTree {

using namespace std;

PrintStatement::PrintStatement(Value *output) {
	this->value=output;
}

void PrintStatement::Execute(){
	cout<<this->value->getValue()<<endl;
}

void PrintStatement::toXML(ostream &out){
	out<<"<PrintStatement id=\'"<<(void*)this<<"\' >"<<endl;
	this->value->toXML(out);
	out<<"</PrintStatement>"<<endl;
}

PrintStatement::~PrintStatement() {
	delete this->value;
}

} /* namespace ParseTree */
