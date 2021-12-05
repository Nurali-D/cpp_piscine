#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
public:

    Fixed();

    Fixed(const int);                         //default constructor

    Fixed(const float);

    float toFloat(void) const;

    int toInt(void) const;

    ~Fixed();                               //destructor

    Fixed(const Fixed &);                   //copy constructor

    const Fixed &operator=(const Fixed &);  //an assignation operator overload

    int getRawBits(void) const;

    void setRawbits(int const rb);

private:
    int                 rawBits;
    static const int    nBits = 8;
};

std::ostream &operator<<(std::ostream &out, const Fixed &rep);

#endif