#ifndef INTERN_HPP
# define INTERN_HPP

# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
public:
	Intern();
	~Intern();
	Intern(const Intern &);
	Intern	&operator=(const Intern &);
	Form	*makeForm(const std::string &, const std::string &);
private:
	Form 			*(*formFabrics[3])(const std::string &);
	static const std::string	forms[3];
};

#endif