/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   range.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshumba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 15:32:52 by dshumba           #+#    #+#             */
/*   Updated: 2018/07/01 16:21:36 by dshumba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		*ft_range(int start, int end)
{
	int i;
	int *range;

	i = 0;
	if (start > end)
		range = (int *)malloc(sizeof(int) * (start - end) + 1);
	else
		range = (int *)malloc(sizeof(int) * (end - start) + 1);
	while (start != end)
	{
		range[i++] = end; 
		end += (start < end) ? -1 : 1;
	}
	range[i] = end;
	return (range);
}


int main()
{
	int i;
	int *range;

	i = 0;
	range = ft_range(-1 , 2);
	while (i < 10)
	{
		printf("%d\n", range[i]);;
		i++;}
	return (0);
}
