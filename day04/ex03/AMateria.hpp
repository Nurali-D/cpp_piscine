#ifndef AMATERIA_HPP
# define AMATERIA_HPP


# include <string>
# include <iostream>

class AMateria;
#include "ICharacter.hpp"

class AMateria
{
private:
    AMateria(void);
protected:
    std::string type;
public:
    AMateria(std::string const & type);
    virtual ~AMateria();
    AMateria(const AMateria &other);
	AMateria			&operator=(const AMateria &other);
    void                setType(std::string const &t);
    std::string const & getType() const; //Returns the materia type
    virtual AMateria*   clone() const = 0;
    virtual void        use(ICharacter& target);
};

#endif