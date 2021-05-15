#ifndef __MENU_HPP__
#define __MENU_HPP__

class Menu {
    private:
	std::string userinput;
	//TaskCommand *setCommand;
    public: 
	void simpleMenu();
	void complexMenu();
	void generalMenu();
	void editMenu();
	std::string UserInput();
	void setUserInput(std::string input);
	//void setCommand(TaskCommand *command);
	//TaskCommand* Command();

};
#endif//menu.hpp
