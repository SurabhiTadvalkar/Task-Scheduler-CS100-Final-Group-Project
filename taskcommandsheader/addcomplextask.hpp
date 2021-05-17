#ifndef ADDCOMPLEXTASK_HPP
#define ADDCOMPLEXTASK_HPP

#include "./taskcommand.hpp"

class addcomplextask : public TaskCommand {
public:
    addcomplextask(Tasks* task);
    virtual void execute(); 
    virtual void unexecute();
};

#endif//addcomplextask.hpp
