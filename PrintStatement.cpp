/*
 * PrintStatement.cpp
 *
 *  Created on: Apr 26, 2013
 *      Author: jimtahu
 */

#include "PrintStatement.h"

namespace ParseTree {

PrintStatement::PrintStatement(Value *output) {
	this->value=output;
}

PrintStatement::~PrintStatement() {
	// TODO Auto-generated destructor stub
}

} /* namespace ParseTree */
