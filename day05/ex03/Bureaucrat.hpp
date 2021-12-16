#include <string>
#include <stdexcept>
#include <iostream>

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

class Bureaucrat;

#include "Form.hpp"

class Bureaucrat
{
public:
	Bureaucrat(const std::string &, int );
	Bureaucrat(const Bureaucrat &);
	~Bureaucrat();
	Bureaucrat &operator=(const Bureaucrat &);
	void				setGrade(int );
	int					getGrade() const;
	std::string			getName() const;
	void				incrementGrade();
	void				decrementGrade();
	void				signForm(Form &);
	void				executeForm(Form const & form);

	class		GradeTooHighException : public std::exception  
	{
	public:
		GradeTooHighException();
		const char *what() const throw();
	};

	class		GradeTooLowException : public std::exception  
	{
	public:
		GradeTooLowException();
		virtual const char *what() const throw();
	};
	
private:
	Bureaucrat();
	const std::string	name;
	int					grade;
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &);

#endif