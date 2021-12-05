#include <iostream>

void	printArgs(int argc, char* argv[])
{
	int	j;

	for (int i = 1; i < argc; i++)
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
				argv[i][j] -= 32;
			std::cout << argv[i][j++];
		}
	}
	std::cout << std::endl;
}

int	main(int argc, char* argv[])
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
		printArgs(argc, argv);
	return 0;
}
