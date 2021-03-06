#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string &n) : name(n)
{
    setHitPoints(10);
    setEnergyPoints(10);
    setAttackDamage(0);
    std::cout << "ClapTrap " << name << " is created." << std::endl;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap " << name << " is destroyed." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    *this = other;
    std::cout << "ClapTrap copy constructor called" << std::endl;
}

const ClapTrap  &ClapTrap::operator=(const ClapTrap &other)
{
    std::cout << "ClapTrap assignation operator called" << std::endl;
    if (&other != this)
    {
        this->name = other.name;
        this->hitPoints = other.hitPoints;
        this->energyPoints = other.energyPoints;
        this->attackDamage = other.attackDamage;
    }
    return (*this);
}

void            ClapTrap::attack(std::string const &target)
{
    std::cout << "ClapTrap " << name << " attack "  <<
    target << ", causing " << attackDamage << " points of damage!" << std::endl;
    hitPoints--;
}

void            ClapTrap::takeDamage(unsigned int amount)
{
    energyPoints -= amount;
    std::cout << name << " takes " << amount << " damages" << std::endl;
    std::cout << name << " now has " << energyPoints << " points" << std::endl;
    
}

void            ClapTrap::beRepaired(unsigned int amount)
{
    energyPoints += amount;
    std::cout << name << "'s energy increased by "
        << amount << " points." << std::endl;
    std::cout << "Now " << name << "'s energy is " 
        << energyPoints << " points." << std::endl;
}

void            ClapTrap::setHitPoints(unsigned int hp)
{
    this->hitPoints = hp;
}

void            ClapTrap::setEnergyPoints(unsigned int ep)
{
    this->energyPoints = ep;
}

void            ClapTrap::setAttackDamage(unsigned int ad)
{
    this->attackDamage = ad;
}

unsigned int    ClapTrap::getHitPoints() const
{
    return (hitPoints);
}

unsigned int    ClapTrap::getEnergyPoints() const
{
    return (energyPoints);
}

unsigned int    ClapTrap::getAttackDamage() const
{
    return  (attackDamage);
}

std::string     ClapTrap::getName() const
{
    return (name);
}

void            ClapTrap::setName(const std::string &n)
{
    name = n;
}