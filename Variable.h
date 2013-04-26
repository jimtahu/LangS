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
	string Value;
public:
	Variable(string name);
	Variable(Variable &other);
	virtual string GetName();
	virtual string GetValue();
	virtual void SetValue(string value);
	virtual ~Variable();
};

#endif /* VARIABLE_H_ */
