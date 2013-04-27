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

class ExitStatement: public ParseTree::Statement {
public:
	ExitStatement();
	virtual ~ExitStatement();
};

} /* namespace ParseTree */
#endif /* EXITSTATEMENT_H_ */
