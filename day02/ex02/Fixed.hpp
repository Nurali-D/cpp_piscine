#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed                                 
{
public:
    Fixed();                                //default constructor
    Fixed(const int);                       //intMax = 8 388 607, intMin = - 8 388 608
    Fixed(const float);                     //maxFractionPart = 0.99 609 375
    float               toFloat(void) const;
    int                 toInt(void) const;
    ~Fixed();                               //destructor
    Fixed(const Fixed &);                   //copy constructor
    const Fixed         &operator=(const Fixed &);  //an assignation operator overload
    int                 getRawBits(void) const;
    void                setRawbits(int const rb);
    bool                operator>(const Fixed &) const;
    bool                operator<(const Fixed &) const;
    bool                operator>=(const Fixed &) const;
    bool                operator<=(const Fixed &) const;
    bool                operator==(const Fixed &) const;
    bool                operator!=(const Fixed &) const;
    Fixed               operator+(const Fixed &) const;
    Fixed               operator-(const Fixed &) const;
    Fixed               operator*(const Fixed &) const;
    Fixed               operator/(const Fixed &) const;
    Fixed               &operator++(void);                //pre-increment
    Fixed               &operator--(void);                //pre-decrement
    Fixed               operator++(int);                  //post-increment
    Fixed               operator--(int);                  //post-decrement
    static Fixed        &min(Fixed &, Fixed &);
    const static Fixed  &min(const Fixed &, const Fixed &);
    static Fixed        &max(Fixed &, Fixed &);
    const static Fixed  &max(const Fixed &, const Fixed &);

private:
    int                 rawBits;
    static const int    nBits = 8;
};

std::ostream            &operator<<(std::ostream &out, const Fixed &rep);

#endif