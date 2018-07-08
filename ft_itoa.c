
#include <stdlib.h>
#include  <stdio.h>

/*char    *ft_itoa(int nbr)
{
    char *str;
    long n;
    int len;

    len = 0;
    n = (long)nbr;
    if (n)
        n /= 10;
    if (nbr < 0)
        nbr *= -1;
    if (!(str = (char *)malloc(sizeof(char) * len + 1)))
        return (NULL);
    str[len] = '\0';
    while (nbr)
    {
        str[len] = (nbr % 10) + '0';
        nbr /= 10;
    }
    return (str);
}*/
char    *ft_itoa(int nbr)
{
	int		len;
	long	n_tmp;
	char	*str;

	len = 0;
	n_tmp = nbr;
	while (n_tmp)
	{
		n_tmp /= 10;
		len += 1;
	}
	if (nbr < 0)
	{
		len += 1;
		nbr *= -1;
	}
	if (!(str = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	str[len] ='\0';
	while (nbr)
	{
		str[len] = (n_tmp % 10) + '0';
		nbr /= 10;
	}
	return (str);
}


int main()
{
    printf("%s\n", ft_itoa(94564489));
    return (0);
}