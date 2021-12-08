#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    setType("WrongCat");
    std::cout << type << " created" << std::endl;   
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destroyed" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << type << ": meow, meow, meow" << std::endl;
}