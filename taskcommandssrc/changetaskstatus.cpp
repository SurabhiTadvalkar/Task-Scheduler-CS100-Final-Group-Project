#include "../taskcommandsheader/changetaskstatus.hpp"

void changetaskstatus::execute() {
    setTask->setStatus(setStatus);
}

void changetaskstatus::unexecute() {
    //todo
}
