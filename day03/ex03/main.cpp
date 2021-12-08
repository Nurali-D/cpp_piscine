#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap a("Tom");
    DiamondTrap b("Ben");
    std::cout << "b.hitPoints = " << b.getHitPoints() << std::endl;
    std::cout << "b.energyPoints = " << b.getEnergyPoints() << std::endl;
    std::cout << "b.attackDamage = " << b.getAttackDamage() << std::endl;
    b.whoAmI();
    a.attack("Ben");
    a.getName();
    a.highFivesGuys();
    a.guardGate();

    return (0);
}