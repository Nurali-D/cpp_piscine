#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
public:
    Point();
    ~Point(void);
    Point(const Point &);
    Point(const float, const float);
    const Point &operator=(const Point &);
    void showXY(void) const;
    const Fixed getX(void) const;
    const Fixed getY(void) const;
private:
    Fixed const x;
    Fixed const y;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif