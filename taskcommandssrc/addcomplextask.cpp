#include "./../taskcommandsheader/addcomplextask.hpp"

addcomplextask::addcomplextask(Tasks* task) {
    setTask = task;
}

void addcomplextask::execute() {
   // setTask->addTask() makes no sense, we would need an additional task. 
}
    
void addcomplextask::unexecute() {
    //todo
}
