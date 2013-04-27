/*
 * BinOpValue.cpp
 *
 *  Created on: Apr 26, 2013
 *      Author: jimtahu
 */

#include "BinOpValue.h"
#include "Util.h"

namespace ParseTree {

using namespace std;

BinOpValue::BinOpValue(string op, Value *a, Value *b) {
	this->op=op;
	this->a=a;
	this->b=b;
}

#define TRY_NUM(OP) try{                 \
		double x=str2num(a);     \
		double y=str2num(b);	 \
		return num2str(x OP y);  \
	}catch(string &tx){               \
		return "NaN";		 \
	}//end try                       \


string BinOpValue::getValue(){
	string a=this->a->getValue();
	string b=this->b->getValue();
	if(!op.compare("+")){
	try{
		double x=str2num(a);
		double y=str2num(b);
		return num2str(x+y);
	}catch(string &tx){
		return a+b;
	}//end try
	}else if(!op.compare("-")){
		TRY_NUM(-);
	}else if(!op.compare("*")){
		TRY_NUM(*);
	}else if(!op.compare("/")){
		TRY_NUM(/);
	}else return a+b;
	return "MAJICS_VALUE";
}

BinOpValue::~BinOpValue() {
	// TODO Auto-generated destructor stub
}

} /* namespace ParseTree */
