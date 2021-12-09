#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>

# include "ICharacter.hpp"

class Character : public ICharacter
{
public:
    Character(std::string const &n);
    Character(const Character &other);
	virtual	~Character(void);
	Character			        &operator=(const Character &other);
    std::string const & getName() const;
    void                equip(AMateria* m);
    void                unequip(int idx);
    void                use(int idx, ICharacter& target);
private:
    Character(void);
    std::string name;
    AMateria    *inventory[4];
};

#endif