//
// Created by Chell on 02/03/2022.
//

#include "Action1COR.h"

void Action1COR::execute(ACTION action) {
    //check that the action to be executed can be done by the class
    if(action==ACTION::Action1){
        std::cout << "Execution action 1" << std::endl;
    }
    //else pass it to the next element in the list (if it exists)
    else{
        std::cout << "Passing to next" << std::endl;
        if(this->getNext() != nullptr){
            this->getNext()->execute(action);
        }
        else{
            std::cout << "End of chain" << std::endl;
        }
    }
}