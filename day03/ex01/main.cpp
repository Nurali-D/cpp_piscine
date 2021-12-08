#include "ScavTrap.hpp"

int main()
{
    ScavTrap t("Tom");
    ScavTrap b("Ben");

    t.attack("Ben");
    t.takeDamage(4);
    t.beRepaired(2);
    b.guardGate();

    return (0);
}