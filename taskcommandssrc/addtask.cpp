#include "./../taskcommandsheader/addtask.hpp"

addtask::addtask(Tasks* childTask, Tasks* parentTask) {
    setTask = childTask;
    setParentTask = parentTask; 
}

void addcomplextask::execute() {
    setParentTask->addTask(setTask); 
}
    
void addcomplextask::unexecute() {
    //setParentTask->removeTask(setTask)
}
