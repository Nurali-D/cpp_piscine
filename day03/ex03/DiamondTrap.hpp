#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
public:
    DiamondTrap(const std::string &n);
    DiamondTrap(const DiamondTrap &);
    const DiamondTrap &operator=(const DiamondTrap &);
    ~DiamondTrap();
    void        setName(const std::string &n);
    std::string getName() const;
    void        attack(std::string const &target);
    void         whoAmI(); 
private:
    std::string name;
};

#endif