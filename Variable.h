/*
 * Variable.h
 *
 *  Created on: Apr 25, 2013
 *      Author: jimtahu
 */

#ifndef VARIABLE_H_
#define VARIABLE_H_

#include <string>

using namespace std;

class Variable {
private:
	string Name;
public:
	Variable(string name);
	Variable(Variable &other);
	virtual string GetName();
	virtual ~Variable();
};

#endif /* VARIABLE_H_ */
