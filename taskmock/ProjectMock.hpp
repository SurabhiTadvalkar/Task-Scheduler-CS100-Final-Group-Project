#ifndef PROJECTMOCK_HPP
#define PROJECTMOCK_HPP

#include "TasksMock.hpp" 

#include <iostream>
#include <string>
#include <vector>

using std::string;

class ProjectMock : public Tasks {
public:
    ProjectMock(); 
    ~ProjectMock(); 
    ProjectMock(const ProjectMock& rhs); 
    virtual string findClosestDeadline(); 
    virtual Tasks* findTask(string targetString);
    virtual void print(); 

private:
    std::vector<Tasks*> tasks; 
    string closestDeadline; 
    bool isLessThan(string, string);
};
#endif //ProjectMock.hpp 
