#include <unistd.h>


int		ft_isblank(char c)

{

	return (c == ' ' || c == '\t');

}
int		main(int argc, char *argv[])
{
	int		i;
	int		k;

	if (argc > 1)
	{
		i = 0;
		while (ft_isblank(argv[1][i]))
			i += 1;
		k = i;
		while (!ft_isblank(argv[1][i]))
			i += 1;
		while (argv[1][i])
		{
			if (argv[1][i] && (!ft_isblank(argv[1][i])) \
				&& (ft_isblank(argv[1][i - 1])))
			{
				while (argv[1][i] && (!ft_isblank(argv[1][i])))
					write(1, &argv[1][i++], 1);
				write(1, " ", 1);
			}
			i += 1;
		}
		while (argv[1][k] && (!ft_isblank(argv[1][k])))
			write(1, &argv[1][k++], 1);
	}
	write(1, "\n", 1);
	return (0);
}


