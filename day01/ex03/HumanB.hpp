#ifndef HUMAN_B
# define HUMAN_B

# include "Weapon.hpp"

class HumanB
{
public:
    HumanB(std::string);
    ~HumanB(void);
    void    setName(std::string);
    void    setWeapon(Weapon&);
    void    attack(void);
private:
    Weapon      *weapon;
    std::string name;
};

#endif