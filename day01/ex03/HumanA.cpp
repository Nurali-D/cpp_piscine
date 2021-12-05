#include "HumanA.hpp"

HumanA::HumanA(std::string str, Weapon &w) : weapon(w)
{
    setName(str);
}

HumanA::~HumanA(void){}

void    HumanA::setName(std::string str)
{
    name = str;
}

void    HumanA::attack(void)
{
    std::cout << name << " attacks with his " << weapon.getType() << std::endl; 
}