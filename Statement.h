/*
 * Statement.h
 *
 *  Created on: Apr 26, 2013
 *      Author: jimtahu
 */

#ifndef STATEMENT_H_
#define STATEMENT_H_

#include "Node.h"

namespace ParseTree {

class Statement: public ParseTree::Node {
public:
	Statement();
	virtual void Execute();
	virtual ~Statement();
};

} /* namespace ParseTree */
#endif /* STATEMENT_H_ */
