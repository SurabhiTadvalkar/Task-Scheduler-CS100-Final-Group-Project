#include "CompletedMock.hpp"
#include "../taskmock/ProjectMock.hpp"
#include "../taskmock/TaskMOck.hpp"

CompletedMock::CompletedMock(Tasks* task) {
    myTask = task;
}

Tasks* CompletedMock::sort() {
    return myTask;
}

