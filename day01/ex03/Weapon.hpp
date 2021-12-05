#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon
{
public:
    Weapon(void);
    Weapon(std::string);
    ~Weapon(void);

    void                setType(std::string);
    const std::string   &getType(void) const;
    
private:
    std::string type;
};

#endif