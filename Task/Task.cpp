#include "Task.hpp"
#include <string>

Task::Task(){}

Task::~Task(){}

Task::Task(const Task& rhs){
	name = new string();
	deadline = new string();
	description = new string();
	status = new bool();

	(*name) = (*rhs.name);
	(*deadline) = (*rhs.deadline);
	(*description) = (*rhs.description);
	(*status) = (*rhs.status);
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
