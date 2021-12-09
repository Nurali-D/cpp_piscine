#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
{
    setType(type);
}

AMateria::~AMateria()
{
}

AMateria::AMateria(const AMateria &other)
{
	*this = other;
}

AMateria &AMateria::operator=(const AMateria &other)
{
	this->type = other.getType();
	return (*this);
}

void AMateria::setType(const std::string &t)
{
    type = t;
}

std::string const & AMateria::getType() const
{
    return (type);
}

void        AMateria::use(ICharacter& target)
{
    (void)target;
}
