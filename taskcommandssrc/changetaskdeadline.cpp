#include "../taskcommandsheader/changetaskdeadline.hpp"

void changetaskdeadline::execute() {
    setTask->addDeadline(setDeadline);
}

void changetaskdeadline::unexecute() {
    //todo
}
