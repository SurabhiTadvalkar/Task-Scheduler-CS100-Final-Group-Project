#include "SchedulerMock.hpp"
#include "../taskmock/ProjectMock.hpp"
#include "../taskmock/TaskMock.hpp"

SchedulerMock::SchedulerMock(Tasks* task) {
    myTask = task; 
} 

Tasks* SchedulerMock::sort() {
    return myTask; 
} 
