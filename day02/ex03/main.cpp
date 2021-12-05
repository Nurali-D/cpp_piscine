#include "Point.hpp"

void printTriangle(Point const a, Point const b, Point const c, Point const p);

int main( void ) 
{
    Point a(-10, 10);
    Point b(0, 0);
    Point c(10, 10);
    Point p(-5, -5);

    std::cout << "bsp(a, b, c, p) = " 
            << ((bsp(a, b, c, p) == true) ? "true" : "false") << std::endl;
    printTriangle(a, b, c, p);
    // Point a;
    // Point b(1.15, -2.55);
    // Point d(4, 5);
    // Point c(b);
    // a = b;
    // std::cout << "a: " << std::endl;
    // a.showXY();
    // std::cout << "b: " << std::endl;
    // b.showXY();
    // std::cout << "c: " << std::endl;
    // c.showXY();
    // std::cout << "d: " << std::endl;
    // d.showXY();
    // c = d;
    // std::cout << "c: " << std::endl;
    // c.showXY();
    return 0;
}

float findLength(Point const a, Point const b)
{
    return (sqrtf(powf((b.getY() - a.getY()).toFloat(), 2) +
                powf((b.getX() - a.getX()).toFloat(), 2)));
}

bool onEdge(Point const a, Point const b, Point const c, Point const p)
{
    float ab;
    float ac;
    float bc;

    ab = findLength(a, b);
    ac = findLength(a, c);
    bc = findLength(b, c);

    if (findLength(a, p) + findLength(b, p) == ab ||
        findLength(a, p) + findLength(c, p) == ac ||
        findLength(b, p) + findLength(c, p) == bc)
        return (true);
    return (false);
}

bool isVertex(Point const a, Point const b, Point const c, Point const p)
{
    if ((a.getX() == p.getX() && a.getY() == p.getY()) ||
        (b.getX() == p.getX() && b.getY() == p.getY()) ||
        (c.getX() == p.getX() && c.getY() == p.getY()))
        return (true);
    return (false);
}

void printTriangle(Point const a, Point const b, Point const c, Point const p)
{
    
    for (int i = 11; i > -11; i--)
    {
        for (int j = -11; j < 11; j++)
        {
            const Point *ji = new Point(j, i);
            if (ji->getX() == p.getX() && ji->getY() == p.getY())
                std::cout << "\x1b[31;1m+\x1b[0m ";
            else if (onEdge(a, b, c, *ji) || isVertex(a, b, c, *ji) ||
                    bsp(a, b, c, *ji))
                std::cout << "\x1b[32;1mo\x1b[0m ";
            else
                std::cout << "* ";
        }
        std::cout << "\n";
    }
}