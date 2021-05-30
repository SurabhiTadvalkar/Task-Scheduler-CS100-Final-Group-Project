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
	Project(const Project& rhs);
	//Project operator = (const Project& rhs);
        virtual string findClosestDeadline();
        virtual void addTask(Tasks* task);
        virtual void removeTask(Tasks* targetTask); 
        virtual Tasks* findTask(string targetString);
        virtual void print();

};

#endif
