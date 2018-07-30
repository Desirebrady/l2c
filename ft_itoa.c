
#include <stdlib.h>
#include  <stdio.h>

static int			ft_strlennbr(int n)
{
	int				i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

char				*ft_itoa(int n)
{
	long			tmp;
	char			*str;
	unsigned int	len;

	tmp = (long)n;	
	len = ft_strlennbr(tmp) + (n < 0);
	if (n < 0)
		tmp = (tmp * -1);
	if(!(str = (char *)malloc(sizeof(char)*len + 1)))
		return (NULL);
	while (len > 0)
	{
		str[len - 1] = (tmp % 10) + '0';
		len--;
		tmp = tmp / 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
int main()
{
    printf("%s\n", ft_itoa(-2147483648));
    return (0);
}
