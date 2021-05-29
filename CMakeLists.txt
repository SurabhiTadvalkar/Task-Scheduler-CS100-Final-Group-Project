CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

SET(CMAKE_CXX_STANDARD 11)

ADD_SUBDIRECTORY(googletest)

ADD_EXECUTABLE(testcommand
    commandtest.cpp
    taskmock/TaskMock.cpp
    taskmock/ProjectMock.cpp
    taskcommandssrc/addtask.cpp
    taskcommandssrc/changetaskname.cpp
    taskcommandssrc/changetaskdeadline.cpp
    taskcommandssrc/changetaskstatus.cpp
    taskcommandssrc/changetaskdescription.cpp
    taskcommandssrc/printTasks.cpp
)

ADD_EXECUTABLE(testProject Project/Project_test.cpp Project/Project.cpp Task/Task.cpp Tasks/Tasks.cpp)

ADD_EXECUTABLE(test menu/menu_test.cpp)

ADD_EXECUTABLE(testTask Task/Task_test.cpp Task/Task.cpp Tasks/Tasks.cpp)

ADD_EXECUTABLE(main main.cpp)

TARGET_LINK_LIBRARIES(test gtest)
TARGET_LINK_LIBRARIES(testTask gtest)
TARGET_LINK_LIBRARIES(testcommand gtest)
TARGET_LINK_LIBRARIES(testProject gtest)
TARGET_COMPILE_DEFINITIONS(testProject PRIVATE gtest_disable_pthreads=ON)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)
TARGET_COMPILE_DEFINITIONS(testTask PRIVATE gtest_disable_pthreads=ON)
TARGET_COMPILE_DEFINITIONS(testcommand PRIVATE gtest_disable_pthreads=ON)

