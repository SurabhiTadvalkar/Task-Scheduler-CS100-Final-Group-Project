#include "Task.hpp"
#include <string>

Task::Task(){}

Task::~Task(){
    delete name;
    delete deadline;
    delete description;
    delete status;
    delete myTaskParent;
}

Task::Task(const Task& rhs){
	name = new string();
	deadline = new string();
	description = new string();
	status = new bool();

	(*name) = (*rhs.name);
	(*deadline) = (*rhs.deadline);
	(*description) = (*rhs.description);
	(*status) = (*rhs.status);
	myTaskParent = 0;
}


void Task::print() {
    if (!(*name).empty() )   //tasks need a name
    {
        cout << "Task: " << (*name) << endl;

        if (!(*description).empty() )
        {
            cout << "Description: " << (*description) << endl;
        }
        if (!(*deadline).empty() )
        {
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
    }
}
