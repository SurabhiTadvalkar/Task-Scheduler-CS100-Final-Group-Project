#include "Tasks.hpp"

Tasks::Tasks()
{
    name = new string("");
    description = new string ("");;
    deadline = new string("");
    status = new bool(false);
}

Tasks::~Tasks() {
    delete name;
    delete description;
    delete deadline;
    delete status;
}

int Tasks::countTabs(){
    return tabCount;
}

void Tasks::printTabs(){
    for(int i=0; i<tabCount; i++){
        std::cout << "\t" ;
    }

}

void Tasks::addName(string _name){
    (*name) = _name;
}

void Tasks::addDescription(string _description){
    (*description) = _description;
}

void Tasks::addDeadline(string _deadline){
    (*deadline) = _deadline;
}

void Tasks::setStatus(bool _status){
    (*status) = _status;
}

string Tasks::getName(){
    return (*name);
}

string Tasks::getDescription(){
    return (*description);
}

string Tasks::getDeadline(){
    return (*deadline);
}

bool Tasks::getStatus(){
    return (*status);
}
