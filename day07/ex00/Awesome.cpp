#include "Awesome.hpp"

Awesome::Awesome() : n(0)
{}

Awesome::Awesome(int n) : n(n)
{}

Awesome::~Awesome(){}

Awesome::Awesome(const Awesome &a) : n(0)
{
	*this = a;
}

Awesome &Awesome::operator=(const Awesome &a)
{
	n = a.n;
	return (*this);
}

bool Awesome::operator==(const Awesome &rhs) const
{
	return (this->n == rhs.n);
}

bool Awesome::operator!=(const Awesome &rhs) const
{
	return (this->n != rhs.n);
}

bool Awesome::operator>(const Awesome &rhs) const
{
	return (this->n > rhs.n);
}

bool Awesome::operator<(const Awesome &rhs) const
{
	return (this->n < rhs.n);
}

bool Awesome::operator>=(const Awesome &rhs) const
{
	return (this->n >= rhs.n);
}

bool Awesome::operator<=(const Awesome &rhs) const
{
	return (this->n <= rhs.n);
}

int Awesome::getN() const
{
	return (n);
}

std::ostream &operator<<(std::ostream &o, const Awesome &a)
{
	o << a.getN();
	return (o);
}