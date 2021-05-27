#ifndef ADDTASK_HPP
#define ADDTASK_HPP

#include "./taskcommand.hpp"

class addtask : public TaskCommand {
public:
    addtask(Tasks* childTask, Tasks* parentTask);
    virtual void execute(); 
    virtual void unexecute();
};

#endif//addtask.hpp
