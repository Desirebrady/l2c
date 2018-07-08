#include <unistd.h>

int	seen(char *str, char c, int len)
{
	int i;

	i = 0;
	while (str[i] && i < len)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int main(int argc , char **argv)
{
	int i;

	i = 0;
	if (argc != 3)
		write(1, "\n", 1);
	else
	{
		while (argv[1][i])
		{
			if (seen(argv[1], argv[1][i], i) && seen(argv[2], argv[1][i], i))
				write(1, &argv[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
