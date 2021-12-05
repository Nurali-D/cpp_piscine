#ifndef KAREN_HPP
# define KAREN_HPP

# define DEBUG 1
# define INFO 2
# define WARNING 3
# define ERROR 4

# include <iostream>
# include <string>

class Karen
{
public:
    Karen(void);
    ~Karen(void);
    void complain(std::string level);

private:
    void    debug(void);
    void    info(void);
    void    warning(void);
    void    error(void);
    int     hashIt(std::string);
    void    invalidCommand(void);
};

#endif