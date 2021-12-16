#include "Intern.hpp"

int main(void)
{
	Form		*form;
	Bureaucrat	tom("Tom", 23);
	Intern		intern;

	form = intern.makeForm("robotomy", "Tom");
	tom.signForm(*form);
	tom.executeForm(*form);
	delete form;
	form = intern.makeForm("shr", "Tom");
	form = intern.makeForm("shrubbery", "house");
	tom.signForm(*form);
	tom.executeForm(*form);
	delete form;
	form = intern.makeForm("presidential", "Jack");
	tom.signForm(*form);
	tom.executeForm(*form);
	for (int i = 0; i < 22; i++)
		tom.incrementGrade();
	tom.executeForm(*form);
	delete form;
	return (0);
}