#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int main()
{
	char str[7] = "Desire";
	int i;

	i = ft_strlen(str);
	printf("the string is : %s, and its : %d , characters long\n", str, i);
	return (0);
}
