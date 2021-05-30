#include "menu/menu.cpp"
#include "Task/Task.hpp"
#include "Project/Project.hpp"
#include <iostream>
#include <typeinfo>

#include <vector>
int main(){

    Menu* menu = new Menu(); 
  /*  Tasks* p3 = new Project();
    Tasks* p = new Project(); cout << typeid(*p).name()<<endl ;
    Project p2(); cout << typeid(p2).name() <<endl;
    if (typeid(*p) == typeid(Project)) {cout << "a" << endl;}
*/
    Project* master_p = new Project();
    master_p->addName("master p");

   Tasks* master_p1 = new Project();   
    master_p1->addName("master p project1");
    master_p->addTask(master_p1);
    //cout << master_p1->getName();
    Tasks* master_p11 = new Task();
    Tasks* master_p12 = new Project();
    master_p11->addName("master p project1 subtask1");
    master_p12->addName("master p project1 project2");
   (dynamic_cast<Project*>(master_p1))->addTask(master_p11);
   (dynamic_cast<Project*>(master_p1))->addTask(master_p12); 
    Tasks* cmaster_p = new Project(*master_p);
    master_p->print(); std::cout << std::endl << std::endl;
    cmaster_p->print();
    delete menu;
    return 0;
}
