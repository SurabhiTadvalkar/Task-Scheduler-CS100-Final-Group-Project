#include "gtest/gtest.h"

#include "taskmock/Tasks.hpp"
#include "taskmock/TaskMock.hpp"
#include "taskmock/ProjectMock.hpp" 

#include "taskcommandsheader/taskcommand.hpp"
#include "taskcommandsheader/addtask.hpp" 
#include "taskcommandsheader/changetaskname.hpp"
#include "taskcommandsheader/changetaskdeadline.hpp"
#include "taskcommandsheader/changetaskstatus.hpp"
#include "taskcommandsheader/changetaskdescription.hpp"
#include "taskcommandsheader/printTasks.hpp"

TEST(TaskCommands, printTasks) {
    Tasks* myTask = new TaskMock();

    TaskCommand* myCommand = new printTasks(myTask);

    myCommand->execute(); 

    EXPECT_EQ(myTask->getTestVar(), 1); 
}

TEST(TaskCommands, changetaskdeadline) {
    Tasks* myTask = new TaskMock();

    TaskCommand* myCommand = new changetaskdeadline(myTask, "deadline");

    myCommand->execute();

    EXPECT_EQ(myTask->getTestVar(), 2);
}

TEST(TaskCommands, changetaskstatus) {
    Tasks* myTask = new TaskMock();

    TaskCommand* myCommand = new changetaskstatus(myTask, false);

    myCommand->execute();

    EXPECT_EQ(myTask->getTestVar(), 3);
}

TEST(TaskCommands, changetaskdescription) {
    Tasks* myTask = new TaskMock();

    TaskCommand* myCommand = new changetaskdescription(myTask, "description");

    myCommand->execute();

    EXPECT_EQ(myTask->getTestVar(), 4);
}

TEST(TaskCommands, changetaskname) {
    Tasks* myTask = new TaskMock();

    TaskCommand* myCommand = new changetaskname(myTask, "name");

    myCommand->execute();

    EXPECT_EQ(myTask->getTestVar(), 5);
}

TEST(TaskCommands, addtask) {
    Tasks* myProject = new ProjectMock();
    Tasks* myTask = new TaskMock();  

    TaskCommand* myCommand = new addtask(myTask, myProject);

    myCommand->execute(); 

    EXPECT_EQ(myProject->getTestVar(), 6); 
}

TEST(TaskCommands, mixcommandsone) {
    Tasks* myTask = new TaskMock();
    TaskCommand* myCommand = new changetaskname(myTask, "name");
    myCommand->execute();
    EXPECT_EQ(myTask->getTestVar(), 5);

    myCommand = new changetaskstatus(myTask, false); 
    myCommand->execute(); 
    EXPECT_EQ(myTask->getTestVar(), 3);
}

TEST(TaskCommands, mixcommandstwo) {
    Tasks* myProject = new ProjectMock();
    Tasks* myTask = new TaskMock();

    TaskCommand* myCommand1 = new addtask(myTask, myProject);

    myCommand1->execute();

    TaskCommand* myCommand2 = new changetaskdescription(myTask, "description");
    
    myCommand2->execute(); 

    EXPECT_EQ(myProject->getTestVar(), 6); 
    EXPECT_EQ(myTask->getTestVar(), 4);    
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
