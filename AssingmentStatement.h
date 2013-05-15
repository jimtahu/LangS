/*
 * AssingmentStatement.h
 *
 *  Created on: Apr 26, 2013
 *      Author: jimtahu
 */

#ifndef ASSINGMENTSTATEMENT_H_
#define ASSINGMENTSTATEMENT_H_

#include "Statement.h"
#include "Identifier.h"

namespace ParseTree {

class AssingmentStatement: public ParseTree::Statement {
private:
	Identifier *id;
	Value *value;
public:
	AssingmentStatement(Identifier *id, Value *value);
	void Execute();
	void toXML(std::ostream &out);
	virtual ~AssingmentStatement();
};

} /* namespace ParseTree */
#endif /* ASSINGMENTSTATEMENT_H_ */
