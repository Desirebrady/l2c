#include <unistd.h>

int is_prime(int nbr)
{
    int i;

    i = 2;
    while (i <= (nbr / 2))
    {
        if (nbr % i == 0)
            return (0);
        else
        i++;
    }
    return (1);
}

void ft_putnbr(nbr)
{
    char c;
    if ( nbr < 0)
    {
        nbr = -nbr;
        write(1, "-", 1);
    
    }
    if(nbr <= 10)
    {
        c  = nbr + '0';
        write(1, &c, 1);
    }
    else
    {
        ft_putnbr(nbr / 10);
        ft_putnbr(nbr % 10);
    }
}

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

void    fprime(int nbr)
{
    int div;

    div = 2;
    if (nbr == 1)
        write(1, "1", 1);
    while (div <= nbr)
    {
        if (nbr  % div == 0)
        {
            ft_putnbr(div);
            if (nbr == div)
                return ;
            write(1, "*", 1);
            nbr /= div;
            div = 1;
        }
        div++;
    }
}

int main(int argc, char *argv[])
{
    fprime(atoi(argv[1]));
    write(1, "\n", 1);
    return 0;
}
