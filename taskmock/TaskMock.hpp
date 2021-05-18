#ifndef TASKMOCK_HPP
#define TASKMOCK_HPP

#include "./Tasks.hpp"

class TaskMock : public Tasks {
public:
    void print();
    void addDeadline(std::string deadline);
    void setStatus(bool status);
    void addDescription(std::string description);
    void addName(std::string name);
    //fortesting
    int getTestVar();
};
#endif //TaskMock.hpp
