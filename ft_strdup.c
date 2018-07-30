/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshumba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 11:45:13 by dshumba           #+#    #+#             */
/*   Updated: 2018/06/26 11:56:11 by dshumba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(char *src)
{
	int i;
	char *dst;

	i = 0;	
	dst = malloc(sizeof(char) * i + 1);
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

int main()
{
	char *dst;
	char src[7] = "desire";
	dst = ft_strdup(src);
	printf("%s\n", dst);
	return (0);
}

