#include "../taskcommandsheader/changetaskdescription.hpp" 

void changetaskdescription::execute() {
    setTask->addDescription(setDescription);
}

void changetaskdescription::unexecute() {
    //todo
}
