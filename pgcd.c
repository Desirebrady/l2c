#include <stdio.h>
#include <stdlib.h>

#define min(a,b) ((a < b) ? (a) : (b))

int	hcd(int a, int b)
{
	int i;
	int hcda;
	int hcdb;

	i = min(a,b);
	i++;
	while (i--)
	{
		hcda = a % i;
		hcdb = b % i;
		if (hcda == 0 && hcdb == 0 && hcda == hcdb)
			return (i);
	}
	return (-1);
}

int	main(int argc, char **argv)
{
	int a;
	int b;
	if (argc != 3)
		printf("\n");
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%i\n", hcd(a, b));
	}
	return (0);

}
