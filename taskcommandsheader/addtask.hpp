#ifndef ADDTASK_HPP
#define ADDTASK_HPP

#include "./taskcommand.hpp"

class addtask : public TaskCommand {
public:
    addtask(Tasks* childTask, Tasks* parentTask);
    virtual void execute(); 
    virtual void unexecute();
private: 
    Tasks* setParentTask; 
};

#endif//addtask.hpp
