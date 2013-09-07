/*
 * Idexed.cpp
 *
 *  Created on: Sep 7, 2013
 *      Author: jimtahu
 */

#include "IdexedValue.h"

namespace ParseTree {

IdexedValue::IdexedValue(Identifier *name, Value *index)
{
    this->name = name;
    this->index = index;
}

std::string IdexedValue::getValue()
{
    return "indexed thingy";
}

unsigned int IdexedValue::getIndex()
{
    return 0;
}

}

