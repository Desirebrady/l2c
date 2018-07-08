#include <unistd.h>
#include <stdio.h>

char *strrev(char *str)
{
	int i;
	int j;
	char temp;

	i = 0;
	j = 0;
	while (str[i])
		i++;
	i = i - 1;
	while (j < i)
	{
		temp = str[j];
		str[j] = str[i];
		str[i] = temp;
		j++;
		i--;
	}
	return (str);
}

int main()
{
	char str[7] = "DESIRE";
	printf("%s\n", strrev(str));
	return (0);
}
