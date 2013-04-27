/*
 * List.cpp
 *
 *  Created on: Apr 25, 2013
 *      Author: jimtahu
 */

#include "ListVariable.h"

ListVarable::ListVarable(string name):Variable(name) {
	this->head=NULL;
}

void ListVarable::add(string value){
	ListItem *item = new ListItem();
	item->value=value;
	item->next=this->head;
	this->head=item;
}

ListVarable::~ListVarable() {
	ListItem *item = this->head;
	while(this->head != NULL){
		this->head=item->next;
		delete item;
		item=this->head;
	}//end while list items
}
