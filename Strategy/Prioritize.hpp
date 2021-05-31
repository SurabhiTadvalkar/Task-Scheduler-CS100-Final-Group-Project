#ifndef __PRIORTIZE_HPP_
#define __PRIORTIZE_HPP__

#include "../Task/Task.hpp"
#include "../Project/Project.hpp"

#include <typeinfo>

class Prioritize{
	protected:
		Tasks* myTask;
	public:
		Prioritize(Tasks* t);
		virtual	Tasks* sort();

};

#endif
