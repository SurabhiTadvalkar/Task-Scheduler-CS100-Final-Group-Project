#ifndef __TASKS_HPP__
#define __TASKS_HPP__

#include <string>
#include <iostream>
using namespace std;

class Tasks {
    protected:
        string* name;
        string* description;
        string* deadline;
        bool* status;
        Tasks* myTaskParent;
        int tabCount;

        int countTabs();
        void printTabs();

    public:
        Tasks();

        virtual ~Tasks();
	Tasks(Tasks&);
        virtual void print() = 0;
        void addName(string _name);
        void addDescription(string _description);
        void addDeadline(string _deadline);
        void setStatus(bool _status);

        string getName();
        string getDescription();
        string getDeadline();
        bool getStatus();

};

#endif
