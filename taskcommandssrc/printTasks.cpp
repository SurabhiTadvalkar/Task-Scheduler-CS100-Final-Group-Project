#include "./../taskcommandsheader/printTasks.hpp"

printTasks::printTasks(Tasks* task) {
    setTask = task;
}

void printTasks::execute() {
    setTask->print();
}

void printTasks::unexecute() {
    //the user should not be allowed to undo a print 
}
