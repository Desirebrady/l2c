#include <stdlib.h>
#include <stdio.h>

int		ft_isblank(char c)

{

	return (c == ' ' || c == '\t');

}

char		**ft_split(char *str)
{
	int		i;
	int		j;
	int		k;
	char	**split;

	i = 0;
	k = 0;
	if (!(split = (char **)malloc(sizeof(char *) * 256)))
		return (NULL);
	while (ft_isblank(str[i]))
		i += 1;
	while (str[i])
	{
		j = 0;
		if (!(split[k] = (char *)malloc(sizeof(char) * 4096)))
			return (NULL);
		while (!ft_isblank(str[i]) && str[i])
			split[k][j++] = str[i++];
		while (ft_isblank(str[i]))
			i += 1;
		split[k][j] = '\0';
		k += 1;
	}
	split[k] = NULL;
	return (split);
}

int main()
{
    char months[] = "MY Name Is DESIRE";
    char** tokens;

    tokens = ft_split(months);

    if (tokens)
    {
        int i;

        i =0;
        while (*(tokens + i))
        {
            printf("%s", *(tokens + i));
            free(*(tokens + i));
            i++;
        }
    }
    return 0;
}
