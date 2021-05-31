#ifndef TASKCOMMAND_HPP
#define TASKCOMMAND_HPP

#include "../Tasks/Tasks.hpp"

class TaskCommand {
public:
    virtual void execute() = 0;
    virtual void unexecute() = 0;
protected:
    Tasks* setTask = nullptr;
};

#endif //taskcommand.hpp
