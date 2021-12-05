#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    float   k;
    float   l;
    float   m;

    k = (b.getX() - a.getX()).toFloat() * (point.getY() - a.getY()).toFloat() -
        (b.getY() - a.getY()).toFloat() * (point.getX() - a.getX()).toFloat();
    l = (c.getX() - b.getX()).toFloat() * (point.getY() - b.getY()).toFloat() -
        (c.getY() - b.getY()).toFloat() * (point.getX() - b.getX()).toFloat();
    m = (a.getX() - c.getX()).toFloat() * (point.getY() - c.getY()).toFloat() -
        (a.getY() - c.getY()).toFloat() * (point.getX() - c.getX()).toFloat();
    if ((k > 0 && l > 0 && m > 0) || (k < 0 && l < 0 && m < 0))
        return (true);
    return (false);
}
