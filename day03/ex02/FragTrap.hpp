#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
    FragTrap(const std::string &n);
    FragTrap(const FragTrap &);
    const FragTrap &operator=(const FragTrap &);
    ~FragTrap();
    void    highFivesGuys(void);
};

#endif