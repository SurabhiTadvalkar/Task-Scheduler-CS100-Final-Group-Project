#ifndef TASKS_HPP
#define TASKS_HPP

#include <string>

class Tasks {
public:
    virtual void print() = 0; 
    virtual void addDeadline(std::string deadline) = 0;
    virtual void setStatus(bool status) = 0;
    virtual void addDescription(std::string description) = 0;
    virtual void addName(std::string name) = 0;
    //fortesting
    virtual int getTestVar() = 0;

protected:
    std::string name;
    std::string deadline;
    std::string description;
    bool status = 0;
    //fortesting
    int testVar = 0;  
};
#endif //Tasks.hpp
