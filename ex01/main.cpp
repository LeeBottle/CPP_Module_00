#include "contact.hpp"
#include "phonebook.hpp"
#include <iostream>

static int command_checker(std::string command)
{
	if (command == "ADD")
		return (1);
	else if (command == "SEARCH")
		return (2);
	else if (command == "EXIT")
		return (3);
	else
		return (0);
}

int main()
{
	PhoneBook phonebook; 
	std::string commandText;
	int	commandNum;

	commandNum = 0;
	while (commandNum != 3)
	{
		std::cout << "Please enter the command(ADD, SEARCH, EXIT) : ";
    	if (!std::getline(std::cin, commandText))
		{
			std::cout << std::endl;
			break;
		}
		commandNum = command_checker(commandText);
		phonebook.commandPractice(commandNum);
		if (std::cin.eof())
		{
			std::cout << std::endl;
			break;
		}
	}
    return 0;
}