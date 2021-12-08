#include "Dog.hpp"

Dog::Dog() : Animal()
{
    setType("Dog");
    std::cout << type << " created" << std::endl;
}

Dog::~Dog()
{
    std::cout << "dog destroyed" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << type << ": gav, gav, gav" << std::endl;
}