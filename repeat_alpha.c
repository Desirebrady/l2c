#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int n;

	i = 0;
	if (argc != 2)
		write(1, "\n", 1);
	else 
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			n = argv[1][i]  - 96;
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			n = argv[1][i] - 64;
			while (n--)
				write(1, &argv[1][i], 1);
		i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

