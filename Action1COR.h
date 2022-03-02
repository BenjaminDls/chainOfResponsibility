//
// Created by Chell on 02/03/2022.
//

#ifndef CHAINOFRESPONSIBILITY_ACTION1COR_H
#define CHAINOFRESPONSIBILITY_ACTION1COR_H

#include "ActionCOR.h"
#include <iostream>

/**
 * @brief one implementation of the base class.
 * Only overrides the execute() method
 */
class Action1COR : public ActionCOR{
public:
    void execute(ACTION action) override;
};


#endif //CHAINOFRESPONSIBILITY_ACTION1COR_H
