#include "Tasks/Tasks.hpp"
#include "Task/Task.hpp"
#include "taskcommandsheader/addtask.hpp"
#include "taskcommandsheader/changetaskname.hpp"
#include "taskcommandsheader/changetaskdescription.hpp"
#include "taskcommandsheader/changetaskdeadline.hpp"
#include "taskcommandsheader/changetaskstatus.hpp"
#include "taskcommandsheader/taskcommand.hpp"
#include "Project/Project.hpp"
#include "menu/menu.hpp"


#include <string>
#include <iostream>

void name(Menu*, Tasks*);
void description(Menu*, Tasks*);
void deadline(Menu*, Tasks*);
void status(Menu*, Tasks*);

Tasks* simpleTask(Menu*);
Tasks* projectTask(Menu*);
  

int main() {
    Menu* menu = new Menu();
    string input;
    string userInput;

    while (input != "q") {
        menu->generalMenu();
        cin >> input;

        if (input == "a") {
            simpleTask(menu);    
        }

        else if (input == "p") {
            Tasks* project = projectTask(menu);
            //project->print();  testing purposes
        }
       
        else if (input == "e") {
            menu->editMenu();
          
                
                
        
        }
    }
    
    
    
    return 0;
}

Tasks* simpleTask(Menu* menu) {
    string input;

    Tasks* task = new Task();

    while (input != "q") {
        menu->simpleMenu();
        cin >> input;

        if (input == "n") {
            name(menu, task);
        }
        else if (input == "d") {
            description(menu, task);
        }
        else if (input == "t") {
            deadline(menu, task);
        }
        else if (input == "b") {
            status(menu, task);
        }
    }    
    return task;  
}

Tasks* projectTask(Menu* menu) {
    string input;

    Tasks* project = new Project();

     while (input != "q") {
        menu->complexMenu();
        cin >> input;

        if (input == "n") {
            name(menu, project);
        }
        else if (input == "d") {
            description(menu, project);
        }
        else if (input == "t") {
            deadline(menu, project);
        }
        else if (input == "b") {
            status(menu, project);
        }
        else if (input == "c") {
           Tasks* project2 = projectTask(menu);
           TaskCommand *cmd = new addtask(project2, project);
           menu->setCommand(cmd);
           menu->ExecuteCommand();
        }
        else if (input == "s") {
            Tasks* task = simpleTask(menu);
            TaskCommand *cmd = new addtask(task, project);
            menu->setCommand(cmd);
            menu->ExecuteCommand();
        }
    }    
    return project;
}

void name(Menu* menu, Tasks* task) {
    string userInput;

    cout << "Enter name: ";
    cin.ignore();
    getline(cin, userInput);
    cout << endl;
                    
    menu->setUserInput(userInput);
    TaskCommand *cmd1 = new changetaskname(task, menu->UserInput());
    menu->setCommand(cmd1);
    menu->ExecuteCommand();
}

void description(Menu* menu, Tasks* task) {
    string userInput;

    cout << "Enter description: ";
    cin.ignore();
    getline(cin, userInput);
    cout << endl;
                    
    menu->setUserInput(userInput);
    TaskCommand *cmd1 = new changetaskdescription(task, menu->UserInput());
    menu->setCommand(cmd1);
    menu->ExecuteCommand();
}

void deadline(Menu* menu, Tasks* task) {
    string userInput;

    cout << "Enter deadline: ";
    cin.ignore();
    getline(cin, userInput);
    cout << endl;
                    
    menu->setUserInput(userInput);
    TaskCommand *cmd1 = new changetaskdeadline(task, menu->UserInput());
    menu->setCommand(cmd1);
    menu->ExecuteCommand();
}

void status(Menu* menu, Tasks* task) {
    bool userInput;

    cout << "Update status: \n0 - Not Finished \n1 - Finished\n";
    cin >> userInput;
    cout << endl;
    
    TaskCommand *cmd1 = new changetaskstatus(task, userInput);
    menu->setCommand(cmd1);
    menu->ExecuteCommand();
}
