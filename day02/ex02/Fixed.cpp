#include "Fixed.hpp"

Fixed::Fixed() : rawBits(0)
{
}

Fixed::Fixed(const int value)
{
    if (value <= 8388607 && value >= -8388608)
        rawBits = value << nBits;
    else
    {
        std::cout << "Overflow error.\n"
            << "Input integers in range [-8 388 608; 8 388 607]."
            << std::endl;
        rawBits = 0;
    }
}

Fixed::Fixed(const float value)
{
    if ((int)roundf(value) <= 8388607 && (int)roundf(value) >= -8388608)
        rawBits = roundf(value * (1 << nBits));
    else
    {
        std::cout << "Overflow error.\n"
            << "Input floats in range [-8 388 608; 8 388 607]."
            << std::endl;
        rawBits = 0;
    }
}

float                   Fixed::toFloat(void) const
{
    return ((float)rawBits / (1 << nBits));
}

int                     Fixed::toInt(void) const
{
    return (rawBits >> nBits);
}

Fixed::~Fixed(void)
{
}

Fixed::Fixed(const Fixed & source) //: rawBits(source.rawBits)
{
    *this = source;
}

const Fixed             &Fixed::operator=(const Fixed &right)
{
    if (&right != this)
    {
        this->rawBits = right.getRawBits();
    }
    return (*this);
}

int                     Fixed::getRawBits(void) const
{
    return (rawBits);
}

void                    Fixed::setRawbits(int const rb)
{
    rawBits = rb;
}

std::ostream            &operator<<(std::ostream &out, const Fixed &rep)
{
    out << rep.toFloat();
    return (out);
}

    bool                Fixed::operator>(const Fixed &var) const
    {
        return (this->rawBits > var.rawBits);
    }

    bool                Fixed::operator<(const Fixed &var) const
    {
        return (this->rawBits < var.rawBits);
    }

    bool                Fixed::operator>=(const Fixed &var) const
    {
        return (this->rawBits >= var.rawBits);
    }

    bool                Fixed::operator<=(const Fixed &var) const
    {
        return (this->rawBits <= var.rawBits);
    }

    bool                Fixed::operator==(const Fixed &var) const
    {
        return (this->rawBits == var.rawBits);
    }

    bool                Fixed::operator!=(const Fixed &var) const
    {
        return (this->rawBits != var.rawBits);
    }

    Fixed               Fixed::operator+(const Fixed &var) const
    {
        return (Fixed(this->toFloat() + var.toFloat()));
    }

    Fixed               Fixed::operator-(const Fixed &var) const
    {
        return (Fixed(this->toFloat() - var.toFloat()));
    }

    Fixed               Fixed::operator*(const Fixed &var) const
    {
        return (Fixed(this->toFloat() * var.toFloat()));
    }

    Fixed               Fixed::operator/(const Fixed &var) const
    {
        return (Fixed(this->toFloat() / var.toFloat()));
    }

    Fixed               &Fixed::operator++(void)
    {
        this->rawBits += 1;
        return (*this);
    }

    Fixed               &Fixed::operator--(void)
    {
        this->rawBits -= 1;
        return (*this);
    }

    Fixed               Fixed::operator++(int)
    {
        Fixed temp(*this);
        this->rawBits += 1;
        return (temp);
    }

    Fixed               Fixed::operator--(int)
    {
        Fixed temp(*this);
        this->rawBits -= 1;
        return (temp);
    }

    Fixed               &Fixed::min(Fixed &a, Fixed &b)
    {
        return (a < b ? a : b);
    }

    const Fixed         &Fixed::min(const Fixed &a, const Fixed &b)
    {
        return (a < b ? a : b);
    }

    Fixed               &Fixed::max(Fixed &a, Fixed &b)
    {
        return (a > b ? a : b);
    }

    const Fixed         &Fixed::max(const Fixed &a, const Fixed &b)
    {
        return (a > b ? a : b);
    }
