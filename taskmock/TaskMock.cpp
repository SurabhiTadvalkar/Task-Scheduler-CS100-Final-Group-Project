#include "./TaskMock.hpp"
#include <string>

TaskMock::TaskMock() {}

TaskMock::~TaskMock() {
    delete name; 
    delete deadline;
    delete description;
    delete status;
    delete myTaskParent; 
}

TaskMock::TaskMock(const TaskMock& rhs) {
    name = new string();
    deadline = new string();
    description = new string();
    status = new bool();

    (*name) = (*rhs.name);
    (*deadline) = (*rhs.deadline);
    (*description) = (*rhs.description);
    (*status) = (*rhs.status);
    myTaskParent = nullptr;
}
void TaskMock::print() {
    testVar = -1; 
}
