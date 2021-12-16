#include "Form.hpp"

Form::Form(const std::string &n, int sign, int exec) : name(n),
	gradeSign(sign), gradeExecution(exec)
{
	if (gradeExecution < 1 || gradeSign < 1)
		throw (GradeTooHighException());
	if (gradeExecution > 150 || gradeSign > 150)
		throw (GradeTooLowException());
	sign = false;
}

Form::Form(const Form &toCopy) : name(toCopy.getName()),
	gradeSign(toCopy.getGradeSign()), gradeExecution(toCopy.getGradeExecution())
{
	*this = toCopy;
}

Form::~Form()
{}

Form				&Form::operator=(const Form &right)
{
	if (this != &right)
		this->sign = right.sign;
	return (*this);
}

int					Form::getGradeSign() const
{
	return (gradeSign);
}

int					Form::getGradeExecution() const
{
	return (gradeExecution);
}

const std::string	Form::getName() const
{
	return (name);
}



void				Form::beSigned(Bureaucrat &b)
{
	if (b.getGrade() > this->getGradeSign())
		throw (GradeTooLowException());
	std::cout << b.getName() << " signs "
		<< this->getName() << "." << std::endl;
	this->sign = true;
}

void Form::execute(const Bureaucrat &executor) const
{
	if (!this->sign)
		throw NotSignedException();
	if (executor.getGrade() > this->gradeExecution)
		throw GradeTooLowException();
}

Form::GradeTooLowException::GradeTooLowException(void)
{}

Form::GradeTooHighException::GradeTooHighException(void)
{}

Form::NotSignedException::NotSignedException(void)
{}

const char *Form::GradeTooHighException::what() const throw()
{
	return "grade too high";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "grade too low";
}

const char* Form::NotSignedException::what() const throw()
{
	return "the form isn't signed yet";
}

std::ostream	&operator<<(std::ostream &out, const Form &f)
{
	out << f.getName() << " minimum signing grade: "
		<< f.getGradeSign() << ", minimum executing grade: "
		<< f.getGradeExecution() << ".";
	return (out);
}