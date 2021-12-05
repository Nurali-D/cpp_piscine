#ifndef HUMAN_A
# define HUMAN_A

# include "Weapon.hpp"

class HumanA
{
public:
    HumanA(std::string, Weapon&);
    ~HumanA(void);
    void    setName(std::string);
    void    attack(void);
private:
    Weapon      &weapon;
    std::string name;
};

#endif