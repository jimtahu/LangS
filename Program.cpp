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

void Program::toXML(std::ostream &out){
	out<<"<Program id=\'"<<(void *)this<<"\' >"<<std::endl;
	for(std::vector<Statement *>::iterator i=code.begin(); i!=code.end(); i++){
		(*i)->toXML(out);
	}
	out<<"</Program>"<<std::endl;
}//end toXML

Program::~Program() {
	for(std::vector<Statement *>::iterator i=code.begin(); i!=code.end(); i++){
			delete *i;
	}
}

} /* namespace ParseTree */
