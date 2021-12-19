#include <string>
#include <iostream>
#include <climits>

typedef unsigned long uintptr_t;

#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

struct Data
{
	std::string		firstName;
	std::string		lastName;
	unsigned int	age;
	double			balance;
};

#endif