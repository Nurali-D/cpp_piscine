#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(const std::string &t)
	: Form("RobotomyRequestForm", 72, 45), target(t)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &toCopy)
	: Form("RobotomyRequestForm", 72, 45)
{
	this->target = toCopy.getTarget();
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &right)
{
	if (this != &right)
		this->target = right.getTarget();
	return (*this);
}

void				RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);
	
	std::cout << "Rrrrrrrrrrrrrrrrrrrrrr" << std::endl;
	std::srand(std::time(0));
	std::cout << ((std::rand() % 2 == 0) ? (executor.getName() + " now is robot") 
		: "A failure ocured :(") << std::endl;
}

std::string			RobotomyRequestForm::getTarget() const
{
	return (target);
}
