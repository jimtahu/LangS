/*
 * Program.cpp
 *
 *  Created on: Apr 26, 2013
 *      Author: jimtahu
 */

#include "Program.h"

namespace ParseTree {

Program::Program() {

}

void Program::add(Statement *stmt){
	code.insert(code.begin(),stmt);
}

void Program::run(){
	for(std::vector<Statement *>::iterator i=code.begin(); i!=code.end(); i++){
		(*i)->Execute();
	}
	return;
}

Program::~Program() {

}

} /* namespace ParseTree */
