#include "./../taskcommandsheader/printTasks.hpp"

printTasks::printTasks(Tasks* task) {
    setTask = task;
}

void printTasks::execute() {
    setTask->print();
}

void printTasks::unexecute() {
    //todo
}
