#ifndef SERVICE_H
#define SERVICE_H
#include "IceMachine.h"

class Service {
public:
    void Test(IceMachine* machine, double powderAmount);
    void TestCopy(IceMachine machine, double powderAmount);
};

#endif
