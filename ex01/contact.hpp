#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <string>
#include <iostream>
#include <iomanip>

class Contact {

private:

	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;

public:

	Contact( void );
	~Contact( void );

	void getFirstName(const std::string& str);
    void getLastName(const std::string& str);
    void getNickName(const std::string& str);
    void getPhoneNumber(const std::string& str);
    void getDarkestSecret(const std::string& str);

	void showFirstName() const;
    void showLastName() const;
    void showNickName() const;
};

#endif