#include "Karen.hpp"

Karen::Karen(void){}

Karen::~Karen(void){}

void Karen::complain(std::string level)
{
    void (Karen::*array[5])(void) = 
    {
        &Karen::invalidCommand,
        &Karen::debug,
        &Karen::info,
        &Karen::warning,
        &Karen::error
    };
    int i;

    i = !level.compare("DEBUG") * 1 + !level.compare("INFO") * 2 
        + !level.compare("WARNING") * 3 + !level.compare("ERROR") * 4;
    (this->*array[i])();
}

void    Karen::debug(void)
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love to get extra bacon "
        << "for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\n" 
        << "I just love it!" << std::endl;
}

void    Karen::info(void)
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon cost more money.\n"
        << "You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void    Karen::warning(void)
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free.\n"
        << "I’ve been coming here for years and you just started working "
        << "here last month." << std::endl;
}

void    Karen::error(void)
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void    Karen::invalidCommand(void)
{
    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}