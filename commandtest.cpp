#include "gtest/gtest.h"

#include "taskmock/TaskMock.hpp"

#include "taskcommandssrc/addcomplextask.cpp" //dont test for now
#include "taskcommandssrc/changetaskname.cpp"
#include "taskcommandssrc/changetaskdeadline.cpp"
#include "taskcommandssrc/changetaskstatus.cpp"
#include "taskcommandssrc/changetaskdescription.cpp"
#include "taskcommandssrc/printTasks.cpp"

TEST(TaskCommands, changetaskname){
    TaskMock* myTask = new TaskMock();  

    TaskCommand* myCommand = new changetaskname(myTask, "name"); 

    myCommand->execute(); 

    EXPECT_EQ(myTask.testVar, 5);
}


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
