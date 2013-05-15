/*
 * Statement.cpp
 *
 *  Created on: Apr 26, 2013
 *      Author: jimtahu
 */

#include "Statement.h"

#include <iostream>

namespace ParseTree {

using namespace std;

Statement::Statement() {
}

void Statement::Execute(){
	cerr << "Attempted execution of abstract statement" << endl;
}

void Statement::toXML(std::ostream &out){
	out<<"<Statement id=\'"<<(void *)this<<"\' />"<<std::endl;
}

Statement::~Statement() {
	// TODO Auto-generated destructor stub
}

} /* namespace ParseTree */
