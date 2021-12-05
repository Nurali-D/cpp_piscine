#include "Fixed.hpp"

Fixed::Fixed() : rawBits(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called" << std::endl;
    rawBits = value << nBits;
}

Fixed::Fixed(const float value)
{
    std::cout << "Float constructor called" << std::endl;
    rawBits = roundf(value * (1 << nBits));
}

float Fixed::toFloat(void) const
{
    return ((float)rawBits / (1 << nBits));
}

int Fixed::toInt(void) const
{
    return (rawBits >> nBits);
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
    return (rawBits);
}

void Fixed::setRawbits(int const rb)
{
    rawBits = rb;
}

std::ostream &operator<<(std::ostream &out, const Fixed &rep)
{
    out << rep.toFloat();
    return (out);
}