#include "./../taskcommandsheader/changetaskdeadline.hpp"

changetaskdeadline::changetaskdeadline(Tasks* task, std::string deadline) {
    setTask = task;
    setDeadline = deadline; 
}

void changetaskdeadline::execute() {
    setTask->addDeadline(setDeadline);
}

void changetaskdeadline::unexecute() {
    //todo
}
