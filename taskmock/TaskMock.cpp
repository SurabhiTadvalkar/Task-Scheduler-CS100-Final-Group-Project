#include "TaskMock.hpp"

void TaskMock::print() {
	testVar = 1; 
}

void TaskMock::addDeadline() {
	testVar = 2;
}

void TaskMock::setStatus() {
	testVar = 3;
}

void TaskMock::addDescription() {
	testVar = 4;
}

void TaskMock::addName() {
	testVar = 5;
}

int TaskMock::getTestVar() {
	return testVar; 
}
