#include "convert.hpp"

void convertToChar(double d)
{
	std::cout << "char: ";
	if (d < 0 || d > 255 || !std::isfinite(d))
		std::cout << "impossible" << std::endl;
	else if (!(d >= 32 && d <= 127))
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << static_cast<char>(d) << std::endl;
}

void convertToInt(double d)
{
	std::cout << "int: ";
	if (!(d >= INT_MIN && d <= INT_MAX) || !std::isfinite(d))
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(d) << std::endl;
}

void convertToFloat(double d)
{
	std::cout << "float: " << static_cast<float>(d);
	if ((d < 1000000 && d > -1000000 && (d >= 1 || d <= -1)) || d == 0)
		std::cout << (std::abs(d - std::floor(d + 0.5)) < eps ? ".0" : "");
	std::cout << "f" << std::endl;
}

void convertToDouble(double d)
{
	std::cout << "double: " << d;
	if ((d < 1000000 && d > -1000000 && (d >= 1 || d <= -1)) || d == 0)
		std::cout << (std::abs(d - std::floor(d + 0.5)) < eps ? ".0" : "");
	std::cout << std::endl;
}


void implicitConvert(double d)
{
	convertToChar(d);
	convertToInt(d);
	convertToFloat(d);
	convertToDouble(d);
}