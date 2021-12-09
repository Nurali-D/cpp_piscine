#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
public:
    MateriaSource();
    MateriaSource(const MateriaSource &other);
	virtual	~MateriaSource(void);
	MateriaSource	&operator=(const MateriaSource &other);
    void			learnMateria(AMateria *m);
    AMateria*       createMateria(std::string const & type);
private:
    AMateria *source[4];
};

#endif