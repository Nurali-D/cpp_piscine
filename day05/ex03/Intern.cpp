#include "Intern.hpp"

const std::string Intern::forms[3] = {"shrubbery", "robotomy", "presidential"};

Intern::Intern()
{
	formFabrics[0] = ShrubberyCreationForm::fabric;
	formFabrics[1] = RobotomyRequestForm::fabric;
	formFabrics[2] = PresidentialPardonForm::fabric;
}

Intern::~Intern()
{
}

Intern::Intern(const Intern &toCopy)
{
	*this = toCopy;
}

Intern	&Intern::operator=(const Intern &right)
{
	(void)right;
	return (*this);
}

Form	*Intern::makeForm(const std::string &formName, const std::string &target)
{
	for (int i = 0; i < 3; i++)
	{
		if (formName == forms[i])
			return (formFabrics[i](target));
	}
	std::cout << "No such form " << formName << std::endl;
	return (0);
}
