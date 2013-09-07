/*
 * Idexed.h
 *
 *  Created on: Sep 7, 2013
 *      Author: jimtahu
 */

#ifndef IDEXED_H_
#define IDEXED_H_

#include "Identifier.h"

namespace ParseTree {

class IdexedValue: public ParseTree::Value {
    Identifier *name;
    Value *index;
public:
    IdexedValue(Identifier *name, Value *index);
    virtual std::string getValue();
    virtual unsigned int getIndex();
};

}

#endif
