#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotomyRequestForm : public Form
{
public:
	RobotomyRequestForm(const std::string &);
	RobotomyRequestForm(const RobotomyRequestForm &);
	virtual ~RobotomyRequestForm();
	RobotomyRequestForm	&operator=(const RobotomyRequestForm &);
	void				execute(Bureaucrat const & executor) const;
	std::string			getTarget() const;
	static Form			*fabric(const std::string &);
private:
	RobotomyRequestForm();
	std::string target;
};

#endif