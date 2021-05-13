#ifndef __MENU_HPP__
#define __MENU_HPP__

class Menu {
    private:
	std::string userinput;
	//TaskCommand *setCommand;
    public: 
	void readInput(std::string input);
	void simpleMenu();
	void complexMenu();
	void generalMenu();
	void editMenu();
	//void setCommand(TaskCommand *command);

};
#endif//menu.hpp
