#include <unistd.h>

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	str[i] = '\0';
}

int main()
{
	char str[7] = "desire";
	ft_putstr(str);
	return (0);
}
