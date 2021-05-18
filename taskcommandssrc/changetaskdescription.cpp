#include "./../taskcommandsheader/changetaskdescription.hpp" 

changetaskdescription::changetaskdescription(Tasks* task, std::string description) {
    setTask = task;
    setDescription = description;
}

void changetaskdescription::execute() {
    setTask->addDescription(setDescription);
}

void changetaskdescription::unexecute() {
    //todo
}
