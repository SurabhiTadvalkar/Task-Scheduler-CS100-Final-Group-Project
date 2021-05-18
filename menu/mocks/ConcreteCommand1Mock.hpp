#ifndef __CONCRETECOMMAND1MOCK_HPP__
#define __CONCRETECOMMAND1MOCK_HPP__

#include "TaskCommand.hpp"

class ConcreteCommand1Mock: public TaskCommand {
    public:
	ConcreteCommand1Mock(){}
	void execute(){ std::cout << "ConcreteCommand1Mock executed" << std::endl;}
	void unexecute(){std::cout << "ConcreteCommand1Mock unexecuted" << std::endl;}
};
#endif//ConcreteCommand1Mock.hpp
