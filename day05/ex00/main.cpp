#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat ben("Ben", 55);
	std::cout << ben << std::endl;

	std::cout << "Setting grade to 0" << std::endl;
	try
	{
		ben.setGrade(0);
		std::cout << ben << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "Setting grade to 151" << std::endl;
	try
	{
		ben.setGrade(151);
		std::cout << ben << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "Setting grade to 100" << std::endl;
	try
	{
		ben.setGrade(100);
		std::cout << ben << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "Incrementing grade ++" << std::endl;
	try
	{
		ben.incrementGrade();
		std::cout << ben << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "Decrementing grade --" << std::endl;
	try
	{
		ben.decrementGrade();
		std::cout << ben << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "Creating invalid bureaucrat" << std::endl;
	try
	{
		Bureaucrat inv("Tom", 1234);
		std::cout << inv << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "Copying ben" << std::endl;
	try
	{
		Bureaucrat c(ben);
		std::cout << c << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "assignation" << std::endl;
	try
	{
		Bureaucrat tom("Tom", 77);
		std::cout << tom << std::endl;
		ben = tom;
		std::cout << ben << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "finish" << std::endl;
}