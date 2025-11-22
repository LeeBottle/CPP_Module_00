#include "contact.hpp" 

Contact::Contact( void ){

	return;
}

Contact::~Contact( void ){

	return;
}

void Contact::getFirstName(const std::string& str) {
    this->firstName = str;
}

void Contact::getLastName(const std::string& str) {
    this->lastName = str;
}

void Contact::getNickName(const std::string& str) {
    this->nickName = str;
}

void Contact::getPhoneNumber(const std::string&str) {
    this->phoneNumber = str;
}

void Contact::getDarkestSecret(const std::string& str) {
    this->darkestSecret = str;
}

void Contact::showFirstName() const {
    int len;
	
	len = this->firstName.length();
    if (len > 10)
        std::cout << this->firstName.substr(0, 9) << ".|";
    else
        std::cout << std::setw(10) << this->firstName << "|";
}

void Contact::showLastName() const {
    int len;
	
	len = this->lastName.length();
    if (len > 10)
        std::cout << this->lastName.substr(0, 9) << ".|";
    else
        std::cout << std::setw(10) << this->lastName << "|";
}

void Contact::showNickName() const {
    int len;
	
	len = this->nickName.length();
    if (len > 10)
        std::cout << this->nickName.substr(0, 9) << ".|";
    else
        std::cout << std::setw(10) << this->nickName << "|";
}