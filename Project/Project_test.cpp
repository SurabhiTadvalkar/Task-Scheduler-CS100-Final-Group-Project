#include "gtest/gtest.h"
#include "../Tasks/Tasks.hpp"
#include "Project.hpp"
#include "../Task/Task.hpp"

using std::string;

TEST(ProjectClass, Constructor) {
   Project* project = new Project();
   bool testBool = false;

   if (project->getName() == "" && project->getDescription() == "" && project->getDeadline() == "" & project->getStatus() == false)
   {
      testBool = true;
   }

   EXPECT_EQ(testBool, true);
}

TEST(ProjectClassCopyConstructor, EmptyProjects){
    Tasks* p1 = new Project();
    Tasks* p2 = new Project(*(dynamic_cast<Project*>(p1)));

    EXPECT_FALSE(&(*p1)== &(*p2));


}

TEST(ProjectClassCopyConstructor, Empty_Full_Projects){
    Tasks* p1 = new Project();
    Tasks* p2 = new Project(*(dynamic_cast<Project*>(p1)));
    
    p1->addName("Surabhi");
    p1->addDescription("Surabhi2");
    p1->addDeadline("Surabhi2");
    p1->setStatus(true);

    EXPECT_FALSE(&(*p1)== &(*p2));
    EXPECT_EQ(p2->getName(), "");
    EXPECT_EQ(p2->getDescription(),"");
    EXPECT_EQ(p2->getDeadline(), "");
    EXPECT_FALSE(p2->getStatus()); 

}
TEST(ProjectClassCopyConstructor, Empty_Full_Projects2){
    Tasks* p1 = new Project();
    Tasks* p2 = new Project(*(dynamic_cast<Project*>(p1)));

    p2->addName("Surabhi");
    p2->addDescription("Surabhi2");
    p2->addDeadline("Surabhi3");
    p2->setStatus(true);

    EXPECT_FALSE(&(*p1)== &(*p2));
    EXPECT_EQ(p2->getName(), "Surabhi");
    EXPECT_EQ(p2->getDescription(),"Surabhi2");
    EXPECT_EQ(p2->getDeadline(), "Surabhi3");
    EXPECT_TRUE(p2->getStatus());

    EXPECT_EQ(p1->getName(), "");
    EXPECT_EQ(p1->getDescription(),"");
    EXPECT_EQ(p1->getDeadline(), "");
    EXPECT_FALSE(p1->getStatus());

}

TEST(ProjectClassName, AddName) {
   Project* project = new Project();
   project->addName("New Project");

   EXPECT_EQ(project->getName(), "New Project");
}

TEST(ProjectClassName, AddNameMultipleTimes) {
   Project* project = new Project();
   project->addName("New Project");
   project->addName("Newer Project");
   project->addName("Newest Project");

   EXPECT_EQ(project->getName(), "Newest Project");
}

TEST(ProjectClassName, AddNameEmpty) {
   Project* project = new Project();
   project->addName("");

   EXPECT_EQ(project->getName(), "");
}

TEST(ProjectClassDescription, AddDescription) {
   Project* project = new Project();
   project->addDescription("Add a description");

   EXPECT_EQ(project->getDescription(), "Add a description");
}

TEST(ProjectClassDescription, AddDescriptionMultipleTimes) {
   Project* project = new Project();
   project->addDescription("Clean house");
   project->addDescription("Clean room");
   project->addDescription("Just clean");

   EXPECT_EQ(project->getDescription(), "Just clean");
}

TEST(ProjectClassDescription, AddDescriptionEmpty) {
   Project* project = new Project();
   project->addDescription("");

   EXPECT_EQ(project->getDescription(), "");
}

TEST(ProjectClassDeadline, AddDeadline) {
   Project* project = new Project();
   project->addDeadline("5/14/21");

   EXPECT_EQ(project->getDeadline(), "5/14/21");
}

TEST(ProjectClassDeadline, AddDeadlineMultipleTimes) {
   Project* project = new Project();
   project->addDeadline("5/17/21");
   project->addDeadline("6/17/21");
   project->addDeadline("7/17/21");

   EXPECT_EQ(project->getDeadline(), "7/17/21");
}

TEST(ProjectClassDeadline, ProjectDeadlineEmpty) {
   Project* project = new Project();
   project->addDeadline("");

   EXPECT_EQ(project->getDeadline(), "");
}

TEST(ProjectClassDeadline, FindClosestDeadlineDay) {
   Project* project = new Project();
   project->addDeadline("05/20/21");
   Task* task = new Task();
   task->addDeadline("05/19/21");
   Task* task1 = new Task();
   task1->addDeadline("05/21/21");
   project->addTask(task);
   project->addTask(task1);
   
   EXPECT_EQ(project->findClosestDeadline(), "05/19/21");
}

TEST(ProjectClassDeadline, FindClosestDeadlineYear) {
   Project* project = new Project();
   project->addDeadline("05/20/21");
   Task* task = new Task();
   task->addDeadline("05/19/21");
   Project* project1 = new Project();
   project1->addDeadline("04/01/20");
   project->addTask(task);
   project->addTask(project1);

   EXPECT_EQ(project->findClosestDeadline(), "04/01/20");
}

TEST(ProjectClassDeadline, FindClosestDeadlineMonth) {
   Project* project = new Project();
   project->addDeadline("04/20/21");
   Task* task = new Task();
   task->addDeadline("05/19/21");
   Task* task1 = new Task();
   task1->addDeadline("05/21/21");
   project->addTask(task);
   project->addTask(task1);

   EXPECT_EQ(project->findClosestDeadline(), "04/20/21");
}

TEST(ProjectClassStatus, AddStatusFalse) {
   Project* project = new Project();
   project->setStatus(false);

   EXPECT_EQ(project->getStatus(), false);
}

TEST(ProjectClassStatus, AddStatusTrue) {
   Project* project = new Project();
   project->setStatus(true);

   EXPECT_EQ(project->getStatus(), true);
}


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
