#ifndef FORM_HPP
# define FORM_HPP

class Form;

# include "Bureaucrat.hpp"

class Form
{
public:
	Form(const std::string &, int , int );
	virtual ~Form();
	Form(const Form &);
	Form				&operator=(const Form &);
	int					getGradeSign() const;
	int					getGradeExecution() const;
	const std::string	getName() const;
	void				beSigned(Bureaucrat &);

	class GradeTooHighException : public std::exception
	{
	public:
		GradeTooHighException();
		const char *what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		GradeTooLowException();
		const char *what() const throw();
	};
private:
	Form();
	const std::string	name;
	bool				sign;
	const int			gradeSign;
	const int			gradeExecution;

};

std::ostream &operator<<(std::ostream &out, const Form &);

#endif