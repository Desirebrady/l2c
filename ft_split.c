/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshumba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 13:43:31 by dshumba           #+#    #+#             */
/*   Updated: 2018/07/17 16:42:34 by dshumba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int 	isblanks(char c)
{
	return ( c == ' ' || c == '\t');
}

char 	**ft_split(char *str)
{
	char **split;
	int i;
	int j;
	int k;

	i = 0;
	k = 0;
	if (!(split = (char **)malloc(sizeof(char *) * 256)))
		return (NULL);
	while (str[i])
	{
		j = 0;
		if(!(split[k] = (char *)malloc(sizeof(char) * 4096)))
			return (NULL);
		while (!isblanks(str[i]) && str[i])
			split[k][j++] = str[i++];
		while (isblanks(str[i]))
			i++;
		split[k][j] = '0';
		k++;
	}
	split[k] = NULL;
	return (split);
}

int main()
{
	int i;
	char str[] = "my name is Desire";
	char **split;

	i = 0;
	while (i < 3)
	{
		printf("%s\n", split[3]);
		i++;
	}
	return (0);
}
