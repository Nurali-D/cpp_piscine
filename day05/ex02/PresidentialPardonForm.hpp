#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form
{
public:
	PresidentialPardonForm(const std::string &);
	PresidentialPardonForm(const PresidentialPardonForm &);
	virtual ~PresidentialPardonForm();
	PresidentialPardonForm	&operator=(const PresidentialPardonForm &);
	void					execute(Bureaucrat const & executor) const;
	std::string				getTarget() const;
private:
	PresidentialPardonForm();
	std::string target;
};

#endif