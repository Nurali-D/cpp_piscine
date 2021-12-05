#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
public:
	PhoneBook(void);
	~PhoneBook(void);

	void		addContact(void);
	void		searchContact(void);
	void		displayIndexInfo(std::string index);
	void		clearOldContact(Contact &con);
	void		printInfo(Contact &con);
	std::string	myItoa(int n);
private:
	Contact contactList[8];
	int		oldContact;
};

#endif