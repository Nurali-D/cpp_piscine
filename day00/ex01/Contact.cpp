#include "Contact.hpp"

Contact::Contact(void){}

Contact::~Contact(void){}

void		Contact::setFirstName(std::string str)
{
	firstName = str;
}

void		Contact::setLastName(std::string str)
{
	lastName = str;
}

void		Contact::setNickname(std::string str)
{
	nickname = str;
}

void		Contact::setPhoneNumber(std::string str)
{
	phoneNumber = str;
}

void		Contact::setDarkestSecret(std::string str)
{
	darkestSecret = str;
}

void		Contact::setIndex(std::string str)
{
	index = str;
}

std::string	Contact::getFirstName(void)
{
	return firstName;
}

std::string	Contact::getLastName(void)
{
	return lastName;
}

std::string	Contact::getNickname(void)
{
	return nickname;
}

std::string	Contact::getPhoneNumber(void)
{
	return phoneNumber;
}

std::string	Contact::getDarkestSecret(void)
{
	return darkestSecret;
}

std::string	Contact::getIndex(void)
{
	return index;
}

void		Contact::displayContactInfo(void)
{
	std::cout << "First name:     " << firstName << std::endl;
	std::cout << "Last name:      " << lastName << std::endl;
	std::cout << "Nickname:       " << nickname << std::endl;
	std::cout << "Phone number:   " << phoneNumber << std::endl;
	std::cout << "Darkest secret: " << darkestSecret << std::endl;
}
