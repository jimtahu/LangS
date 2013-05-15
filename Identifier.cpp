/*
 * Identifier.cpp
 *
 *  Created on: Apr 26, 2013
 *      Author: jimtahu
 */

#include "Identifier.h"
#include "ScalarVariable.h"

namespace ParseTree {

using namespace std;
using namespace RunTime;

Identifier::Identifier(string name) {
	this->Name = name;
}

string Identifier::getName(){
	return this->Name;
}

string Identifier::getValue(){
	return getScalar(this->Name);
}

void Identifier::toXML(std::ostream &out){
	out<<"<Identifier id=\'"<<(void *)this
	   <<"\' name=\'"<<this->getName()
	   <<"\' />"<<endl;
}

Identifier::~Identifier() {
	// TODO Auto-generated destructor stub
}

} /* namespace ParseTree */
