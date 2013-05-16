/*
 * ExitStatement.cpp
 *
 *  Created on: Apr 26, 2013
 *      Author: jimtahu
 */

#include "ExitStatement.h"

namespace ParseTree {

ExitStatement::ExitStatement() {
	// TODO Auto-generated constructor stub

}

void ExitStatement::Execute(){
	throw new ExitCondition();
}

void ExitStatement::toXML(std::ostream &out){
	out<<"<ExitStatement id=\'"<<(void *)this<<"\' />"<<std::endl;
}

ExitStatement::~ExitStatement() {
	// TODO Auto-generated destructor stub
}

} /* namespace ParseTree */
