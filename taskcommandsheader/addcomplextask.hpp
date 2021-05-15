#ifndef ADDCOMPLEXTASK_HPP
#define ADDCOMPLEXTASK_HPP

#include "taskcommand.hpp"

class addcomplextask : public TaskCommand {
public:
    addcomplextask(Tasks* task) : setTask(task) {}
    virtual void execute(); 
    virtual void unexecute();

private:
    Tasks* setTask; 
};

#endif//addcomplextask.hpp
