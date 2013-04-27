/*
 * Identifier.h
 *
 *  Created on: Apr 26, 2013
 *      Author: jimtahu
 */

#ifndef IDENTIFIER_H_
#define IDENTIFIER_H_

#include "Value.h"

namespace ParseTree {

class Identifier: public ParseTree::Value {
private:
	std::string Name;
public:
	Identifier(std::string name);
	std::string getName();
	std::string getValue();
	virtual ~Identifier();
};

} /* namespace ParseTree */
#endif /* IDENTIFIER_H_ */
