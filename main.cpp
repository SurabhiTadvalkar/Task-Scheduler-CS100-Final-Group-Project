#include "Tasks/Tasks.hpp"
#include "Task/Task.hpp"
#include "taskcommandsheader/addtask.hpp"
#include "taskcommandsheader/changetaskname.hpp"
#include "taskcommandsheader/changetaskdescription.hpp"
#include "taskcommandsheader/changetaskdeadline.hpp"
#include "taskcommandsheader/changetaskstatus.hpp"
#include "taskcommandsheader/taskcommand.hpp"
#include "taskcommandsheader/printTasks.hpp"
#include "Project/Project.hpp"
#include "menu/menu.hpp"
#include "Strategyheaders/Prioritize.hpp"
#include "Strategyheaders/Completed.hpp"
#include "Strategyheaders/Scheduler.hpp"

#include <string>
#include <iostream>
#include <vector>

void name(Menu*, Tasks*);
void description(Menu*, Tasks*);
void deadline(Menu*, Tasks*);
void status(Menu*, Tasks*);

Tasks* simpleTask(Menu*, vector<Tasks* >);
Tasks* projectTask(Menu*, vector<Tasks* >);
void printTask(Menu*, vector<Tasks* >); 

int main() {
    Menu* menu = new Menu();
    string input;
    string userInput;
    vector<Tasks* > taskList;   
 
    while (input != "q") {
        menu->generalMenu();
        cin >> input;

        if (input == "a") {
           Tasks* task = simpleTask(menu, taskList);    
  	   taskList.push_back(task);       
	}
 
        else if (input == "p") {
            Tasks* project = projectTask(menu, taskList);
            taskList.push_back(project);
        }
        else if (input == "o") {
	    printTask(menu, taskList);
	}
        else if (input == "e") {
            menu->editMenu();   
        }
    }
    
      
    return 0;
}

void printTask(Menu* menu, vector<Tasks* > tasks) {
    int input;

    cout << "Print options: \n0 - Scheduler \n1 - Completed\n";
    cin >> input;
    if (input == 0) {
        for (int i = 0; i < tasks.size(); ++i) {
            Scheduler* sched = new Scheduler(tasks.at(i));
            TaskCommand* cmd = new printTasks(sched);
            menu->setCommand(cmd);
            menu->ExecuteCommand();
        }
    }
    else {
        for (int i = 0; i < tasks.size(); ++i) {
            Completed* comp = new Completed(tasks.at(i));
            TaskCommand* cmd = new printTasks(comp);
            menu->setCommand(cmd);
            menu->ExecuteCommand();
        }
    }
}


Tasks* simpleTask(Menu* menu, vector<Tasks* > list) {
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
    list.push_back(task);   
    return task;  
}

Tasks* projectTask(Menu* menu, vector<Tasks* > list) {
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
           Tasks* project2 = projectTask(menu, list);
           TaskCommand *cmd = new addtask(project2, project);
           menu->setCommand(cmd);
           menu->ExecuteCommand();
        }
        else if (input == "s") {
            Tasks* task = simpleTask(menu, list);
            TaskCommand *cmd = new addtask(task, project);
            menu->setCommand(cmd);
            menu->ExecuteCommand();
        }
    }
    list.push_back(project);    
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
