#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main()
{
    int     n = 5;
    Zombie  *horde = zombieHorde(n, "Nick");

    std::cout << "The horde is ready to eat brainzzzzzzzzzzzz..." << std::endl;
    delete [] horde;
    return 0;
}