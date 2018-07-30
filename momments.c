#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

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

char    *round_off_time(int *value)
{
    char    *str;

    if(!(str = (char *)malloc(sizeof(str) + 1)))
        return(NULL);
    while (*value >= (60 * 60 * 24 * 30))
    {
        if (*value >= (60 * 60 * 24 * 30) && strlen(str) == 0)
        {
            if (*value != 1)
                str = " months ago.";
            else
                str = " month ago.";
        }
        *value /= 30;
    }
    while (*value >= (60 * 60 * 24))
    {
        if (*value >= (60 * 60 * 24) && strlen(str) == 0)
             str = " days ago.";
        *value /= 24;
    }
    while (*value >= (60 * 60))
    {
        if(*value >= (60 * 60) && strlen(str) == 0)
            if (*value != 1)
                str = " hour ago.";
        *value /= 60;
        if (*value == 1)
                str = " hours ago.";
    }
    while (*value >= 60)
    {
        if (*value >= 60 && strlen(str) == 0)
            if (*value != 1)
                str = " minutes ago.";
        *value /= 60;
        if (*value != 1)
            str = " minutes ago.";
    }
    if (*value < 60)
    {
        if (*value < 60 && strlen(str) == 0)
        {
            if (*value != 1)
                str = " seconds ago.";
            else
                str = " second ago.";
        }
    }
    return (str);
}

char    *moment(unsigned int duration)
{
    char *str;
    int i;
    int num;
    char    *str_time;

    num = (int)duration;
    i = 0;
    if(!(str = (char *)malloc(sizeof(str) + 1)))
        return(NULL);
    str_time = (char*)malloc(sizeof(4096) + 1);
    str[i] = '\0';

    str_time = round_off_time(&num);
    str = ft_itoa(num);
    str = strcat(str, str_time);
    return(str);
    //free(str);
}

#include <stdio.h>

int main()
{
    int num = 60 * 60 * 20;//(3600 * 24 * 30);
   // printf("%dsec\n", num2sec(num));
    //printf("%dmin\n", sec2min(num));
    //printf("%dhr\n", sec2hr(num));
    //printf("%dday\n", sec2day(num));
    //printf("%dmonth\n", sec2month(num));
    printf("%s\n", moment(num));
    return (0);
}
//