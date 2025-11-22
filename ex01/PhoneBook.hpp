#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"
#include <iostream>
#include <iomanip>

class  PhoneBook {

private:

	Contact contacts[8];
	int     contactCount;

public:

	PhoneBook( void );
	~PhoneBook( void );

	void commandPractice(int command_num);
	bool isBlankWithoutSpaces(const std::string& str);
	bool isBlankWithSpaces(const std::string& str);
	void actAdd( void ) ;
	void actSearch( void ) const;
};

#endif