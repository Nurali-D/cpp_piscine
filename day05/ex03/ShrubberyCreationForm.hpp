#include <fstream>

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
public:
	ShrubberyCreationForm(const std::string &);
	ShrubberyCreationForm(const ShrubberyCreationForm &);
	virtual ~ShrubberyCreationForm();
	ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &);
	virtual void			execute(Bureaucrat const & executor) const;
	std::string				getTarget() const;
	static Form				*fabric(const std::string &);

	class	FileErrorException : public std::exception
	{
	public:
		FileErrorException(void);
		const char *what() const throw();
	};

private:
	ShrubberyCreationForm();
	std::string					target;
	static const std::string	tree;
};

#endif