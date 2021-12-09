#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &n) : ClapTrap(n)
{
    ScavTrap::setHitPoints();
    ScavTrap::setEnergyPoints();
    ScavTrap::setAttackDamage();
    std::cout << "ScavTrap " << ClapTrap::getName() << " is created." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
    *this = other;
}

const ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    if (&other != this)
        ClapTrap::operator=(other);
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << ClapTrap::getName() << " is destroyed." << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << ClapTrap::getName()
	    << " have enterred in Gate keeper mode" << std::endl;
}

void            ScavTrap::attack(std::string const &target)
{
    std::cout << "ScavTrap " << ClapTrap::getName() << " attack "  <<
    target << ", causing " << ClapTrap::getAttackDamage() << " points of damage!" << std::endl;
    ClapTrap::setHitPoints(ClapTrap::getHitPoints() - 1);
}

void            ScavTrap::setHitPoints()
{
    ClapTrap::setHitPoints(100);
}

void            ScavTrap::setEnergyPoints()
{
    ClapTrap::setEnergyPoints(50);
}

void            ScavTrap::setAttackDamage()
{
    ClapTrap::setAttackDamage(20);
}