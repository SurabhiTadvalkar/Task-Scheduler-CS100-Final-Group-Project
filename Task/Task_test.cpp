#include "gtest/gtest.h"
#include "../Tasks/Tasks.hpp"
#include "Task.hpp"

using std::string;

TEST(TaskClass, Constructor) {
   Task* task = new Task();
   bool testBool = false;

   if (task->getName() == "" && task->getDescription() == "" && task->getDeadline() == "" & task->getStatus() == false)
   {
      testBool = true;
   }

   EXPECT_EQ(testBool, true);
}

TEST(TaskClassCopyConstructor, h){}

TEST(TaskClassName, AddName) {
   Task* task = new Task();
   task->addName("John Doe");

   EXPECT_EQ(task->getName(), "John Doe");
}

TEST(TaskClassName, AddNameMultipleTimes) {
   Task* task = new Task();
   task->addName("John Doe");
   task->addName("Jason Smith");
   task->addName("Jane Doe");

   EXPECT_EQ(task->getName(), "Jane Doe");
}

TEST(TaskClassName, AddNameEmpty) {
   Task* task = new Task();
   task->addName("");

   EXPECT_EQ(task->getName(), "");
}

TEST(TaskClassDescription, AddDescription) {
   Task* task = new Task();
   task->addDescription("Clean the room today");

   EXPECT_EQ(task->getDescription(), "Clean the room today");
}

TEST(TaskClassDescription, AddDescriptionMultipleTimes) {
   Task* task = new Task();
   task->addDescription("Clean room");
   task->addDescription("Mop floor");
   task->addDescription("Go walk the dog");

   EXPECT_EQ(task->getDescription(), "Go walk the dog");
}

TEST(TaskClassDescription, AddDescriptionEmpty) {
   Task* task = new Task();
   task->addDescription("");

   EXPECT_EQ(task->getDescription(), "");
}

TEST(TaskClassDeadline, AddDeadline) {
   Task* task = new Task();
   task->addDeadline("Tomorrow");

   EXPECT_EQ(task->getDeadline(), "Tomorrow");
}

TEST(TaskClassDeadline, AddDeadlineMultipleTimes) {
   Task* task = new Task();
   task->addDeadline("5/17/21");
   task->addDeadline("6/17/21");
   task->addDeadline("7/17/21");

   EXPECT_EQ(task->getDeadline(), "7/17/21");
}

TEST(TaskClassDeadline, AddDeadlineEmpty) {
   Task* task = new Task();
   task->addDeadline("");

   EXPECT_EQ(task->getDeadline(), "");
}

TEST(TaskClassStatus, AddStatusFalse) {
   Task* task = new Task();
   task->setStatus(false);

   EXPECT_EQ(task->getStatus(), false);
}

TEST(TaskClassStatus, AddStatusTrue) {
   Task* task = new Task();
   task->setStatus(true);

   EXPECT_EQ(task->getStatus(), true);
}

TEST(TaskClassPrint, Print) {
   Task* task = new Task();
   task->addName("Wash dishes");
   task->addDescription("Use soap");
   task->addDeadline("1:00 pm today");
   task->setStatus(true);

   testing::internal::CaptureStdout();
   task->print();
   string taskOutput = testing::internal::GetCapturedStdout();

   std::ostringstream output;
   output << "Task: Wash dishes" << std::endl;
   output << "Description: Use soap" << std::endl;
   output << "Deadline: 1:00 pm today" << std::endl;
   output << "Status: FINISHED" << std::endl; 
   
   EXPECT_EQ(taskOutput, output.str());

}

TEST(TaskClassPrint, PrintOnlyName) {
   Task* task = new Task();
   task->addName("Wash dishes");

   testing::internal::CaptureStdout();
   task->print();
   string taskOutput = testing::internal::GetCapturedStdout();

   std::ostringstream output;
   output << "Task: Wash dishes" << std::endl;
   output << "Status: NOT FINISHED" << std::endl;
   EXPECT_EQ(taskOutput, output.str());

}

TEST(TaskClassPrint, DontPrintIfNoName) {
   Task* task = new Task();
   task->addDescription("Use soap");
   task->addDeadline("1:00 pm today");
   task->setStatus(true);

   testing::internal::CaptureStdout();
   task->print();
   string taskOutput = testing::internal::GetCapturedStdout();

   std::ostringstream output;

   EXPECT_EQ(taskOutput, output.str());
}

TEST(TaskClassPrint, PrintNameAndDeadline) {
   Task* task = new Task();
   task->addName("Wash dishes");
   task->addDeadline("1:00 pm today");

   testing::internal::CaptureStdout();
   task->print();
   string taskOutput = testing::internal::GetCapturedStdout();

   std::ostringstream output;
   output << "Task: Wash dishes" << std::endl;
   output << "Deadline: 1:00 pm today" << std::endl;
   output << "Status: NOT FINISHED" << std::endl;

   EXPECT_EQ(taskOutput, output.str());

}

TEST(TaskClassPrint, DontPrintEmptyConstructor) {
   Task* task = new Task();

   testing::internal::CaptureStdout();
   task->print();
   string taskOutput = testing::internal::GetCapturedStdout();

   std::ostringstream output;

   EXPECT_EQ(taskOutput, output.str());  
}


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
