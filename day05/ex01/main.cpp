#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	Bureaucrat john("John", 3);
	Form deal("Deal", 11, 1);

	std::cout << john << std::endl;
	try
	{
		john.setGrade(151);
	}
	catch(std::exception &e)
	{
		std::cout << "Error when setting grade." 
			<< e.what() << std::endl;
	}
	std::cout << john << std::endl;
	try
	{
		john.setGrade(1);
	}
	catch(std::exception &e)
	{
		std::cout << "Error when setting grade." 
			<< e.what() << std::endl;
	}
	std::cout << john << std::endl;
	try
	{
		john.incrementGrade();
	}
	catch(std::exception &e)
	{
		std::cout << "Error when incrementing grade." 
			<< e.what() << std::endl;
	}
	john.setGrade(10);
	std::cout << deal << std::endl;
	try
	{
		deal.beSigned(john);
	}
	catch(std::exception &e)
	{
		std::cout << john.getName() << " cant sign " 
			<< deal.getName() << " because " << e.what() << std::endl;
	}
	john.signForm(deal);
	return (0);
}