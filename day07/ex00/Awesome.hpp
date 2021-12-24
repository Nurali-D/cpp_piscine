#include <iostream>


#ifndef AWESOME_HPP
# define AWESOME_HPP

class Awesome
{
public:
	Awesome();

	Awesome(int n);

	~Awesome();
	
	Awesome(const Awesome &a);

	Awesome &operator=(const Awesome &a);

	bool operator==(const Awesome &rhs) const;

	bool operator!=(const Awesome &rhs) const;

	bool operator>(const Awesome &rhs) const;

	bool operator<(const Awesome &rhs) const;

	bool operator>=(const Awesome &rhs) const;

	bool operator<=(const Awesome &rhs) const;

	int getN() const;

private:
	int n;
};

std::ostream &operator<<(std::ostream &o, const Awesome &a);

#endif