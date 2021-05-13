#include "gtest/gtest.h"
#include "menu.cpp"

TEST(GeneralMenu, Output){

Menu* test = new Menu();

testing::internal::CaptureStdout();
test->generalMenu();
std::string test_output = testing::internal::GetCapturedStdout();

std::ostringstream out;
out << "TASK SCHEDULER" << std::endl;
out << "a- add simple task" << std::endl;
out << "p- add project" << std::endl;
out << "o- print my list" << std::endl;
out << "e- edit task" << std::endl;
out << "q- quit" << std::endl;
EXPECT_EQ(test_output,out.str());

}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
//menu_test.hpp
