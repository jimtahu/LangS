/*
 * PrintStatement.cpp
 *
 *  Created on: Apr 26, 2013
 *      Author: jimtahu
 */

#include "PrintStatement.h"
#include <iostream>

namespace ParseTree {

using namespace std;

PrintStatement::PrintStatement(Value *output) {
	this->value=output;
}

void PrintStatement::Execute(){
	cout << this->value->getValue() << endl;
}

PrintStatement::~PrintStatement() {
	// TODO Auto-generated destructor stub
}

} /* namespace ParseTree */
