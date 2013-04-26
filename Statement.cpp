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
	cerr << "Creation of abstract statement" << endl;
}

void Statement::Execute(){
	cerr << "Attempted execution of abstract statement" << endl;
}

Statement::~Statement() {
	// TODO Auto-generated destructor stub
}

} /* namespace ParseTree */
