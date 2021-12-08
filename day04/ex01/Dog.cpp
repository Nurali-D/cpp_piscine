#include "Dog.hpp"

Dog::Dog() : Animal()
{
    setType("Dog");
    brain = new Brain();
    std::cout << type << " created" << std::endl;
}

Dog::~Dog()
{
    std::cout << "dog destroyed" << std::endl;
    delete brain;
}

void Dog::makeSound() const
{
    std::cout << type << ": gav, gav, gav" << std::endl;
}