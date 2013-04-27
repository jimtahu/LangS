/*
 * ScalarVariable.h
 *
 *  Created on: Apr 26, 2013
 *      Author: jimtahu
 */

#ifndef SCALARVARIABLE_H_
#define SCALARVARIABLE_H_

#include "Variable.h"

class ScalarVariable: public Variable {
	string Value;
public:
	ScalarVariable(string name);
	ScalarVariable(ScalarVariable &other);
	string GetValue();
	void SetValue(string value);
	virtual ~ScalarVariable();
};

#endif /* SCALARVARIABLE_H_ */
