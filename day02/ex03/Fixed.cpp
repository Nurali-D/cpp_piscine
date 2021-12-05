#include "Fixed.hpp"

Fixed::Fixed() : rawBits(0)
{
}

Fixed::Fixed(const int value)
{
    rawBits = value << nBits;
}

Fixed::Fixed(const float value)
{
    rawBits = roundf(value * (1 << nBits));
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

void                    Fixed::setRawbits(int const rb) const
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
