#include "FragTrap.hpp"

int main()
{
    FragTrap t("Tom");
    FragTrap b("Ben");

    t.highFivesGuys();
    t.attack("Ben");
    t.takeDamage(4);
    t.beRepaired(2);

    std::cout << "t:" << std::endl;
    std::cout << "AD =" << t.getAttackDamage() << std::endl;
    std::cout << "EP =" << t.getEnergyPoints() << std::endl;
    std::cout << "HP =" << t.getHitPoints() << std::endl;

    b.setAttackDamage(200);
    b.setEnergyPoints(300);
    b.setHitPoints(400);
    t = b;
    std::cout << "t:" << std::endl;
    std::cout << "AD =" << t.getAttackDamage() << std::endl;
    std::cout << "EP =" << t.getEnergyPoints() << std::endl;
    std::cout << "HP =" << t.getHitPoints() << std::endl;

    FragTrap d = FragTrap(b);
    std::cout << "d:" << std::endl;
    std::cout << "AD =" << d.getAttackDamage() << std::endl;
    std::cout << "EP =" << d.getEnergyPoints() << std::endl;
    std::cout << "HP =" << d.getHitPoints() << std::endl;

    return (0);
}