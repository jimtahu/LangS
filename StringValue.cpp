/*
 * StringValue.cpp
 *
 *  Created on: Apr 26, 2013
 *      Author: jimtahu
 */

#include "StringValue.h"

namespace ParseTree {

using namespace std;

StringValue::StringValue(string value) {
	this->value = value;
}

string StringValue::getValue(){
	return this->value;
}

StringValue::~StringValue() {
	// TODO Auto-generated destructor stub
}

} /* namespace ParseTree */
