/*
 * Value.h
 *
 *  Created on: Apr 26, 2013
 *      Author: jimtahu
 */

#ifndef VALUE_H_
#define VALUE_H_

#include <string>
#include "Node.h"

namespace ParseTree {

class Value: public ParseTree::Node {
public:
	Value();
	virtual std::string getValue();
	virtual ~Value();
};

} /* namespace ParseTree */
#endif /* VALUE_H_ */
