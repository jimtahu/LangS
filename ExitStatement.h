/*
 * ExitStatement.h
 *
 *  Created on: Apr 26, 2013
 *      Author: jimtahu
 */

#ifndef EXITSTATEMENT_H_
#define EXITSTATEMENT_H_

#include "Statement.h"

namespace ParseTree {

class ExitCondition {

};

class ExitStatement: public ParseTree::Statement {
public:
	ExitStatement();
	virtual void Execute();
	virtual void toXML(std::ostream &out);
	virtual ~ExitStatement();
};

} /* namespace ParseTree */
#endif /* EXITSTATEMENT_H_ */
