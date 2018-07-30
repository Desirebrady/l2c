#include <stdlib.h>
#include <stdio.h>

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

int     ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return(i);
}

char	*ft_strcat(char *dest, const char *src)
{
	int i;
	int n;

	n = 0;
	i = ft_strlen(dest);
	while (src[n] != '\0')
	{
		dest[i] = src[n];
		i++;
		n++;
	}
	dest[i] = '\0';
	return (dest);
}

char    *moment(int duration)
 {   
    if (duration >= 60)
    {
        duration /= 60;
        if (duration >= 60)
        {
            duration /= 60;
            if (duration > 24)
            {
                duration /= 24;
                if (duration > 30)
                {
                    duration /= 30;
                    if (duration == 1)
                        return(ft_strcat(ft_itoa(duration)," month ago\n"));
                    return(ft_strcat(ft_itoa(duration)," months ago\n"));
               }
            if (duration == 1)
                return(ft_strcat(ft_itoa(duration)," day ago\n"));
            return(ft_strcat(ft_itoa(duration)," days ago\n"));
            }
            if (duration == 1)
                return(ft_strcat(ft_itoa(duration)," hour ago\n"));
            return(ft_strcat(ft_itoa(duration)," hours ago\n"));
        }
        if (duration == 1)
            return(ft_strcat(ft_itoa(duration), " minute ago\n"));
        return(ft_strcat(ft_itoa(duration), " minutes ago\n"));
    }
    if (duration == 1)
        return(ft_strcat(ft_itoa(duration), " second ago\n"));
    return(ft_strcat(ft_itoa(duration), " seconds ago\n"));
 }


int main()
{
    int num = 59;
    printf("%s", moment(num));
    return (0);
}