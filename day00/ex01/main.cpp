#include "PhoneBook.hpp"

int		main()
{
	PhoneBook phoneBook;
	std::string	command;

	// std::cout << "Enter command:" << std::endl;
	// std::getline(std::cin, command);
	while (1)
	{
		std::cout << "Enter command:" << std::endl;
		std::getline(std::cin, command);
		if (command == "add" || command == "ADD")
			phoneBook.addContact();
		else if (command == "SEARCH" || command == "search")
			phoneBook.searchContact();
		else if (command == "exit" || command == "EXIT")
			break;
		else
		{
			std::cout << "Invalid command" << std::endl;
		}
	}
	return 0;
}
