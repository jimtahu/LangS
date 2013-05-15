/*
 * Node.cpp
 *
 *  Created on: Apr 26, 2013
 *      Author: jimtahu
 */

#include "Node.h"

namespace ParseTree {

Node::Node() {
	// TODO Auto-generated constructor stub

}

void Node::toXML(std::ostream &out){
	out<<"<node id=\'"<<(void *)this<<"\' />"<<std::endl;
}

Node::~Node() {
	// TODO Auto-generated destructor stub
}

std::ostream &operator <<(std::ostream &out,Node &node){
	node.toXML(out);
	return out;
}//end <<

} /* namespace ParseTree */
