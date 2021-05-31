#include "menu/menu.cpp"
#include "Task/Task.hpp"
#include "Project/Project.hpp"
#include "Strategy/Scheduler.hpp"

#include <iostream>
#include <typeinfo>

#include <vector>
using std::cout;
using std::endl;
int main(){

    Menu* menu = new Menu(); 
  /*  Tasks* p3 = new Project();
    Tasks* p = new Project(); cout << typeid(*p).name()<<endl ;
    Project p2(); cout << typeid(p2).name() <<endl;
    if (typeid(*p) == typeid(Project)) {cout << "a" << endl;}
*/
    Project* master_p = new Project();
    master_p->addName("master p");
    master_p->addDeadline("06/03/00");

   Tasks* master_p1 = new Project();   
    master_p1->addName("master p project1");
    master_p->addTask(master_p1);
    master_p1->addDeadline("08/15/02");

Tasks* master_p2 = new Project();
master_p2->addName("master p project2"); master_p2->addDeadline("08/13/03");
master_p->addTask(master_p2);

Tasks* master_p11 = new Project();
master_p11->addName("master p project1 project1"); master_p11->addDeadline("08/14/02");
master_p1->addTask(master_p11);

Tasks* cmaster_p = new Project(*master_p);
    //cout << master_p1->getName();
/*    Tasks* master_p11 = new Task();
    Tasks* master_p12 = new Project();
    master_p11->addName("master p project1 subtask1");
    master_p12->addName("master p project1 project2");
   (dynamic_cast<Project*>(master_p1))->addTask(master_p11);
   (dynamic_cast<Project*>(master_p1))->addTask(master_p12); 
    Tasks* cmaster_p = new Project(*master_p);*/
   // master_p->print(); std::cout << std::endl << std::endl;
   // cmaster_p->print();
Tasks* t = (new Scheduler(cmaster_p))->sort();
t->print();

 //delete t;delete cmaster_p;  delete master_p;  
delete menu;
 
/*
vector<Tasks*>* cmaster_ptasks = dynamic_cast<Project*>(cmaster_p)->getTasks();
cmaster_ptasks->at(0)->addName("Surabhi");
	for(int i=0; i<cmaster_ptasks->size(); i++){
		cout << dynamic_cast<Project*>(cmaster_p)->getTasks()->at(i)->getName()<< "  " << cmaster_ptasks->at(i)->getName() << endl;
                cout << &(dynamic_cast<Project*>(cmaster_p)->getTasks()->at(i))<< "  " << &(cmaster_ptasks->at(i)) << endl;

}
*/
return 0;

}
