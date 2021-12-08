#include "Cat.hpp"

Cat::Cat() : Animal()
{
    setType("Cat");
    std::cout << type << " created" << std::endl;   
}

Cat::~Cat()
{
    std::cout << "cat destroyed" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << type << ": meow, meow, meow" << std::endl;
}
