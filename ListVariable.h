/*
 * List.h
 *
 *  Created on: Apr 25, 2013
 *      Author: jimtahu
 */

#ifndef LIST_H_
#define LIST_H_

#include "Variable.h"

namespace runtime {

class ListItem {
public:
	std::string value;
	ListItem *next;
public:
};

class ListVarable: public Variable {
	ListItem *head;
public:
	ListVarable(std::string name);
	void add(std::string value);
	virtual ~ListVarable();
};
}//end namespace runtime
#endif /* LIST_H_ */
