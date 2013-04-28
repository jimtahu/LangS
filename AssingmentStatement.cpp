/*
 * AssingmentStatement.cpp
 *
 *  Created on: Apr 26, 2013
 *      Author: jimtahu
 */

#include "AssingmentStatement.h"
#include "ScalarVariable.h"

namespace ParseTree {

using namespace runtime;

AssingmentStatement::AssingmentStatement(Identifier *id, Value *value) {
	this->id=id;
	this->value=value;
}

void AssingmentStatement::Execute(){
	setScalar(this->id->getName(),this->value->getValue());
}

AssingmentStatement::~AssingmentStatement() {
	// TODO Auto-generated destructor stub
}

} /* namespace ParseTree */
