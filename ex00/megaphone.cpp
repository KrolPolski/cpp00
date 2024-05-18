#include <cstring>
#include <iostream>

int	main(int argc, char **argv)
{
	int i;
	int k;

	k = 0;
	i = 1;
	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (1);
	}
	while (argv[i])
	{
		while (argv[i][k])
		{
			std::cout << (char)std::toupper(argv[i][k]);
			k++;
		}
		
		k = 0;
		i++;
	}
	std::cout << std::endl;
	return (0);
}