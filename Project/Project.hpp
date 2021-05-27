#ifndef __PROJECT_HPP__
#define __PROJECT_HPP__

#include "../Tasks/Tasks.hpp"

#include <iostream>
#include <string>
#include <vector>

using std::string;

class Project : public Tasks {
    private:
        std::vector<Tasks* > tasks;
        string closestDeadline;

        bool isLessThan(string , string );   
    
    public:
        Project();

        ~Project();

        string findClosestDeadline();
        void addTask(Tasks* );
        virtual void print();
        virtual void addName(string _name);
        virtual void addDescription(string _description);
        virtual void addDeadline(string _deadline);
        virtual void setStatus(bool _status);

        string getName();
        string getDescription();
        string getDeadline();
        bool getStatus();
};

#endif
