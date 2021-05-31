#ifndef PRIORITIZEMOCK_HPP
#define PRIORITIZEMOCK_HPP

#include "./../taskmock/TasksMock.hpp"

class Prioritize {
public:
    Prioritize() {}
    virtual ~Prioritize() {}

    virtual Tasks* sort() = 0; 
protected:
    Tasks* myTask; 
};
#endif
