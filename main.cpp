#include "menu/menu.cpp"
#include "Task/Task.hpp"
#include "Project/Project.hpp"
#include <iostream>
#include <typeinfo>

#include <vector>
int main(){

    Menu* menu = new Menu();
    
    Project* master_p = new Project();
    master_p->addName("master p");

    Tasks* master_p1 = new Project();   
    master_p1->addName("master p project1");
    master_p->addTask(master_p1);

    Tasks* master_p11 = new Task();
    master_p11->addName("master p project1 subtask1");
   (dynamic_cast<Project*>(master_p1))->addTask(master_p11);
    
    Tasks* cmaster_p = new Project(*master_p);

    delete menu;
    return 0;
}
