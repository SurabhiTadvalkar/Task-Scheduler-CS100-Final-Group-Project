#include "./../taskcommandsheader/changetaskstatus.hpp"

changetaskstatus::changetaskstatus(Tasks* task, bool status) {
    setTask = task; 
    setStatus = status; 
}

void changetaskstatus::execute() {
    setTask->setStatus(setStatus);
}

void changetaskstatus::unexecute() {
    setTask->setStatus(false); //by default a task status is set to false
}
