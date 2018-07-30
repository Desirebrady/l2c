/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_base.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshumba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 16:22:06 by dshumba           #+#    #+#             */
/*   Updated: 2018/07/01 17:01:11 by dshumba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*int		inbase(char c ,int base)
{
	if (base <= 10)
		return ( c >= '0' && c <= '9');
	return ((c >= '0' && c <= '9') || (c >= 'A' && c <= ('A' + base - 10)) || (c >= 'a' && c <= ('a' + base - 10)));
}

int		atoi_base(const char *str, int base)
{
	int i;
	int nbr;
	int sign;

	if (base < 2 || base > 16)
		return (0);
	nbr = 0;
	i = 0;
	sign = 1;
	while ((str[i] >= '\t' && str[i] <= '\v')  || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
		{
		if (str[i] == '-')
			sign = -1;
		i++;
		}
	while (str[i] && inbase(str[i] , base))
	{
		if (str[i] >= 'A' && 'F' >= str[i])
			nbr = (nbr * 10) + (str[i] - 'A' + 10);
		else if (str[i] >= 'f' && 'f' >= str[i])
			nbr = (nbr * 10) + (str[i] - 'a' + 10);
		else
			nbr = (nbr * base) + (str[i] - '0');
		i++;
	}
	return (nbr * sign);
}*/

int		test_base(const char c)
{
	int		nb;

	if (c >= '0' && c <= '9')
		nb = c - '0';
	else if (c >= 'a' && c <= 'z')
		nb = c - 'a' + 10;
	else if (c >= 'A' && c <= 'Z')
		nb = c - 'A' + 10;
	else
		nb = -1;
	return (nb);
}

int		ft_atoi_base(const char *str, int str_base)
{
	int		neg;
	int		nb;
	int		current;

	nb = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t'
		|| *str == '\f' || *str == '\r' || *str == '\v')
		str++;
	neg = (*str == '-' ? 1 : 0);
	if (*str == '-' || *str == '+')
		str++;
	current = test_base(*str);
	while (current >= 0 && current < str_base)
	{
		nb = nb * str_base + current;
		str++;
		current = test_base(*str);
	}
	return (neg ? -nb : nb);
}

#include <stdio.h>
int	main(int ac, char **av)
{
	int		nb;
	if (ac >= 3)
	{
		nb = ft_atoi_base(av[1], atoi(av[2]));
		printf("%d\n", nb);
	}
	return (0);
}
