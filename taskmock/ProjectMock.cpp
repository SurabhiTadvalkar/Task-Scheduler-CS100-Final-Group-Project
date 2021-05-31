#include "ProjectMock.hpp"
#include "TaskMock.hpp"

#include <string> 
#include <sstream> 
#include <typeinfo>

using std::string; 
using std::cout; 
using std::endl;

ProjectMock::ProjectMock() {}

ProjectMock::~ProjectMock() 
{
    delete name;
    delete description;
    delete deadline; 
    delete status; 
    delete myTaskParent; 
    for (int i = 0; i < tasks.size(); ++i) {
        delete this->tasks.at(i); 
    }
}

ProjectMock::ProjectMock(const ProjectMock& rhs) {
    //not needed for mock
}

bool ProjectMock::isLessThan(string lhs, string rhs) {
    //not needed for mock
    return false;
}

string ProjectMock::findClosestDeadline() {
    //not needed for mock
    return "";
}

void ProjectMock::print() {
    testVar = 1; 
}

Tasks* ProjectMock::findTask(string targetString) {
    //not needed for mock
    return nullptr; 
}
