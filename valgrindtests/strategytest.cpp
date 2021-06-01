#include "./../Tasks/Tasks.hpp"    //the first three may not be needed
#include "./../Task/Task.hpp"
#include "./../Project/Project.hpp"

#include "./../taskcommandsheader/taskcommand.hpp"
#include "./../taskcommandsheader/addtask.hpp"
#include "./../taskcommandsheader/changetaskname.hpp"
#include "./../taskcommandsheader/changetaskdeadline.hpp"
#include "./../taskcommandsheader/changetaskstatus.hpp"
#include "./../taskcommandsheader/changetaskdescription.hpp"
#include "./../taskcommandsheader/printTasks.hpp"

#include "./../Strategyheaders/Prioritize.hpp"
#include "./../Strategyheaders/Scheduler.hpp"
#include "./../Strategyheaders/Completed.hpp"

#include <iostream>

using namespace std;

void taskPrioritizePrint(); 
void projectPrioritizePrint();

void taskSchedulerPrint(); 
void projectSchedulerPrint();

void taskCompletedPrint();
void projectCompletedPrint();

void oneTaskSchedulerPrint();
void oneTaskCompletedPrint(); 

void complexPrioritizePrint();
void complexSchedulerPrint();
void complexCompletedPrint();

int main() {
    taskPrioritizePrint();
    projectPrioritizePrint();

    taskSchedulerPrint();
    projectSchedulerPrint();

    taskCompletedPrint();
    projectCompletedPrint();

    oneTaskSchedulerPrint();
   // oneTaskCompletedPrint();

   // complexPrioritizePrint();
   // complexSchedulerPrint();
   // complexCompletedPrint();

}

void taskPrioritizePrint() {
    Tasks* myTask = new Task();
    TaskCommand* myCommand = new changetaskname(myTask, "taskname");
    myCommand->execute();
    delete myCommand;

    Prioritize* myStrat = new Prioritize(myTask);
    myCommand = new printTasks(myStrat);
    myCommand->execute();
    cout << endl;
    delete myCommand; //can still do things with the task after this deletion, copy constructor 
    delete myTask;    //works as intended
}

void projectPrioritizePrint() {
    Tasks* myProject = new Project();
    TaskCommand* myCommand = new changetaskname(myProject, "projectname");
    myCommand->execute();
    delete myCommand;

    Prioritize* myStrat = new Prioritize(myProject);
    myCommand = new printTasks(myStrat);
    myCommand->execute();
    cout << endl;
    delete myCommand;
    delete myProject;
}

void taskSchedulerPrint() {
    Tasks* myTask = new Task();
    TaskCommand* myCommand = new changetaskname(myTask, "taskname");
    myCommand->execute();
    delete myCommand;

    Prioritize* myStrat = new Scheduler(myTask);
    myCommand = new printTasks(myStrat);
    myCommand->execute();
    cout << endl;
    delete myCommand;
    delete myTask;
}

void projectSchedulerPrint() {
    Tasks* myProject = new Project();
    TaskCommand* myCommand = new changetaskname(myProject, "projectname");
    myCommand->execute();
    delete myCommand;

    Prioritize* myStrat = new Scheduler(myProject);
    myCommand = new printTasks(myStrat);
    myCommand->execute();
    cout << endl;
    delete myCommand;
    delete myProject;
}

void taskCompletedPrint() {
    Tasks* myTask = new Task();
    TaskCommand* myCommand = new changetaskname(myTask, "taskname");
    myCommand->execute();
    delete myCommand;

    Prioritize* myStrat = new Completed(myTask);
    myCommand = new printTasks(myStrat);
    myCommand->execute();
    cout << endl;
    delete myCommand;
    delete myTask;

}

void projectCompletedPrint() {
    Tasks* myProject = new Project();
    TaskCommand* myCommand = new changetaskname(myProject, "projectname");
    myCommand->execute();
    delete myCommand;

    Prioritize* myStrat = new Completed(myProject);
    myCommand = new printTasks(myStrat);
    myCommand->execute();
    cout << endl;
    delete myCommand;
    delete myProject;
}

void oneTaskSchedulerPrint() {
    Project* project1 = new Project();

    TaskCommand* myCommand = new changetaskname(project1, "project1");
    myCommand->execute();
    delete myCommand;
    myCommand = new changetaskdescription(project1, "description1");
    myCommand->execute();
    delete myCommand;
    myCommand = new changetaskdeadline(project1, "12/05/21");
    myCommand->execute();
    delete myCommand;

    Tasks* item1_1 = new Task();
    myCommand = new changetaskname(item1_1, "project1_task1");
    myCommand->execute();
    delete myCommand;
    myCommand = new changetaskdescription(item1_1, "description1_1");
    myCommand->execute();
    delete myCommand;
    myCommand = new changetaskdeadline(item1_1, "11/28/21");
    myCommand->execute();
    delete myCommand;

    Tasks* item1_2 = new Task();
    myCommand = new changetaskname(item1_2, "project1_task2");
    myCommand->execute();
    delete myCommand;
    myCommand = new changetaskdescription(item1_2, "description1_2");
    myCommand->execute();
    delete myCommand;
    myCommand = new changetaskdeadline(item1_2, "11/27/21");
    myCommand->execute();
    delete myCommand;

    Tasks* project2 = new Project();
    myCommand = new changetaskname(project2, "project2");
    myCommand->execute();
    delete myCommand;
    myCommand = new changetaskdescription(project2, "description2");
    myCommand->execute();
    delete myCommand;
    myCommand = new changetaskdeadline(project2, "07/03/00");
    myCommand->execute();
    delete myCommand;


    myCommand = new addtask(item1_1, project1);
    myCommand->execute();
    delete myCommand;

    myCommand = new addtask(item1_2, project1);
    myCommand->execute();
    delete myCommand;

    myCommand = new addtask(project2, project1);
    myCommand->execute();
    delete myCommand;

    Prioritize* myStrat = new Scheduler(project1);
    myCommand = new printTasks(myStrat);
    myCommand->execute();
    cout << endl;

    delete myCommand;
    delete project1;
}

void oneTaskCompletedPrint() {

}


void complexPrioritizePrint() {
    Project* project1 = new Project();

    TaskCommand* myCommand = new changetaskname(project1, "project1");
    myCommand->execute();
    delete myCommand;
    myCommand = new changetaskdescription(project1, "description1");
    myCommand->execute();
    delete myCommand;
    myCommand = new changetaskdeadline(project1, "12/05/21");
    myCommand->execute();
    delete myCommand;

    Tasks* item1_1 = new Task();
    myCommand = new changetaskname(item1_1, "project1_task1");
    myCommand->execute();
    delete myCommand;
    myCommand = new changetaskdescription(item1_1, "description1_1");
    myCommand->execute();
    delete myCommand;
    myCommand = new changetaskdeadline(item1_1, "11/28/21");
    myCommand->execute();
    delete myCommand;


    Tasks* item1_2 = new Task();
    myCommand = new changetaskname(item1_2, "project1_task2");
    myCommand->execute();
    delete myCommand;
    myCommand = new changetaskdescription(item1_2, "description1_2");
    myCommand->execute();
    delete myCommand;
    myCommand = new changetaskdeadline(item1_2, "12/27/21");
    myCommand->execute();
    delete myCommand;


    Project* project2 = new Project();
    myCommand = new changetaskname(project2, "project2");
    myCommand->execute();
    delete myCommand;
    myCommand = new changetaskdescription(project2, "description2");
    myCommand->execute();
    delete myCommand;
    myCommand = new changetaskdeadline(project2, "12/19/21");
    myCommand->execute();
    delete myCommand;


    Tasks* item2_1 = new Task();
    myCommand = new changetaskname(item2_1, "project2_task1");
    myCommand->execute();
    delete myCommand;
    myCommand = new changetaskdescription(item2_1, "description2_1");
    myCommand->execute();
    delete myCommand;
    myCommand = new changetaskdeadline(item2_1, "11/13/21");
    myCommand->execute();
    delete myCommand;


    Tasks* item2_2 = new Task();
    myCommand = new changetaskname(item2_2, "project2_task2");
    myCommand->execute();
    delete myCommand;
    myCommand = new changetaskdescription(item2_2, "description2_2");
    myCommand->execute();
    delete myCommand;
    myCommand = new changetaskdeadline(item2_2, "11/16/21");
    myCommand->execute();
    delete myCommand;


    Project* project3 = new Project();
    myCommand = new changetaskname(project3, "project3");
    myCommand->execute();
    delete myCommand;
    myCommand = new changetaskdeadline(project3, "12/25/21");
    myCommand->execute();
    delete myCommand;


    Tasks* item3_1 = new Task();
    myCommand = new changetaskname(item3_1, "project3_task1");
    myCommand->execute();
    delete myCommand;
    myCommand = new changetaskdeadline(item3_1, "01/11/11");
    myCommand->execute();
    delete myCommand;


    Tasks* item3_2 = new Task();
    myCommand = new changetaskname(item3_2, "project3_task2");
    myCommand->execute();
    delete myCommand;

    Tasks* item4_1 = new Task();
    myCommand = new changetaskname(item4_1, "project1_task3");
    myCommand->execute();
    delete myCommand;


    Tasks* item4_2 = new Task();
    myCommand = new changetaskname(item4_2, "project1_task4");
    myCommand->execute();
    delete myCommand;

    myCommand = new addtask(item1_1, project1);
    myCommand->execute();
    delete myCommand;

    myCommand = new addtask(item1_2, project1);
    myCommand->execute();
    delete myCommand;

    myCommand = new addtask(item2_1, project2);
    myCommand->execute();
    delete myCommand;

    myCommand = new addtask(item2_2, project2);
    myCommand->execute();
    delete myCommand;

    myCommand = new addtask(item3_1, project3);
    myCommand->execute();
    delete myCommand;

    myCommand = new addtask(item3_2, project3);
    myCommand->execute();
    delete myCommand;

    myCommand = new addtask(project3, project2);
    myCommand->execute();
    delete myCommand;

    myCommand = new addtask(project2, project1);
    myCommand->execute();
    delete myCommand;

    myCommand = new addtask(item4_1, project1);
    myCommand->execute();
    delete myCommand;

    myCommand = new addtask(item4_2, project1);
    myCommand->execute();
    delete myCommand;

    Prioritize* myStrat = new Prioritize(project1);
    myCommand = new printTasks(myStrat);
    myCommand->execute();
    cout << endl;
    delete myCommand;
    delete project1;
}

void complexSchedulerPrint() {
    Project* project1 = new Project();

    TaskCommand* myCommand = new changetaskname(project1, "project1");
    myCommand->execute();
    delete myCommand;
    myCommand = new changetaskdescription(project1, "description1");
    myCommand->execute();
    delete myCommand;
    myCommand = new changetaskdeadline(project1, "12/05/21");
    myCommand->execute();
    delete myCommand;

    Tasks* item1_1 = new Task();
    myCommand = new changetaskname(item1_1, "project1_task1");
    myCommand->execute();
    delete myCommand;
    myCommand = new changetaskdescription(item1_1, "description1_1");
    myCommand->execute();
    delete myCommand;
    myCommand = new changetaskdeadline(item1_1, "11/28/21");
    myCommand->execute();
    delete myCommand;


    Tasks* item1_2 = new Task();
    myCommand = new changetaskname(item1_2, "project1_task2");
    myCommand->execute();
    delete myCommand;
    myCommand = new changetaskdescription(item1_2, "description1_2");
    myCommand->execute();
    delete myCommand;
    myCommand = new changetaskdeadline(item1_2, "12/27/21");
    myCommand->execute();
    delete myCommand;


    Project* project2 = new Project();
    myCommand = new changetaskname(project2, "project2");
    myCommand->execute();
    delete myCommand;
    myCommand = new changetaskdescription(project2, "description2");
    myCommand->execute();
    delete myCommand;
    myCommand = new changetaskdeadline(project2, "12/19/21");
    myCommand->execute();
    delete myCommand;


    Tasks* item2_1 = new Task();
    myCommand = new changetaskname(item2_1, "project2_task1");
    myCommand->execute();
    delete myCommand;
    myCommand = new changetaskdescription(item2_1, "description2_1");
    myCommand->execute();
    delete myCommand;
    myCommand = new changetaskdeadline(item2_1, "11/13/21");
    myCommand->execute();
    delete myCommand;


     Tasks* item2_2 = new Task();
    myCommand = new changetaskname(item2_2, "project2_task2");
    myCommand->execute();
    delete myCommand;
    myCommand = new changetaskdescription(item2_2, "description2_2");
    myCommand->execute();
    delete myCommand;
    myCommand = new changetaskdeadline(item2_2, "11/16/21");
    myCommand->execute();
    delete myCommand;


    Project* project3 = new Project();
    myCommand = new changetaskname(project3, "project3");
    myCommand->execute();
    delete myCommand;
    myCommand = new changetaskdeadline(project3, "12/25/21");
    myCommand->execute();
    delete myCommand;


    Tasks* item3_1 = new Task();
    myCommand = new changetaskname(item3_1, "project3_task1");
    myCommand->execute();
    delete myCommand;
    myCommand = new changetaskdeadline(item3_1, "01/11/11");
    myCommand->execute();
    delete myCommand;


    Tasks* item3_2 = new Task();
    myCommand = new changetaskname(item3_2, "project3_task2");
    myCommand->execute();
    delete myCommand;

    Tasks* item4_1 = new Task();
    myCommand = new changetaskname(item4_1, "project1_task3");
    myCommand->execute();
    delete myCommand;


    Tasks* item4_2 = new Task();
    myCommand = new changetaskname(item4_2, "project1_task4");
    myCommand->execute();
    delete myCommand;

    myCommand = new addtask(item1_1, project1);
    myCommand->execute();
    delete myCommand;

    myCommand = new addtask(item1_2, project1);
    myCommand->execute();
    delete myCommand;

    myCommand = new addtask(item2_1, project2);
    myCommand->execute();
    delete myCommand;

    myCommand = new addtask(item2_2, project2);
    myCommand->execute();
    delete myCommand;

    myCommand = new addtask(item3_1, project3);
    myCommand->execute();
    delete myCommand;

    myCommand = new addtask(item3_2, project3);
    myCommand->execute();
    delete myCommand;

    myCommand = new addtask(project3, project2);
    myCommand->execute();
    delete myCommand;

    myCommand = new addtask(project2, project1);
    myCommand->execute();
    delete myCommand;

    myCommand = new addtask(item4_1, project1);
    myCommand->execute();
    delete myCommand;

    myCommand = new addtask(item4_2, project1);
    myCommand->execute();
    delete myCommand;

    Prioritize* myStrat = new Scheduler(project1);
    myCommand = new printTasks(myStrat);
    myCommand->execute();
    cout << endl;

    delete myCommand;
    delete project1;
}

void complexCompletedPrint() {
    Project* project1 = new Project();

    TaskCommand* myCommand = new changetaskname(project1, "project1");
    myCommand->execute();
    delete myCommand;
    myCommand = new changetaskdescription(project1, "description1");
    myCommand->execute();
    delete myCommand;
    myCommand = new changetaskdeadline(project1, "12/05/21");
    myCommand->execute();
    delete myCommand;

    Tasks* item1_1 = new Task();
    myCommand = new changetaskname(item1_1, "project1_task1");
    myCommand->execute();
    delete myCommand;
    myCommand = new changetaskdescription(item1_1, "description1_1");
    myCommand->execute();
    delete myCommand;
    myCommand = new changetaskdeadline(item1_1, "11/28/21");
    myCommand->execute();
    delete myCommand;


    Tasks* item1_2 = new Task();
    myCommand = new changetaskname(item1_2, "project1_task2");
    myCommand->execute();
    delete myCommand;
    myCommand = new changetaskdescription(item1_2, "description1_2");
    myCommand->execute();
    delete myCommand;
    myCommand = new changetaskdeadline(item1_2, "12/27/21");
    myCommand->execute();
    delete myCommand;


    Project* project2 = new Project();
    myCommand = new changetaskname(project2, "project2");
    myCommand->execute();
    delete myCommand;
    myCommand = new changetaskdescription(project2, "description2");
    myCommand->execute();
    delete myCommand;
    myCommand = new changetaskdeadline(project2, "12/19/21");
    myCommand->execute();
    delete myCommand;


    Tasks* item2_1 = new Task();
    myCommand = new changetaskname(item2_1, "project2_task1");
    myCommand->execute();
    delete myCommand;
    myCommand = new changetaskdescription(item2_1, "description2_1");
    myCommand->execute();
    delete myCommand;
    myCommand = new changetaskdeadline(item2_1, "11/13/21");
    myCommand->execute();
    delete myCommand;


     Tasks* item2_2 = new Task();
    myCommand = new changetaskname(item2_2, "project2_task2");
    myCommand->execute();
    delete myCommand;
    myCommand = new changetaskdescription(item2_2, "description2_2");
    myCommand->execute();
    delete myCommand;
    myCommand = new changetaskdeadline(item2_2, "11/16/21");
    myCommand->execute();
    delete myCommand;


    Project* project3 = new Project();
    myCommand = new changetaskname(project3, "project3");
    myCommand->execute();
    delete myCommand;
    myCommand = new changetaskdeadline(project3, "12/25/21");
    myCommand->execute();
    delete myCommand;


    Tasks* item3_1 = new Task();
    myCommand = new changetaskname(item3_1, "project3_task1");
    myCommand->execute();
    delete myCommand;
    myCommand = new changetaskdeadline(item3_1, "01/11/11");
    myCommand->execute();
    delete myCommand;


    Tasks* item3_2 = new Task();
    myCommand = new changetaskname(item3_2, "project3_task2");
    myCommand->execute();
    delete myCommand;

    Tasks* item4_1 = new Task();
    myCommand = new changetaskname(item4_1, "project1_task3");
    myCommand->execute();
    delete myCommand;


    Tasks* item4_2 = new Task();
    myCommand = new changetaskname(item4_2, "project1_task4");
    myCommand->execute();
    delete myCommand;

    myCommand = new addtask(item1_1, project1);
    myCommand->execute();
    delete myCommand;

    myCommand = new addtask(item1_2, project1);
    myCommand->execute();
    delete myCommand;

    myCommand = new addtask(item2_1, project2);
    myCommand->execute();
    delete myCommand;

    myCommand = new addtask(item2_2, project2);
    myCommand->execute();
    delete myCommand;

    myCommand = new addtask(item3_1, project3);
    myCommand->execute();
    delete myCommand;

    myCommand = new addtask(item3_2, project3);
    myCommand->execute();
    delete myCommand;

    myCommand = new addtask(project3, project2);
    myCommand->execute();
    delete myCommand;

    myCommand = new addtask(project2, project1);
    myCommand->execute();
    delete myCommand;

    myCommand = new addtask(item4_1, project1);
    myCommand->execute();
    delete myCommand;

    myCommand = new addtask(item4_2, project1);
    myCommand->execute();
    delete myCommand;

    Prioritize* myStrat = new Completed(project1);
    myCommand = new printTasks(myStrat);
    myCommand->execute();
    cout << endl;

    delete myCommand;
    delete project1;
}





