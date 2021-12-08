#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &n) : ClapTrap(n)
{
    ClapTrap::setHitPoints(100);
    ClapTrap::setEnergyPoints(50);
    ClapTrap::setAttackDamage(20);
    std::cout << "ScavTrap " << ClapTrap::getName() << " is created." << std::endl;
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
