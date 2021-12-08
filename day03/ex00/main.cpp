#include "ClapTrap.hpp"

int main()
{
    ClapTrap t("Tom");
    ClapTrap b("Ben");

    t.attack("Ben");
    t.takeDamage(4);
    t.beRepaired(2);
    return (0);
}