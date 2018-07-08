#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		main(int argc, char **argv)
{
	int count;

	count = 0;
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	while (argv[1][count] != '\0')
		count++;
	while (argv[1][count - 1] == ' ')
		count--;
	while (argv[1][count - 1] != ' ')
		count--;
	while (argv[1][count] != '\0')
	{
		if (argv[1][count] == ' ')
		{
			ft_putchar('\n');
			return (0);
		}
		ft_putchar(argv[1][count]);
		count++;
	}
	ft_putchar('\n');
	return (0);
}

