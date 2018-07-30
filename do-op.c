/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshumba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 10:54:46 by dshumba           #+#    #+#             */
/*   Updated: 2018/06/26 11:06:02 by dshumba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		main(int argc, char **argv)
{
	if (argc != 4)
		printf("\n");
	else
	{
		if (argv[2][0] == '+')
			printf("%d\n", atoi(argv[1]) + atoi(argv[3]));
		if (argv[2][0] == '-')
			printf("%d\n", atoi(argv[1]) - atoi(argv[3]));
		if (argv[2][0] == '*')
			printf("%d\n", atoi(argv[1]) * atoi(argv[3]));
		if (argv[2][0] == '/')
			printf("%d\n", atoi(argv[1]) / atoi(argv[3]));
		if (argv[2][0] == '%')
			printf("%d\n", atoi(argv[1]) % atoi(argv[3]));
	}
	return (0);
}
