#include "phonebook.hpp"

PhoneBook::PhoneBook( void ){

	this->contactCount = 0;
	return;
}

PhoneBook::~PhoneBook( void ){

	return;
}

bool	PhoneBook::isBlankWithoutSpaces(const std::string& str){

	if (str.empty())
		return true;
	for (size_t i = 0; i < str.size(); ++i) 
	{
		if (std::isspace(str[i]))
			return true;
	}
	return false;
}

bool	PhoneBook::isBlankWithSpaces(const std::string& str){

	if (str.empty())
		return true;
	for (size_t i = 0; i < str.size(); ++i) 
	{
		if (!std::isspace(str[i]))
			return false;
	}
	return true;
}

void	PhoneBook::commandPractice(int command){

	if (command == 0)
		std::cout << "Worng command! " << std::endl;
	else if (command == 1)
		this->actAdd();
	else if (command == 2)
		this->actSearch();
}

void	PhoneBook::actAdd( void ) {

	Contact		new_contact;
	std::string input;
	int		 index;

	index = this->contactCount % 8;
	std::cout << "Please enter first name: ";	
	if (!std::getline(std::cin, input))
		return;
	while (isBlankWithoutSpaces(input))
	{
		std::cout << "You have entered a blank value or whitespaces. Please re-enter first name: ";
		if (!std::getline(std::cin, input))
			return;
	}
	new_contact.getFirstName(input);
	std::cout << "Please enter last name: ";
	if (!std::getline(std::cin, input))
		return;
	while (isBlankWithoutSpaces(input))
	{
		std::cout << "You have entered a blank value or whitespaces. Please re-enter last name: ";
		if (!std::getline(std::cin, input))
			return;
	}
	new_contact.getLastName(input);
	std::cout << "Please enter nickname: ";
	if (!std::getline(std::cin, input))
		return;
	while (isBlankWithoutSpaces(input))
	{
		std::cout << "You have entered a blank value or whitespaces. Please re-enter nickname: ";
		if (!std::getline(std::cin, input))
			return;
	}
	new_contact.getNickName(input);
	std::cout << "Please enter phone number: ";
	if (!std::getline(std::cin, input))
		return;
	while (isBlankWithoutSpaces(input))
	{
		std::cout << "You have entered a blank value or whitespaces. Please re-enter phone number: ";
		if (!std::getline(std::cin, input))
			return;
	}
	new_contact.getPhoneNumber(input);
	std::cout << "Please enter darkest secret: ";
	if (!std::getline(std::cin, input))
		return;
	while (isBlankWithSpaces(input))
	{
		std::cout << "You have entered a blank value. Please re-enter darkest secret: ";
		if (!std::getline(std::cin, input))
			return;
	}
	new_contact.getDarkestSecret(input);
	if (this->contactCount >= 8)
    {
        for (int i = 0; i < 7; ++i)
            this->contacts[i] = this->contacts[i + 1];
        this->contacts[7] = new_contact;
    }
    else
    {
        this->contacts[this->contactCount] = new_contact;
        this->contactCount++;
    }
}

void PhoneBook::actSearch( void ) const{

	int count;
	int len;
	int i;

	if (contactCount >= 8)
		count = 8;
	else
		count = contactCount;
	std::cout << "|";
	std::cout << std::setw(11) << "index|";
	std::cout << std::setw(11) << "first name|";
	std::cout << std::setw(11) << "last name|";
	std::cout << std::setw(11) << "nickname|" << std::endl;

	i = 0;
	while (i < count)
	{
		std::cout << "|" << std::setw(10)<< i << "|";
		this->contacts[i].showFirstName();
		this->contacts[i].showLastName();
		this->contacts[i].showNickName();
		std::cout << std::endl;
		i++;
	}
}