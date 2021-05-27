#ifndef __TASKS_HPP__
#define __TASKS_HPP__

#include <string>
using std::string;

class Tasks {
    protected: 
        string name;
        string description;
        string deadline;
        bool status;

    public:
        Tasks();

        ~Tasks();

        virtual void print() = 0;
        virtual void addName(string _name) = 0;
        virtual void addDescription(string _description) = 0;
        virtual void addDeadline(string _deadline) = 0;
        virtual void setStatus(bool _status) = 0;

        virtual string getName() = 0;
        virtual string getDescription() = 0;
        virtual string getDeadline() = 0;
        virtual bool getStatus() = 0;
        
};

#endif
