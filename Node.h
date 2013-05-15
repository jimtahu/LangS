/*
 * Node.h
 *
 *  Created on: Apr 26, 2013
 *      Author: jimtahu
 */

#ifndef NODE_H_
#define NODE_H_

#include <iostream>

namespace ParseTree {

class Node {
public:
	Node();
	virtual void toXML(std::ostream &out);
	virtual ~Node();
};

std::ostream &operator <<(std::ostream &out,Node &node);

} /* namespace ParseTree */
#endif /* NODE_H_ */
