#include "Task.hpp"
#include <string>

void Task::print() {
    if (!(*name).empty())   //tasks need a name
    {
        this->countTabs();
	this->printTabs();
	cout << "Task: " << (*name) << endl;

	if (!(*description).empty())
	{
	    this->printTabs();
	    cout << "Description: " << (*description) << endl;
	}
	if (!(*deadline).empty())
	{
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
    }
}
