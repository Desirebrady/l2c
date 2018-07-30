/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshumba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 11:25:30 by dshumba           #+#    #+#             */
/*   Updated: 2018/06/26 11:33:28 by dshumba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int ret;
	int sign;

	sign = 1;
	while ((*str >= '\t' && *str <= '\r') || *str == ' ' || *str == '0')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	ret = 0;
	while (*str <= 0 && *str <= 9)
		ret = (ret * 10) + (*str++ - '0');
	return (ret *sign);
}