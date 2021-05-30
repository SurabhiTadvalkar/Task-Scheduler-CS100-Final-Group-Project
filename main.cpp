#include "menu/menu.cpp"
#include "Task/Task.hpp"
#include "Project/Project.hpp"
#include <iostream>
#include <typeinfo>
int main(){

    Menu* menu = new Menu();
    Tasks* t1 = new Task();
    if(typeid(Project)== typeid(*t1)){
	std::cout << "a" << std::endl;
}else {std::cout << "b" << std::endl;}



/*
     Tasks* t1 = new Task();
    Tasks* p1 = new Project();

const type_info& ti1 = typeid(*t1);
const type_info& pi1 = typeid(*p1);

const type_info* ti2 = &ti1;
const type_info* pi2 = &pi1;
delete ti2;
delete pi2;


const type_info& ti1 = typeid(*p1);
const type_inso& pi1 = typeid(*p1);


if(ti1 == pi1) {
std::cout << "task and project are of the same type" << std::endl;


}else{std::cout << "different" << std::endl;}
    */

    //task->addName("Patricia");

    
    //std::cout << task->getName() << std::endl;
    //std::cout << task2.getName() << std::endl<< std::endl;

    //task2.addName("Surabhi");
    //std::cout << task->getName() << std::endl;
    //std::cout << task2.getName() << std::endl;

    delete menu;
    //delete task;
    //delete task2;
    return 0;


}
