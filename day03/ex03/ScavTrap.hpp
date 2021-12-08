#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
    ScavTrap(const std::string &);
    ~ScavTrap();
    void guardGate();
    void attack(std::string const &target);
    void setHitPoints();
    void setEnergyPoints();
    void setAttackDamage();

private:
};

#endif