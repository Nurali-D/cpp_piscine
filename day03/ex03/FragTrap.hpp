#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
    FragTrap(const std::string &n);
    FragTrap(const FragTrap &);
    const FragTrap &operator=(const FragTrap &);
    ~FragTrap();
    void    highFivesGuys(void);
    void    setHitPoints();
    void    setEnergyPoints();
    void    setAttackDamage();
};

#endif