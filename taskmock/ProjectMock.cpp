#include "ProjectMock.hpp"

void Project::print() {
	testVar = 1;
}

void Project::addDeadline(std::string deadline) {
	testVar = 2;
}

void Project::setStatus(bool status) {
	testVar = 3;
}

void Project::addDescription(std::string description) {
	testVar = 4;
}

void Project::addName(std::string name) {
	testVar = 5;
}

void Project::addTask(Tasks* task) {
	testVar = 6;
}

std::string Project::findClosestDeadline() {

}

int Project::getTestVar() {
	return testVar;
}
