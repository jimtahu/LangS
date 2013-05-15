/*
 * ListValue.cpp
 *
 *  Created on: May 9, 2013
 *      Author: jimtahu
 */

#include "ListValue.h"

namespace ParseTree {

using namespace std;

ListValue::ListValue(Value *head) {
	items.insert(items.begin(),head);
}

void ListValue::add(Value *item){
	items.insert(items.end(),item);
}

string ListValue::getValue(){
	return "%LIST%";
}

void ListValue::toXML(std::ostream &out){
	out<<"<ListValue id=\'"<<(void *)this<<"\' >"<<std::endl;
	for(std::vector<Value *>::iterator i=items.begin(); i!=items.end(); i++){
		(*i)->toXML(out);
	}
	out<<"</Program>"<<std::endl;
}//end toXML

ListValue::~ListValue() {
	for(std::vector<Value *>::iterator i=items.begin(); i!=items.end(); i++)
		delete *i;
}

} /* namespace ParseTree */
