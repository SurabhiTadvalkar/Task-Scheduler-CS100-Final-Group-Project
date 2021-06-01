#include "./../taskcommandsheader/printTasks.hpp"

printTasks::printTasks(Prioritize* strategy) {
    myStrategy = strategy;
}

printTasks::~printTasks() {
    delete myStrategy; 
}

void printTasks::execute() {
    myStrategy->sort()->print();
}

void printTasks::unexecute() {
    //the user should not be allowed to undo a print 
}
