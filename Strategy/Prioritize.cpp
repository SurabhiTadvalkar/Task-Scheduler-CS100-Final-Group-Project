#include "Prioritize.hpp"
#include "../Project/Project.hpp"
#include <typeinfo>
Prioritize::Prioritize(Tasks* t){
	if(typeid(Project) == typeid(*t)){
        	myTask = new Project(*dynamic_cast<Project*>(t));
        }
        if(typeid(Task)==typeid(*t)){
		myTask = new Task(*dynamic_cast<Task*>(t));
	}
}
Tasks* Prioritize::sort(){
	return myTask;
}
