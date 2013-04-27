/*
 * StringValue.h
 *
 *  Created on: Apr 26, 2013
 *      Author: jimtahu
 */

#ifndef STRINGVALUE_H_
#define STRINGVALUE_H_

#include "Value.h"

namespace ParseTree {

class StringValue: public ParseTree::Value {
private:
	std::string value;
public:
	StringValue(std::string value);
	std::string getValue();
	virtual ~StringValue();
};

} /* namespace ParseTree */
#endif /* STRINGVALUE_H_ */
