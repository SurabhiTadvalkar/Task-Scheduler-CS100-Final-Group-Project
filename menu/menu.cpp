#include "menu.hpp"
#include <iostream>

void Menu::simpleMenu(){}
void Menu::complexMenu(){}
void Menu::generalMenu(){
    std::cout << "TASK SCHEDULER" << std::endl;
    std::cout << "a- add simple task" << std::endl;
    std::cout << "p- add project" << std::endl;
    std::cout << "o- print my list"<< std::endl;
    std::cout << "e- edit task" << std::endl;
    std::cout << "q- quit" << std::endl;
}
void Menu::editMenu(){}
//void Menu::setCommand(TaskCommand *command){}
