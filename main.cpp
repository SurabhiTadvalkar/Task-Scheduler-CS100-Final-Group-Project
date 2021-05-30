#include "menu/menu.cpp"
#include "Task/Task.hpp"
#include "Project/Project.hpp"
#include <iostream>
#include <typeinfo>

#include <vector>
int main(){

    Menu* menu = new Menu();

    vector<int*> in;
    vector<int*> nt;
    in = nt;
  Tasks* p = new Project();
    Tasks* p2 = new Project();
    p->addName("Surabhi");
    p->addDescription("Surabhi2");
    p->addDeadline("Surabhi3");
    p->setStatus(true);

    dynamic_cast<Project*>(p)->addTask(p2);
  
    Tasks* cp = new Project(*(dynamic_cast<Project*>(p)));
    
  

    delete cp;
 
    delete p;
    delete menu;
    return 0;
}
