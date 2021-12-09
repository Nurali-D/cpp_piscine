#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
public:
    ClapTrap(const std::string &);
    ~ClapTrap();
    ClapTrap(const ClapTrap &);
    const ClapTrap  &operator=(const ClapTrap &);
    void            attack(std::string const &target);
    void            takeDamage(unsigned int amount);
    void            beRepaired(unsigned int amount);
    void            setHitPoints(unsigned int hp);
    void            setEnergyPoints(unsigned int ep);
    void            setAttackDamage(unsigned int ad);
    unsigned int    getHitPoints() const;
    unsigned int    getEnergyPoints() const;
    unsigned int    getAttackDamage() const;
    std::string     getName() const;
private:
    std::string     name;
    unsigned int    hitPoints;
    unsigned int    energyPoints;
    unsigned int    attackDamage;
};

#endif