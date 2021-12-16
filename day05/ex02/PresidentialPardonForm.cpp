#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &t)
	: Form("PresidentialPardonForm", 25, 4), target(t)
{

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &toCopy)
	: Form("PresidentialPardonForm", 25, 4)
{
	this->target = toCopy.getTarget();
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &right)
{
	if (this != &right)
		this->target = right.getTarget();
	return (*this);
}

void					PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);
	std::cout << target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}

std::string				PresidentialPardonForm::getTarget() const
{
	return (target);
}