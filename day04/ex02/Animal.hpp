#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
public:
    Animal();
    virtual ~Animal();
    virtual void makeSound() const = 0;
    void setType(const std::string &);
    std::string getType() const;
protected:
    std::string type;
};

#endif