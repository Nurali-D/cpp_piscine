#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
    oldContact = 0;
}

PhoneBook::~PhoneBook(void)
{
    std::cout << "Phonebook cleared, all contacts are lost."
        << std::endl;
}

void	PhoneBook::clearOldContact(Contact &con)
{
	con.setFirstName("");
	con.setLastName("");
	con.setNickname("");
	con.setPhoneNumber("");
	con.setDarkestSecret("");
}

void	PhoneBook::addContact(void)
{
	std::string str;

	clearOldContact(contactList[oldContact]);
	std::cout << "Enter first name: " << std::endl;
	std::cin >> str;
	contactList[oldContact].setFirstName(str);
	std::cout << "Enter last name: " << std::endl;
	std::cin >> str;
	contactList[oldContact].setLastName(str);
	std::cout << "Enter nickname: " << std::endl;
	std::cin >> str;
	contactList[oldContact].setNickname(str);
	std::cout << "Enter phone number: " << std::endl;
	std::cin >> str;
	contactList[oldContact].setPhoneNumber(str);
	std::cout << "Enter darkest secret: " << std::endl;
	std::cin >> str;
	contactList[oldContact].setDarkestSecret(str);
	contactList[oldContact].setIndex(myItoa(oldContact));
	oldContact++;
	if (oldContact == 8)
		oldContact = 0;
	std::cin.ignore();
}

void	PhoneBook::printInfo(Contact &con)
{
	std::string	str;

	str = con.getFirstName();
	if (str.length() > 10)
		std::cout << str.substr(0, 9) + ".|";
	else
	{
		for (int i = 0; i < 10 - (int)str.length(); i++)
			std::cout << " ";
		std::cout << str + "|";
	}
	str = con.getLastName();
	if (str.length() > 10)
		std::cout << str.substr(0, 9) + ".|";
	else
	{
		for (int i = 0; i < 10 - (int)str.length(); i++)
			std::cout << " ";
		std::cout << str + "|";
	}
	str = con.getNickname();
	if (str.length() > 10)
		std::cout << str.substr(0, 9) + "." << std::endl;
	else
	{
		for (int i = 0; i < 10 - (int)str.length(); i++)
			std::cout << " ";
		std::cout << str << std::endl;
	}
}

void	PhoneBook::searchContact(void)
{
    std::string index;

	if (contactList[0].getIndex().empty())
	{
		std::cout << "The phonebook is empty. Add some contacts." << std::endl;
		return ;
	}
	std::cout << "    INDEX|" << "FIRST NAME|"
	<< " LAST NAME|" << "  NICKNAME" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		if (contactList[i].getIndex().length() == 1)
		{
			std::cout << "        " << myItoa(i + 1) + "|";
			printInfo(contactList[i]);
		}
		else
			break;
	}
	while (1)
	{
		std::cout << "Enter available contact's index:" << std::endl;
		std::getline(std::cin, index);
		if (index[0] != '0' && (index[0] >= '1' && index[0] <= '8')
			&& contactList[index[0] - 49].getIndex().empty() == false 
			&& index[1] == '\0')
		{
			displayIndexInfo(index);
			break ;
		}
	}
	
}

void	PhoneBook::displayIndexInfo(std::string index)
{
	if (index[0] >= '1' && index[0] <= '8')
		contactList[index[0] - 49].displayContactInfo();
}

std::string	PhoneBook::myItoa(int n)
{
	std::string	str = "0";

	str[0] = n + 48;
	return str;
}