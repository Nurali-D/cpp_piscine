#include "FragTrap.hpp"

int main()
{
    FragTrap t("Tom");
    FragTrap b("Ben");

    t.highFivesGuys();
    t.attack("Ben");
    t.takeDamage(4);
    t.beRepaired(2);

    return (0);
}