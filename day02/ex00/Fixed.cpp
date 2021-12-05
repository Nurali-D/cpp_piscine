#include "Fixed.hpp"

Fixed::Fixed() : rawBits(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed & source) //: rawBits(source.rawBits)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = source;
}

const Fixed &Fixed::operator=(const Fixed &right)
{
    std::cout << "Assignation operator called" << std::endl;
    if (&right != this)
    {
        this->rawBits = right.getRawBits();
    }
    return (*this);
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (rawBits);
}

void Fixed::setRawbits(int const rb)
{
    rawBits = rb;
}