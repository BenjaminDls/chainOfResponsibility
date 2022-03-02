//
// Created by Chell on 02/03/2022.
//

#ifndef CHAINOFRESPONSIBILITY_ACTIONCOR_H
#define CHAINOFRESPONSIBILITY_ACTIONCOR_H

#include "Definitions.h"

/**
 * @brief Base class of the chain of responsibility
 */
class ActionCOR {
private:
    ActionCOR *_next;
public:
    virtual void execute(ACTION action) = 0;
    void setNext(ActionCOR *next) { this->_next = next; }
    ActionCOR* getNext(){ return this->_next; }
};

#endif //CHAINOFRESPONSIBILITY_ACTIONCOR_H
