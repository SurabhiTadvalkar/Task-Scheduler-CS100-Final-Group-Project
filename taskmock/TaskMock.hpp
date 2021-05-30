#ifndef TASKMOCK_HPP
#define TASKMOCK_HPP

#include "TasksMock.hpp"

class TaskMock : public Tasks {
public:
    void print();
    void addDeadline(std::string deadline);
    void setStatus(bool status);
    void addDescription(std::string description);
    void addName(std::string name);
    void addTask(Tasks* task); 
    //fortesting
    int getTestVar();
};
#endif //TaskMock.hpp
