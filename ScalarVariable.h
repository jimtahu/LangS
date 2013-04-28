/*
 * ScalarVariable.h
 *
 *  Created on: Apr 26, 2013
 *      Author: jimtahu
 */

#ifndef SCALARVARIABLE_H_
#define SCALARVARIABLE_H_

#include "Variable.h"

namespace runtime {

std::string setScalar(std::string name, std::string value);
std::string getScalar(std::string name);
void cleanScalars();

class ScalarVariable: public Variable {
	std::string Value;
public:
	ScalarVariable(std::string name);
	ScalarVariable(ScalarVariable &other);
	std::string GetValue();
	void SetValue(std::string value);
	virtual ~ScalarVariable();
};
}//end namespace runtime

#endif /* SCALARVARIABLE_H_ */
