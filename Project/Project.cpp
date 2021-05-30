#include "Project.hpp"
#include "../Task/Task.hpp"

#include <string>
#include <sstream>
#include <typeinfo>

using std::string;
using std::cout;
using std::endl;

Project::Project(){}

Project::~Project()
{
    for (int i = 0; i < tasks.size(); ++i) {
        delete this->tasks.at(i);
    }
}

Project::Project(const Project& rhs){
     name = new string(); (*name) = (*rhs.name);
     description = new string(); (*description) = (*rhs.description);
     deadline = new string(); (*deadline) = (*rhs.deadline);
     status = new bool; (*status) = (*rhs.status);

     vector<Tasks*> cvector;    

     for (int i=0; i< rhs.tasks.size(); ++i){
	if(  typeid(Project) == typeid( *(rhs.tasks.at(i)))  ){
	    Project p(  *( dynamic_cast<Project*>(rhs.tasks.at(i)) )  );
	    cvector.at(i) = &p;
	}
	else {
	    Task t( *(dynamic_cast<Task*>(rhs.tasks.at(i))) );
	    cvector.at(i) = &t;
	}	
	    
     }
     tasks = cvector; 
}

//Project Project::operator = (const Project& rhs){}

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

    if (isLessThan((*deadline), closest)) {
        closest = (*deadline);
    }

    return closest;
}

void Project::addTask(Tasks* task) {
    this->tasks.push_back(task);
}

void Project::print() {
    if (!(*name).empty() )
    {
        cout << "Project: " << (*name) << endl;

        if (!(*description).empty() )
        {
            cout << "Description: " << (*description) << endl;
        }
        if (!(*deadline).empty() )
        {
            if (findClosestDeadline() != "") {
                (*deadline) = findClosestDeadline();
            }
            cout << "Deadline: " << (*deadline) << endl;
        }
        if ((*status) == false)
        {
            cout << "Status: NOT FINISHED" << endl;
        }
        else if ((*status) == true)
        {
            cout << "Status: FINISHED" << endl;
        }

        for (int i = 0; i < this->tasks.size(); ++i) {
            cout << endl;
            this->tasks.at(i)->print();
        }
    }
}


