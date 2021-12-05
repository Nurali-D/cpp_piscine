#include "Zombie.hpp"

Zombie::Zombie(void){}

Zombie::Zombie(std::string str)
{
    setName(str);
    std::cout << "Zombie " << name << " created." << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout << name << " annihilated :(" << std::endl;
}

void    Zombie::announce(void)
{
    std::cout << name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::setName(std::string str)
{
    name = str;
}