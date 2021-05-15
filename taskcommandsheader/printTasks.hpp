#ifndef PRINTTASKS_HPP
#define PRINTTASKS_HPP

#include "taskcommand.hpp"

class printTasks : public TaskCommand {
public:
    printTasks(Tasks* task) : setTask(task) {}
    virtual void execute();
    virtual void unexecute();

private:
    Tasks* setTask;
};

#endif //printTasks.hpp
