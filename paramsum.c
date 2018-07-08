#include <unistd.h>

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

int main(int argc, char **argv)
{
    if (argc < 2)
        write(1, "\n", 1);
    else
    {
        ft_putnbr(argc - 1);
        write(1, "\n", 1);
    }
    return (0);
}