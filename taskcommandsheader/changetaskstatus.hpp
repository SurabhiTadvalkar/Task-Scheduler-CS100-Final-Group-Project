#ifndef CHANGETASKSTATUS_HPP
#define CHANGETASKSTATUS_HPP

#include "./taskcommand.hpp"

class changetaskstatus : public TaskCommand {
public:
    changetaskstatus(Tasks* task, bool status);
    virtual void execute();
    virtual void unexecute();

private:
    bool setStatus;
};

#endif //changetaskstatus.h

