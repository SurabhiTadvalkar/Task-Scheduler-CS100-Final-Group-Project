#include "Project.hpp"
#include <string>
#include <sstream>

using std::string;
using std::cout;
using std::endl;

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

    if (isLessThan((*deadline), closest)) {
        closest = (*deadline);
    }

    return closest;
}

void Project::addTask(Tasks* task) {
    task->setParent(this); 
    this->tasks.push_back(task);
}

void Project::print() {
    if (!(*name).empty() )
    {
        this->countTabs();
        this->printTabs();
        cout << "Project: " << (*name) << endl;

        if (!(*description).empty() )
        {
            this->printTabs();
            cout << "Description: " << (*description) << endl;
        }
        if (!(*deadline).empty() )
        {
            if (findClosestDeadline() != "") {
                (*deadline) = findClosestDeadline();
            }
            this->printTabs();
            cout << "Deadline: " << (*deadline) << endl;
        }
        if ((*status) == false)
        {
            this->printTabs();
            cout << "Status: NOT FINISHED" << endl;
        }
        else if ((*status) == true)
        {
            this->printTabs();
            cout << "Status: FINISHED" << endl;
        }

        for (int i = 0; i < this->tasks.size(); ++i) {
            cout << endl;
            this->tasks.at(i)->print();
        }
    }
}

void Project::removeTask(Tasks* targetComponent) 
{
    std::vector<Tasks*>::iterator it;

    for (it = tasks.begin(); it != tasks.end(); it++) {
        if (*it == targetComponent) {
            tasks.erase(it);
                return;
	}
	else {
            (*it)->removeTask(targetComponent);
	}
    }
}

Tasks* Project::findTask(std::string targetString) 
{
    if (this->getName() == targetString && this->getParent() == nullptr) {
	return this; 
    }

    std::vector<Tasks*>::iterator it;

    for (it = tasks.begin(); it != tasks.end(); it++) {
	if ((*it)->getName() == targetString) {
	    return *it;
	}
	else {
	    Tasks* found = (*it)->findTask(targetString);

	    if (found != nullptr) {
	        return found; 
	    }
	}
			
    }

    return nullptr; 
}
