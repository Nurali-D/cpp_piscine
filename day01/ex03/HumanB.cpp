#include "HumanB.hpp"

HumanB::HumanB(std::string str)
{
    setName(str);
}

HumanB::~HumanB(void){}

void    HumanB::setName(std::string str)
{
    name = str;
}

void    HumanB::setWeapon(Weapon &w)
{
    weapon = &w;
}

void    HumanB::attack(void)
{
    std::cout << name << " attacks with his " << weapon->getType() << std::endl; 
}