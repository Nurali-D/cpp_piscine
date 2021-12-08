#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    setType("Wronganimal");
    std::cout << type << " created" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destroyed" << std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout << type << ": aaa, aaa, aaa" << std::endl;
}

void WrongAnimal::setType(const std::string &t)
{
    type = t;
}

std::string WrongAnimal::getType() const
{
    return (type);
}