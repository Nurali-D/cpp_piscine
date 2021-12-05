#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
public:

    Zombie(void);
    Zombie(std::string);
    ~Zombie(void);

    void    announce( void );
    void    setName(std::string);

private:
    std::string name;
};

#endif