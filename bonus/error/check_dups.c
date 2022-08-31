/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dups.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstubbin <cstubbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 10:15:17 by cstubbin          #+#    #+#             */
/*   Updated: 2022/08/19 09:43:14 by cstubbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_dups(int argc, char **argv)
{
	int	x;
	int	y;

	x = 0;
	y = x + 1;
	while (x <= argc)
	{
		while (y <= argc)
		{
			if (ft_strcmp(argv[x], argv[y]) == 0)
			{
				exit_error();
			}
			y++;
		}
		x++;
		y = x + 1;
	}
	return (1);
}
