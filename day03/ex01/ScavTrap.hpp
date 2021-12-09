#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
    ScavTrap(const std::string &);
    ScavTrap(const ScavTrap &);
    const ScavTrap &operator=(const ScavTrap &);
    ~ScavTrap();
    void guardGate(); 

private:

};

#endif