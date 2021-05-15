#ifndef TASKMOCK_HPP
#define TASKMOCK_HPP

#include "Tasks.hpp"

class TaskMock : Tasks {
public:
    virtual void print();
    virtual void addDeadline();
    virtual void setStatus();
    virtual void addDescription();
    virtual void addName();

    //fortesting
    int getTestVar();
    //fortesting
private:
	int testVar; 
};
#endif //TaskMock.hpp
