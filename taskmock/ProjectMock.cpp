#include "ProjectMock.hpp"

void ProjectMock::print() {
	testVar = 1;
}

void ProjectMock::addDeadline(std::string deadline) {
	testVar = 2;
}

void ProjectMock::setStatus(bool status) {
	testVar = 3;
}

void ProjectMock::addDescription(std::string description) {
	testVar = 4;
}

void ProjectMock::addName(std::string name) {
	testVar = 5;
}

void ProjectMock::addTask(Tasks* task) {
	testVar = 6;
}

std::string ProjectMock::findClosestDeadline() {

}

int ProjectMock::getTestVar() {
	return testVar;
}
