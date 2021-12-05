#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <cstdlib>

class	Contact
{
public:
	Contact(void);
	~Contact(void);
	
	void		setFirstName(std::string);
	void		setLastName(std::string);
	void		setNickname(std::string);
	void		setPhoneNumber(std::string);
	void		setDarkestSecret(std::string);
	void		setIndex(std::string);
	void		displayContactInfo(void);
	std::string	getFirstName(void);
	std::string	getLastName(void);
	std::string	getNickname(void);
	std::string	getPhoneNumber(void);
	std::string	getDarkestSecret(void);
	std::string getIndex(void);
	

private:
	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string	phoneNumber;
	std::string	darkestSecret;
	std::string	index;
};

#endif