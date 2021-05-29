#include "Task.hpp"
#include <string>

Task::Task()
{
    this->name = "";
    this->description = "";
    this-> deadline = "";
    this->status = false;
}


void Task::print() {
    if (!name.empty() )   //tasks need a name
    {
        cout << "Task: " << name << endl;
    
        if (!description.empty() ) 
        {
            cout << "Description: " << description << endl;
        }
        if (!deadline.empty() ) 
        {
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
    }
}

void Task::addName(string _name)
{
    this->name = _name;
}

void Task::addDescription(string _description)
{
    this->description = _description;
}

void Task::addDeadline(string _deadline)
{
    this->deadline = _deadline;
}

void Task::setStatus(bool _status)
{
    this->status = _status;
}

string Task::getName()
{
    return this->name;
}

string Task::getDescription()
{
    return this->description;
}

string Task::getDeadline()
{
    return this->deadline;
}

bool Task::getStatus()
{
    return this->status;
}
