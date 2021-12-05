#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

int main()
{
    Zombie  zombak1("Jack");
    Zombie  *zombak2;

    zombak1.announce();
    zombak2 = newZombie("Nick");
    zombak2->announce();
    delete(zombak2);
    randomChump("Fred");
    
    return 0;
}