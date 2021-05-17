#ifndef __TASK_HPP__
#define __TASK_HPP__

#include "../Tasks/Tasks.hpp"

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class Task : public Tasks {
    public:
        Task();
        ~Task() {};

        virtual void print();
        virtual void addName(string );
        virtual void addDescription(string );
        virtual void addDeadline(string);
        virtual void setStatus(bool );

        virtual string getName();
        virtual string getDescription();
        virtual string getDeadline();
        virtual bool getStatus();
};

#endif
