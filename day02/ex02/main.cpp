#include "Fixed.hpp"

int main( void ) {
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    std::cout << "a = " << a << std::endl;
    std::cout << "++a = " << ++a << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "a++ = " << a++ << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "max(a, b) = " << Fixed::max(a, b) << std::endl;
    std::cout << "min(a, b) = " << Fixed::min(a, b) << std::endl;
    
    std::cout << "a > b = " << (a > b ? "true" : "false") << std::endl;
    std::cout << "a >= b = " << (a >= b ? "true" : "false") << std::endl;
    std::cout << "a < b = " << (a < b ? "true" : "false") << std::endl;
    std::cout << "a <= b = " << (a <= b ? "true" : "false") << std::endl;

    Fixed const a1(100.49f);
    Fixed const a2(100.5f);
    
    std::cout << "a1 = " << a1.toFloat() << std::endl;
    std::cout << "a2 = " << a2.toFloat() << std::endl;
    std::cout << "max(a1, a2) = " << Fixed::max(a1, a2) << std::endl;
    std::cout << "min(a1, a2) = " << Fixed::min(a1, a2) << std::endl;
    // Fixed c(8388607);

    // std::cout << "8 388 607 = " << c.toInt() << std::endl;
    // std::cout << c.getRawBits() << std::endl;

    // Fixed d(-8388608);

    // std::cout << "-8 388 608 = " << d.toInt() << std::endl;
    // std::cout << d.getRawBits() << std::endl;

    // float f = 0.99609375;
    // Fixed e(f);

    // std::cout << f << " = " << e.toFloat() << std::endl;
    // float fraction = f * powf(10, 8);
    // std::cout << (int)fraction << std::endl;
    return 0;
}