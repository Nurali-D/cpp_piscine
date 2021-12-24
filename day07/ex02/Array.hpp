#include <iostream>
#include <string>
#include <stdexcept>
#ifndef ARRAY_HPP
# define ARRAY_HPP

template < typename T >
class Array
{
public:
	Array() : sz(0), array(0)
	{}

	Array(unsigned int n) : sz(n), array(new T[n]())
	{}

	~Array()
	{
		if (this->array != 0)
			delete [] this->array;
	}

	Array(const Array &toCopy) : sz(0), array(0)
	{
		*this = toCopy;
	}

	const Array		&operator=(const Array &right)
	{
		if (this == &right)
			return (*this);
		if (this->array != 0)
			delete [] this->array;
		this->sz = right.size();
		this->array = new T[this->sz];
		for (unsigned int i = 0; i < this->sz; i++)
			this->array[i] = right.array[i];
		return (*this);
	}

	unsigned int	size() const
	{
		return (sz);
	}

	T &operator[](int i) const
	{
		if (i < 0 || (unsigned int) i >= sz)
			throw (std::out_of_range("Out of range :("));
		return (array[i]);
	}

private:
	unsigned int	sz;
	T				*array;
};

#endif