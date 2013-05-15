/*
 * ListValue.h
 *
 *  Created on: May 9, 2013
 *      Author: jimtahu
 */

#ifndef LISTVALUE_H_
#define LISTVALUE_H_

#include <vector>
#include "Value.h"

namespace ParseTree {

class ListValue: public Value {
private:
	std::vector<Value *> items;
public:
	ListValue(Value *head);
	void add(Value *item);
	std::string getValue();
	virtual ~ListValue();
};

} /* namespace ParseTree */
#endif /* LISTVALUE_H_ */
