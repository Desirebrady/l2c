#include <stdio.h>
#include <string.h>
int				ft_atoi(const char *str)
{
	int			ret;
	int			sign;

	sign = 1;
	while ((*str >= '\t' && *str <= '\r') || *str == 32 || *str == '0')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	ret = 0;
	while (*str >= '0' && *str <= '9' && *str)
		ret = (ret * 10) + (*str++ - '0');
	return (ret * sign);
}


int main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 4)
		write(1, "\n", 1);
	else
	{
		if (argv[2][0] == '+')
			printf("%d", (ft_atoi(argv[1]) + ft_atoi(argv[3])));
		if (argv[2][0] == '-')
			printf("%d", (ft_atoi(argv[1]) - ft_atoi(argv[3])));
	}
	return (0);
}
