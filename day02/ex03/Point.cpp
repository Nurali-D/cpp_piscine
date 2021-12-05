#include "Point.hpp"

Point::Point() : x(Fixed()),y(Fixed())
{
}

Point::~Point(void)
{
}

Point::Point(const Point & source)  : x(Fixed(source.x.toFloat())),
    y(Fixed(source.y.toFloat()))
{
}

Point::Point(const float a, const float b) : x(Fixed(a)), y(Fixed(b))
{
}

const Point &Point::operator=(const Point & var)
{
    if (&var != this)
    {
        x.setRawbits(var.x.getRawBits());
        y.setRawbits(var.y.getRawBits());
    }
    return *this;
}

void Point::showXY(void) const
{
    std::cout << "x = " << x.toFloat() << std::endl;
    std::cout << "y = " << y.toFloat() << std::endl;
}

const Fixed Point::getX(void) const
{
    return (x);
}

const Fixed Point::getY(void) const
{
    return (y);
}
