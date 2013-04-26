/*
 * BinOpValue.h
 *
 *  Created on: Apr 26, 2013
 *      Author: jimtahu
 */

#ifndef BINOPVALUE_H_
#define BINOPVALUE_H_

#include "Value.h"

namespace ParseTree {

class BinOpValue: public ParseTree::Value {
private:
	std::string op;
	Value *a;
	Value *b;
public:
	BinOpValue(std::string op, Value *a, Value *b);
	virtual ~BinOpValue();
};

} /* namespace ParseTree */
#endif /* BINOPVALUE_H_ */
