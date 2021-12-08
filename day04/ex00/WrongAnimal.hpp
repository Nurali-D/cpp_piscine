#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
public:
    WrongAnimal();
    virtual ~WrongAnimal();
    void makeSound() const;
    void setType(const std::string &);
    std::string getType() const;
protected:
    std::string type;
};

#endif