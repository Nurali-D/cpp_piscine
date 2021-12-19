#include "convert.hpp"

double	get_double(const char *str)
{
	double		d;
	std::string	s;
	size_t		i, j;

	i = j = 0;

	if (std::strlen(str) == 1 && !std::isdigit(str[0]))
		return (str[0]);
	while (str[i] && std::isspace(str[i]))
		i++;
	j = i;
	while (str[j] && (std::isalnum(str[j]) || str[j] == '.' 
		|| str[j] == '-' || str[j] == '+'))
		j++;
	s = std::string(str, i, j);
	d = std::atof(s.c_str());
	if(d == 0 && !(s[0] == '0' || (s[0] == '.' && s[1] == '0')
		|| ((s[0] == '-' || s[0] == '+' ) 
		&& (s[1] == '0' || s[1] == '.'))))
		throw (std::logic_error("Invalid argument"));
	return (d);
}

int		main(const int argc, const char *argv[])
{
	double	d;
	if (argc != 2)
	{
		std::cout << "Invalid number of argumenst." << std::endl;
		return (1);
	}
	try
	{
		d = get_double(argv[1]);
	}
	catch(const std::logic_error &e)
	{
		std::cerr << e.what() << '\n' 
		<< "Enter a valid number." << std::endl;
		return (2);
	}
	implicitConvert(d);
	return (0);
}
