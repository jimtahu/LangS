/*
 * Variable.h
 *
 *  Created on: Apr 25, 2013
 *      Author: jimtahu
 */

#ifndef VARIABLE_H_
#define VARIABLE_H_

#include <string>

namespace runtime {

class Variable {
private:
	std::string Name;
public:
	Variable(std::string name);
	Variable(Variable &other);
	virtual std::string GetName();
	virtual ~Variable();
};

}//end namespace runtime
#endif /* VARIABLE_H_ */
