#include <stdio.h>

int	is_power_of_2(unsigned int n)
{
	return ((n & (-n)) == n ? 1 : 0);
}
int main()
{
	int n;

	n = 16;
	printf("%d\n", is_power_of_2(n));
	return (0);
}
