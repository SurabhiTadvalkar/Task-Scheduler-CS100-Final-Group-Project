#ifndef SCHEDULERMOCK_H
#define SCHEDULERMOCK_H

#include "PrioritizeMock.hpp"

class SchedulerMock : public Prioritize {
public:
    SchedulerMock(Tasks* task); 
    virtual Tasks* sort(); 
};
#endif
