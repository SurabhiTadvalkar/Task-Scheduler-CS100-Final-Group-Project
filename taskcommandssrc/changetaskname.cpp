#include "../taskcommandsheader/changetaskname.hpp"

void changetaskname::execute() {
    setTask->addName(setName);
}

void changetaskname::unexecute() {
    //todo
}
