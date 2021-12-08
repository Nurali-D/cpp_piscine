#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string &n) : ClapTrap(n)
{
    ClapTrap::setHitPoints(100);
    ClapTrap::setEnergyPoints(100);
    ClapTrap::setAttackDamage(30);
    std::cout << "FragTrap " << ClapTrap::getName() << " is created." << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << ClapTrap::getName() << " is destroyed." << std::endl;
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << ClapTrap::getName() << ": "
        << "Hello everybody!!! Don't worry, be happy!!!" << std::endl;
}