#ifndef PROJECT_HPP
#define PROJECT_HPP

#include "Tasks.hpp" 

#include <string>
#include <vector>

class Project : public Tasks {
public:
    void print();
    void addDeadline(std::string deadline);
    void addName(std::string name); 
    void addDescription(std::string description); 
    void setStatus(bool status); 
    void addTask(Tasks* task); 
//  void removeTask(Tasks* task); necessary for unexecute
    //fortesting 
    int getTestVar(); 

private:
    std::vector<Tasks*> tasks; 
    std::string findClosestDeadline(); 
    std::string closestDeadline; 

    //for testing 
    int testVar; 
};
#endif //Project.hpp 
