/*
 * Program.h
 *
 *  Created on: Apr 26, 2013
 *      Author: jimtahu
 */

#ifndef PROGRAM_H_
#define PROGRAM_H_

#include <vector>
#include "Statement.h"

namespace ParseTree {

class Program {
private:
	std::vector<Statement *> code;
public:
	Program();
	void add(Statement *stmt);
	void run();
	virtual ~Program();
};

} /* namespace ParseTree */
#endif /* PROGRAM_H_ */
