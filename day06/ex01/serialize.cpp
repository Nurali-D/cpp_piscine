#include "serialization.hpp"
# include <cstring>

uintptr_t	serialize(Data* ptr)
{
	char *ret = new char[ptr->firstName.size() + ptr->lastName.size() 
		+ sizeof(int) + sizeof(double) + 2];
	char *retCopy = ret;

	for (size_t i = 0; i < ptr->firstName.size(); i++)
	{
		*ret = ptr->firstName[i];
		ret++;
	}
	*ret = '\0';
	ret++;
	for (size_t i = 0; i < ptr->lastName.size(); i++)
	{
		*ret = ptr->lastName[i];
		ret++;
	}
	*ret = '\0';
	ret++;
	*reinterpret_cast<unsigned int*> (ret) = ptr->age;
	ret += sizeof(unsigned int);
	*reinterpret_cast<double*> (ret) = ptr->balance;
	ret += sizeof(double);
	return (reinterpret_cast<uintptr_t>(reinterpret_cast<void*>(retCopy)));
}

Data*		deserialize(uintptr_t raw)
{
	Data *d = new Data;
	char *str = reinterpret_cast<char*>(reinterpret_cast<void*>(raw));

	d->firstName = std::string(str, 0, std::strlen(str));
	str += std::strlen(str) + 1;
	d->lastName = std::string(str, 0, std::strlen(str));
	str += std::strlen(str) + 1;
	d->age = *reinterpret_cast<unsigned int*>(str);
	str += sizeof(unsigned int);
	d->balance = *reinterpret_cast<double*>(str);
	return (d);
}