#ifndef PRINTTASKS_HPP
#define PRINTTASKS_HPP

#include "./taskcommand.hpp"

class printTasks : public TaskCommand {
public:
    printTasks(Tasks* task);
    virtual void execute();
    virtual void unexecute();
};

#endif //printTasks.hpp
