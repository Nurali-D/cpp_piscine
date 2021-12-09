#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(std::string const &n) : name(n)
{
    for (int i = 0; i < 4; i++)
        inventory[i] = 0;
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        if (inventory[i] != 0)
            delete inventory[i];
    }
}

Character::Character(const Character &other):
	name(other.getName())
{
	for (int i = 0; i < 4; i++)
    {
        if (other.inventory[i] != 0)
            this->equip(other.inventory[i]);
        else
            inventory[i] = 0;
    }
	
}

Character &Character::operator=(const Character &other)
{
	this->name = other.getName();
	for (int i = 0; i < 4; i++)
    {
        if (inventory[i] != 0)
		    delete inventory[i];
        if (other.inventory[i] != 0)
            this->equip(other.inventory[i]);
        else
            inventory[i] = 0;
    }
	return (*this);
}

std::string const & Character::getName() const
{
    return (name);
}

void                Character::equip(AMateria* m)
{
    if (m == 0)
        return ;
    for (int i = 0; i < 4; i++)
    {
        if (inventory[i] == 0)
        {
            inventory[i] = m;
            break ;
        }
    }
}

void                Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4 && inventory[idx] != 0)
        inventory[idx] = 0;
}

void                Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx < 4 && inventory[idx] != 0)
        inventory[idx]->use(target);
}