#include <iostream>
#include "ActionCOR.h"
#include "Action1COR.h"
#include "Action2COR.h"

int main() {
    Action1COR* a1 = new Action1COR();
    Action2COR* a2 = new Action2COR();
    a1->setNext(a2);
    a1->execute(ACTION::Action1);
    a1->execute(ACTION::Action2);
    delete a1;
    delete a2;
    return 0;
}
