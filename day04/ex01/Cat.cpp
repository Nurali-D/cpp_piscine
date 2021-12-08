#include "Cat.hpp"

Cat::Cat() : Animal()
{
    setType("Cat");
    brain = new Brain();
    std::cout << type << " created" << std::endl;   
}

Cat::~Cat()
{
    std::cout << "cat destroyed" << std::endl;
    delete brain;
}

void Cat::makeSound() const
{
    std::cout << type << ": meow, meow, meow" << std::endl;
}
