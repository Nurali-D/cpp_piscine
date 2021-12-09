#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap t("Tom");
    DiamondTrap b("Ben");
    std::cout << "b.hitPoints = " << b.getHitPoints() << std::endl;
    std::cout << "b.energyPoints = " << b.getEnergyPoints() << std::endl;
    std::cout << "b.attackDamage = " << b.getAttackDamage() << std::endl;
    b.whoAmI();
    t.attack("Ben");
    t.getName();
    t.highFivesGuys();
    t.guardGate();

    b.ClapTrap::setAttackDamage(200);
    b.ClapTrap::setEnergyPoints(300);
    b.ClapTrap::setHitPoints(400);
    t = b;
    std::cout << "t:" << std::endl;
    std::cout << "AD =" << t.getAttackDamage() << std::endl;
    std::cout << "EP =" << t.getEnergyPoints() << std::endl;
    std::cout << "HP =" << t.getHitPoints() << std::endl;

    DiamondTrap d = DiamondTrap(b);
    std::cout << "d:" << std::endl;
    std::cout << "AD =" << d.getAttackDamage() << std::endl;
    std::cout << "EP =" << d.getEnergyPoints() << std::endl;
    std::cout << "HP =" << d.getHitPoints() << std::endl;

    return (0);
}