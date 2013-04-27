/*
 * List.h
 *
 *  Created on: Apr 25, 2013
 *      Author: jimtahu
 */

#ifndef LIST_H_
#define LIST_H_

#include "Variable.h"

class ListItem {
public:
	string value;
	ListItem *next;
public:
};

class ListVarable: public Variable {
	ListItem *head;
public:
	ListVarable(string name);
	void add(string value);
	virtual ~ListVarable();
};

#endif /* LIST_H_ */
