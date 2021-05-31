#ifndef TASKMOCK_HPP
#define TASKMOCK_HPP

#include "TasksMock.hpp"

#include <iostream>
#include <string>

using std::string;
using std::cout; 
using std::endl;

class TaskMock : public Tasks {
public:
    TaskMock();
    ~TaskMock();
    TaskMock(const TaskMock& rhs);
    virtual void print();
};
#endif //TaskMock.hpp
