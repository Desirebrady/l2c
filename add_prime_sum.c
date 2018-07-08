#include <stdio.h>
int     ft_atoi(char *str)
{
    int i;
    int sign;
    int ret;

    ret = 0;
    i = 0;
    sign = 1;
    while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\v'))
        i++;
    if (str[i] == '-' || str[i] == '+')
        if(str[i] == '-')
            sign = -1;
    while (str[i] >= '0' && str[i] <= '9')
    {
        ret = (ret * 10) + (str[i] - '0');
        i++;
    }
    return (ret * sign);
}

void    ft_putnbr(int nbr)
{
    char c;
    if (nbr < 0)
    {
        nbr = -nbr;
        write(1, "-", 1);
    }
    else if (nbr < 10)
    {
        c = nbr + '0';
        write(1, &c, 1);
    }
    else
    {
        ft_putnbr(nbr / 10);
        ft_putnbr(nbr % 10);
    }
}

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

void    add_sum(int nbr)
{
    int sum;
    int i;

    i = 2;
    sum = 0; 
    while( i <= nbr)
    {
        if (is_prime(i))
            sum = sum + i;
        i++;
    }
    ft_putnbr(sum);
}
int main(int argc, char **argv)
{
    if (argc != 2)
        write(1, "\n", 1);
    else
    {
        add_sum(ft_atoi(argv[1]));
        write(1, "\n", 1);
    }    
    return (0);
}