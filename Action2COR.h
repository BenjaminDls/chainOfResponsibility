//
// Created by Chell on 02/03/2022.
//

#ifndef CHAINOFRESPONSIBILITY_ACTION2COR_H
#define CHAINOFRESPONSIBILITY_ACTION2COR_H

#include <iostream>
#include "ActionCOR.h"

/**
 * @brief one implementation of the base class.
 * Only overrides the execute() method
 */
class Action2COR : public ActionCOR{
public:
    void execute(ACTION action) override;
};


#endif //CHAINOFRESPONSIBILITY_ACTION2COR_H
