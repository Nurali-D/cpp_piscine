#include "Animal.hpp"

Animal::Animal()
{
    setType("animal");
    std::cout << type << " created" << std::endl;
}

Animal::~Animal()
{
    std::cout << "animal destroyed" << std::endl;
}

void Animal::makeSound() const
{
    std::cout << type << ": aaa, aaa, aaa" << std::endl;
}

void Animal::setType(const std::string &t)
{
    type = t;
}

std::string Animal::getType() const
{
    return (type);
}