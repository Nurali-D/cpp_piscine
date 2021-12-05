#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{
public:
    Fixed();                         //default constructor

    ~Fixed();                               //destructor

    Fixed(const Fixed &);                   //copy constructor

    const Fixed &operator=(const Fixed &);  //an assignation operator overload

    int getRawBits(void) const;

    void setRawbits(int const rb);

private:
    int                 rawBits;
    static const int    nBits = 8;
};

#endif