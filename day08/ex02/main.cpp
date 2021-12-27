#include "mutantstack.hpp"
#include <ctime>
#include <cstdlib>
#include <cmath>

int main()
{
	std::cout << "------------------------------------------" << std::endl;
	std::cout << "INT stack" << std::endl;
	std::cout << "------------------------------------------" << std::endl;
	{
		MutantStack<int> mstack;

		mstack.push(5);
		mstack.push(17);
		std::cout << "top is " << mstack.top() << std::endl;
		mstack.pop();
		std::cout << "size is " << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	std::cout << "------------------------------------------" << std::endl;
	std::cout << "STRING stack" << std::endl;
	std::cout << "------------------------------------------" << std::endl;
	{
		MutantStack<std::string> mstack;

		mstack.push("first");
		mstack.push("second");
		mstack.push("third");
		std::cout << "size is " << mstack.size() << std::endl;
		std::cout << "top is " << mstack.top() << std::endl;

		MutantStack<std::string>::iterator it = mstack.begin();

		*it = "FIRST";

		MutantStack<std::string>::iterator ite = mstack.end();

		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}
	std::cout << "------------------------------------------" << std::endl;
	std::cout << "DOUBLE stack" << std::endl;
	std::cout << "------------------------------------------" << std::endl;
	{
		MutantStack<double> mstack;

		std::srand(std::time(0));
		for (int i = 0; i < 100; i++)
			mstack.push(rand() / (pow(i + 1, 3)));
		
		MutantStack<double>::iterator it = mstack.begin();
		MutantStack<double>::iterator ite = mstack.end();

		std::cout << "size is " << mstack.size() << std::endl;
		std::cout << "top is " << mstack.top() << std::endl;
		while (it != ite)
		{
			std::cout << *it << " ";
			++it;
		}
		std::cout << std::endl;
	}
	std::cout << "------------------------------------------" << std::endl;
	std::cout << "CHAR stack" << std::endl;
	std::cout << "------------------------------------------" << std::endl;
	{
		MutantStack<char> mstack;
		for (int i = 32; i < 127; i++)
			mstack.push(i);
		MutantStack<char>::iterator it = mstack.begin();
		MutantStack<char>::iterator ite = mstack.end();

		std::cout << "size is " << mstack.size() << std::endl;
		std::cout << "top is " << mstack.top() << std::endl;
		while (it != ite)
		{
			std::cout << *it << " ";
			++it;
		}
		std::cout << std::endl;

	}
	return 0;
}