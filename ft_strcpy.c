#include <unistd.h>

char	*ft_strcpy(char *dst, char *src)
{	
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		while (dst[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
	}
	dst[i] = '\0':
	return (dst);
}

int main()
{
	char src, dst;
	print("%\n", ft_strcpy(dst, "desire"));
	return (0);
}
