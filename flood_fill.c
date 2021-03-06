/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmiantud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 13:01:12 by zmiantud          #+#    #+#             */
/*   Updated: 2018/07/16 17:24:09 by zmiantud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_point.h"

void actual_flood_fill(char **tab, char colour, t_point size, int x, int y)
{
	if (x < 0 || y < 0)
		return ;
	if (x >= size.x || y >= size.y)
		return ;
	if (tab[y][x] != colour)
		return ;
	tab[y][x] = 'F';
	actual_flood_fill(tab, colour, size, x + 1, y);
	actual_flood_fill(tab, colour, size, x - 1, y);
	actual_flood_fill(tab, colour, size, x, y + 1);
	actual_flood_fill(tab, colour, size, x, y - 1);
}

void flood_fill(char **tab, t_point size, t_point begin)
{
	actual_flood_fill(tab, tab[begin.y][begin.x], size, begin.x, begin.y);
}
