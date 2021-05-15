#ifndef TASKMOCK_HPP
#define TASKMOCK_HPP

#include "Tasks.hpp"

class TaskMock : Tasks {
public:
    virtual void print();
    virtual void addDeadline(std::string deadline);
    virtual void setStatus(bool satus);
    virtual void addDescription(std::string description);
    virtual void addName(std::string name);

    //fortesting
    int getTestVar();
    //fortesting
private:
    int testVar; 
};
#endif //TaskMock.hpp
