#include <iostream>
#include <stack>

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

template<typename T>
class MutantStack : public std::stack<T>
{
public:
	typedef typename std::stack<T>::container_type::iterator iterator;

	MutantStack(): std::stack<T>()
	{}

	MutantStack(const MutantStack<T> &other) : std::stack<T>(other)
	{}

	~MutantStack()
	{}

	MutantStack<T> &operator=(const MutantStack<T> &other)
	{
		this->c = other.c;
		return (*this);
	}

	iterator begin()
	{
		return (this->c.begin());
	}

	iterator end()
	{
		return (this->c.end());
	}
};

#endif