#include "Project.hpp"
#include <string>
#include <sstream>

using std::string;
using std::cout;
using std::endl;

Project::Project()
{
    this->name = "";
    this->description = "";
    this-> deadline = "";
    this->status = false;
}

Project::~Project() 
{
    for (int i = 0; i < tasks.size(); ++i) {
        delete this->tasks.at(i);
    }
}

bool Project::isLessThan(string lhs, string rhs) {    
    string lhsYear = lhs.substr(6, 2);
    string rhsYear = rhs.substr(6, 2);

    if (lhsYear < rhsYear) {
        return true;
    }
    else if (lhsYear == rhsYear) {
        string lhsMonth = lhs.substr(0, 2);
        string rhsMonth = rhs.substr(0, 2);
        if (lhsMonth < rhsMonth) {
            return true;
        }  
        else if (lhsMonth == rhsMonth) { 
  	    string lhsDay = lhs.substr(3, 2);
            string rhsDay = rhs.substr(3, 2);
            if (lhsDay < rhsDay) {
                return true;
            }  
        } 
    }
        
    return false;
}

string Project::findClosestDeadline() { 
    string closest = tasks.at(0)->getDeadline();

    for (int i = 0; i < tasks.size(); ++i) {
        string deadlineCpy = tasks.at(i)->getDeadline();
        if (isLessThan(deadlineCpy, closest)) {
            closest = tasks.at(i)->getDeadline();
        }
    }

    if (isLessThan(this->deadline, closest)) {
        closest = this->deadline;
    }

    return closest;
}

void Project::addTask(Tasks* task) {
    this->tasks.push_back(task);
}

void Project::print() {
    if (!name.empty() ) 
    {
        cout << "Project: " << name << endl;

        if (!description.empty() ) 
        {
            cout << "Description: " << description << endl;
        }
        if (!deadline.empty() ) 
        {
            if (findClosestDeadline() != "") {
                deadline = findClosestDeadline();
            }
            cout << "Deadline: " << deadline << endl;
        }      
        if (status == false) 
        {
            cout << "Status: NOT FINISHED" << endl;
        }
        else if (status == true) 
        {
            cout << "Status: FINISHED" << endl;
        }

        for (int i = 0; i < this->tasks.size(); ++i) {
            cout << endl;
            this->tasks.at(i)->print();
        }   
    }
}


void Project::addName(string _name)
{
    this->name = _name;
}

void Project::addDescription(string _description)
{
    this->description = _description;
}

void Project::addDeadline(string _deadline)
{
    this->deadline = _deadline;
}

void Project::setStatus(bool _status)
{
    this->status = _status;
}

string Project::getName()
{
    return this->name;
}

string Project::getDescription()
{
    return this->description;
}

string Project::getDeadline()
{
    return this->deadline;
}

bool Project::getStatus()
{
    return this->status;
}
