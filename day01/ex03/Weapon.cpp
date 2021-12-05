#include "Weapon.hpp"

Weapon::Weapon(void){}

Weapon::Weapon(std::string str)
{
    setType(str);
}

Weapon::~Weapon(void){}

void    Weapon::setType(std::string str)
{
    type = str;
}

const std::string &Weapon::getType(void) const
{
    return type;
}
