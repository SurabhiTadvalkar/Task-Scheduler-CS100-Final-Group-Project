#include "./../taskcommandsheader/addtask.hpp"

addtask::addtask(Tasks* childTask, Tasks* parentTask) {
    setTask = childTask;
    setParentTask = parentTask; 
}

void addtask::execute() {
    setParentTask->addTask(setTask); 
}
    
void addtask::unexecute() {
    //setParentTask->removeTask(setTask)
}
