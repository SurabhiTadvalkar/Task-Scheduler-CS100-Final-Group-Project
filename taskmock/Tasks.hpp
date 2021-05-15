#ifndef TASKS_HPP
#define TASKS_HPP

#include <string>

class Tasks {
public:
    virtual void print() = 0;
    virtual void addDeadline() = 0;
    virtual void setStatus() = 0;
    virtual void addDescription() = 0;
    virtual void addName() = 0;

protected:
    std::string name;
    std::string deadline;
    std::string description;
    bool status;
};
#endif //Tasks.hpp
