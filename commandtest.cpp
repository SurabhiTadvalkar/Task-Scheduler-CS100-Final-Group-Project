#include "gtest/gtest.h"

#include "taskmock/Tasks.hpp"
#include "taskmock/TaskMock.hpp"

#include "taskcommandsheader/taskcommand.hpp"
#include "taskcommandsheader/addcomplextask.hpp" //dont test for now
#include "taskcommandsheader/changetaskname.hpp"
#include "taskcommandsheader/changetaskdeadline.hpp"
#include "taskcommandsheader/changetaskstatus.hpp"
#include "taskcommandsheader/changetaskdescription.hpp"
#include "taskcommandsheader/printTasks.hpp"

TEST(TaskCommands, firsttest){
    Tasks* myTask = new TaskMock();  

    TaskCommand* myCommand = new changetaskname(myTask, "name");

    myCommand->execute(); 

    EXPECT_EQ(myTask->getTestVar(), 5);
}


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
