/*
 * Identifier.cpp
 *
 *  Created on: Apr 26, 2013
 *      Author: jimtahu
 */

#include "Identifier.h"

namespace ParseTree {

using namespace std;

Identifier::Identifier(string name) {
	this->Name = name;
}

string Identifier::getName(){
	return this->Name;
}

Identifier::~Identifier() {
	// TODO Auto-generated destructor stub
}

} /* namespace ParseTree */
