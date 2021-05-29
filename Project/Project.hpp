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
        Project(){}

        ~Project();

        string findClosestDeadline();
        void addTask(Tasks* );
        virtual void print();
};

#endif


