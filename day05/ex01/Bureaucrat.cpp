#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &n, int g) : name(n)
{
	setGrade(g);
}

Bureaucrat::Bureaucrat(const Bureaucrat &toCopy) : name(toCopy.name)
{
	*this = toCopy;
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat 			&Bureaucrat::operator=(const Bureaucrat &right)
{
	if (this != &right)
		this->grade = right.getGrade();
	return (*this);

}

void				Bureaucrat::setGrade(int g)
{
	if (g < 1)
		throw (GradeTooHighException());
	if (g > 150)
		throw (GradeTooLowException());
	grade = g;
}

int					Bureaucrat::getGrade() const
{
	return (grade);
}

std::string	Bureaucrat::getName() const
{
	return (name);
}

void				Bureaucrat::incrementGrade()
{
	this->setGrade(this->getGrade() - 1);
}

void				Bureaucrat::decrementGrade()
{
	this->setGrade(this->getGrade() + 1);
}

void Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
	}
	catch(std::exception &e)
	{
		std::cout << this->name << " can't sign " 
			<< form.getName() << " because " 
			<< e.what() << std::endl;
	}
}

std::ostream&operator<<(std::ostream &out, const Bureaucrat &b)
{
    out << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
    return (out);
}

Bureaucrat::GradeTooHighException::GradeTooHighException()
{}

Bureaucrat::GradeTooLowException::GradeTooLowException()
{}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "grade too high";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "grade too low";
}