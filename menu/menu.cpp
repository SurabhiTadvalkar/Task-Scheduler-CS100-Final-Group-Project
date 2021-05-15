#include "menu.hpp"

void Menu::simpleMenu(){
    std::cout <<  std::endl;
    std::cout << "n- name *you must enter a name" << std::endl;
    std::cout << "d- description" << std::endl;
    std::cout << "t- deadline"<< std::endl;
    std::cout << "b- status" << std::endl;
    std::cout << "q- I'm done entering info" << std::endl;
}
void Menu::complexMenu(){
    std::cout <<  std::endl;
    std::cout << "n- name *you must enter a name" << std::endl;
    std::cout << "d- description" << std::endl;
    std::cout << "t- deadline"<< std::endl;
    std::cout << "b- status" << std::endl;
    std::cout << "c- project subtask" << std::endl;
    std::cout << "s- simple subtask" << std::endl;
    std::cout << "q- I'm done entering info" << std::endl;
}
void Menu::generalMenu(){
    std::cout << std::endl;
    std::cout << "TASK SCHEDULER" << std::endl;
    std::cout << "a- add simple task" << std::endl;
    std::cout << "p- add project" << std::endl;
    std::cout << "o- print my list"<< std::endl;
    std::cout << "e- edit task" << std::endl;
    std::cout << "q- quit" << std::endl;
}
void Menu::editMenu(){}
std::string Menu::UserInput(){
    return userinput;
}
void Menu::setUserInput(std::string input){
    userinput = input;
}
//void setCommand(TaskCommand* command){}
//TaskCommand* Command(){}

