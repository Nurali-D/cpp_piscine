#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	Bureaucrat				tom("John", 4);
	Bureaucrat				jerry("Jerry", 140);
	ShrubberyCreationForm	form1("trees");
	RobotomyRequestForm		form2("f20");
	PresidentialPardonForm	form3("e55");

	jerry.signForm(form1);
	jerry.executeForm(form1);
	tom.executeForm(form1);
	tom.executeForm(form2);
	tom.signForm(form2);
	tom.executeForm(form2);
	jerry.signForm(form3);
	tom.executeForm(form3);
	tom.signForm(form3);
	tom.executeForm(form3);
	return (0);
}