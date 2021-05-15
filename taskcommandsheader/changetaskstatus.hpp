#ifndef CHANGETASKSTATUS_HPP
#define CHANGETASKSTATUS_HPP

#include "taskcommand.hpp"

class changetaskstatus : public TaskCommand {
public:
    changetaskstatus(Tasks* task, bool status) : setTask(task), setStatus(status) {}
    virtual void execute();
    virtual void unexecute();

private:
    Tasks* setTask;
    bool setStatus;
};

#endif //changetaskstatus.hpp
