/*
 * AssingmentStatement.cpp
 *
 *  Created on: Apr 26, 2013
 *      Author: jimtahu
 */

#include "AssingmentStatement.h"

namespace ParseTree {

AssingmentStatement::AssingmentStatement(Identifier *id, Value *value) {
	this->id=id;
	this->value=value;
}

AssingmentStatement::~AssingmentStatement() {
	// TODO Auto-generated destructor stub
}

} /* namespace ParseTree */
