/*
 * BinOpValue.cpp
 *
 *  Created on: Apr 26, 2013
 *      Author: jimtahu
 */

#include "BinOpValue.h"

namespace ParseTree {

BinOpValue::BinOpValue(std::string op, Value *a, Value *b) {
	this->op=op;
	this->a=a;
	this->b=b;
}

BinOpValue::~BinOpValue() {
	// TODO Auto-generated destructor stub
}

} /* namespace ParseTree */
