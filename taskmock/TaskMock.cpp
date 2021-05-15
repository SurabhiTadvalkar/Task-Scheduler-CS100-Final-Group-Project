#include "TaskMock.hpp"

void TaskMock::print() {
	testVar = 1; 
}

void TaskMock::addDeadline(std::string deadline) {
	testVar = 2;
}

void TaskMock::setStatus(bool status) {
	testVar = 3;
}

void TaskMock::addDescription(std::string description) {
	testVar = 4;
}

void TaskMock::addName(std::string name) {
	testVar = 5;
}

int TaskMock::getTestVar() {
	return testVar; 
}
