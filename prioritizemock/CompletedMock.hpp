#ifndef COMPLETEDMOCK_H
#define COMPLETEDMOCK_H

#include "PrioritizeMock.hpp"

class CompletedMock : public Prioritize {
public:
    CompletedMock(Tasks* task);
    virtual Tasks* sort();
};
#endif
