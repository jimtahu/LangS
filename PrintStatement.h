/*
 * PrintStatement.h
 *
 *  Created on: Apr 26, 2013
 *      Author: jimtahu
 */

#ifndef PRINTSTATEMENT_H_
#define PRINTSTATEMENT_H_

#include "Statement.h"
#include "Value.h"

namespace ParseTree {

class PrintStatement: public ParseTree::Statement {
private:
	Value *value;
public:
	PrintStatement(Value *output);
	void Execute();
	virtual ~PrintStatement();
};

} /* namespace ParseTree */
#endif /* PRINTSTATEMENT_H_ */
