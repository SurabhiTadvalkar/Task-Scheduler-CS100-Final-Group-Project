#ifndef TASKCOMMAND_HPP
#define TASKCOMMAND_HPP

#include "../taskmock/Tasks.hpp"

class TaskCommand {
public:
    virtual void execute() = 0;
    virtual void unexecute() = 0;
protected:
    Tasks* setTask;
};

#endif //taskcommand.hpp
