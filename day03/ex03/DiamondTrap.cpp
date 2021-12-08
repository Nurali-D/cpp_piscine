#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string &n) : ClapTrap(n),
    FragTrap(n), ScavTrap(n)
{
    name = n;
    FragTrap::setHitPoints();
    ScavTrap::setEnergyPoints();
    FragTrap::setAttackDamage();
    std::cout << "DiamondTrap " << getName() << " is created." << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << getName() << " is destroyed." << std::endl;
}

void        DiamondTrap::setName(const std::string &n)
{
    name = n;
}

std::string DiamondTrap::getName() const
{
    return name;
}

void        DiamondTrap::attack(std::string const &target)
{
    ScavTrap::attack(target);
}

void         DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name = " << getName() << std::endl;
    std::cout << "ClapTrap name = " << ClapTrap::getName() << std::endl;
}