#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        source[i] = 0;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	for (int i = 0; i < 4; i++)
    {
        if (other.source[i] != 0)
            source[i] = other.source[i]->clone();
    }
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
    {
        if (source[i] != 0)
		    delete source[i];
    }
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
	for (int i = 0; i < 4; i++)
    {
        if (source[i] != 0)
		    delete source[i];
    }
	for (int i = 0; i < 4; i++)
    {
        if (other.source[i] != 0)
		    this->learnMateria(other.source[i]->clone());
    }
	return (*this);
}

void MateriaSource::learnMateria(AMateria* m)
{
    if (m == 0)
        return ;
    for (int i = 0; i < 4; i++)
    {
        if (source[i] == 0)
        {
            source[i] = m;
            break ;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (source[i] != 0 && !(source[i]->getType().compare(type)))
            return (source[i]->clone());
    }
    return (0);
}
