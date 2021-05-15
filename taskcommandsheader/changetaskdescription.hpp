#ifndef CHANGETASKDESCRIPTION_HPP
#define CHANGETASKDESCRIPTION_HPP

#include <string>

#include "taskcommand.hpp"

class changetaskdescription : public TaskCommand {
public:
    changetaskdescription(Tasks* task, std::string description) : setTask(task), setDescription(description) {}
    virtual void execute();
    virtual void unexecute();

private:
    Tasks* setTask;
    std::string setDescription;
};

#endif //changetaskdescription.hpp
