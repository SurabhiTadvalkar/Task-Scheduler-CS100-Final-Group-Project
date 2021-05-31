#ifndef PRINTTASKS_HPP
#define PRINTTASKS_HPP

#include "./taskcommand.hpp"
#include "../prioritizemock/PrioritizeMock.hpp"

class printTasks : public TaskCommand {
public:
    printTasks(Prioritize* strategy);
    virtual void execute();
    virtual void unexecute();
private:
    Prioritize* myStrategy; 
};

#endif //printTasks.hpp
