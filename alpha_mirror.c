#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	char c;

	i = 0;
	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				c = 'm' - (argv[1][i] - 'n');
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				c = 'M' - (argv[1][i] - 'N');
			write(1, &c, 1);
			i++;
		}
	}
	return (0);
}
