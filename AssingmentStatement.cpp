/*
 * AssingmentStatement.cpp
 *
 *  Created on: Apr 26, 2013
 *      Author: jimtahu
 */

#include "AssingmentStatement.h"
#include "ScalarVariable.h"

namespace ParseTree {

using namespace RunTime;

AssingmentStatement::AssingmentStatement(Identifier *id, Value *value) {
	this->id=id;
	this->value=value;
}

void AssingmentStatement::Execute(){
	setScalar(this->id->getName(),this->value->getValue());
}

void AssingmentStatement::toXML(std::ostream &out){
	out<<"<AssingmentStatement id=\'"<<(void *)this<<"\' >"<<std::endl;
	this->id->toXML(out);
	this->value->toXML(out);
	out<<"</AssingmentStatement>"<<std::endl;
}//end toXML

AssingmentStatement::~AssingmentStatement() {
	delete this->id;
	delete this->value;
}

} /* namespace ParseTree */
