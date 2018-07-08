#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int len;

	i = 0;
	len = argc;
	if (argc < 1)
		write(1, "\n", 1);
	else
	{
		while (argv[len - 1][i])
		{
			write(1, &argv[len - 1][i], 1);
			i++;
		}
		write(1, "\n", 1);	
	}
	return (0);
}
