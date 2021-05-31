#include "SchedulerMock.hpp"
#include "../taskmock/ProjectMock.hpp"
#include "../taskmock/TaskMOck.hpp"

SchedulerMock::SchedulerMock(Tasks* task) {
    myTask = task; 
} 

Tasks* SchedulerMock::sort() {
    return myTask; 
} 
