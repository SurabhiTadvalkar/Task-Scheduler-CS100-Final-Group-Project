#ifndef CHANGETASKNAME_HPP
#define CHANGETASKNAME_HPP

#include <string>

#include "taskcommand.hpp"

class changetaskname : public TaskCommand {
public:
    changetaskname(Tasks* task, std::string name) : setTask(task), setName(name) {}
    virtual void execute();
    virtual void unexecute();

private:
    Tasks* setTask;
    std::string setName; 
};

#endif //changetaskname.hpp
