#include <cstdlib>
#include <ctime>
#include <iostream>
#include <typeinfo>

class Base
{
public:
	virtual ~Base(){}
};

class A : public Base{};
class B : public Base{};
class C : public Base{};

Base	*generate(void);
void	identify(Base* p);
void	identify(Base& p);

int		main() 
{
	Base *p;

	p = generate();
	identify(p);
	identify(*p);
	delete p;
	return (0);
}

Base	*generate(void)
{
	Base *baseConstr[3];
	int i;

	baseConstr[0] = new A();
	baseConstr[1] = new B();
	baseConstr[2] = new C();

	std::srand(std::time(0));
	i = std::rand() % 3;
	for (int j = 0; j < 3; j++)
	{
		if (i != j)
			delete (baseConstr[j]);
	}
	return(baseConstr[i]);
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "Pointer p is A type" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Pointer p is B type" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Pointer p is C type" << std::endl;
}

void	identify(Base& p)
{
	Base b;
	try
	{
		b = dynamic_cast<A&>(p);
		std::cout << "Reference p is A type" << std::endl;
	}
	catch(const std::bad_cast &e){}
	try
	{
		b = dynamic_cast<B&>(p);
		std::cout << "Reference p is B type" << std::endl;
	}
	catch(const std::bad_cast &e){}
	try
	{
		b = dynamic_cast<C&>(p);
		std::cout << "Reference p is C type" << std::endl;
	}
	catch(const std::bad_cast &e){}
}
