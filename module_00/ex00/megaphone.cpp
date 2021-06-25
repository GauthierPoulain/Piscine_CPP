#include <iostream>

int main(int argc, char const *argv[])
{
	int i;
	int j;

	if (argc > 1)
	{
		i = 1;
		while (argv[i])
		{
			j = 0;
			while (argv[i][j])
				std::cout << (char)toupper(argv[i][j++]);
			i++;
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return (0);
}
