/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_space.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstubbin <cstubbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 09:00:16 by cstubbin          #+#    #+#             */
/*   Updated: 2022/08/12 09:12:17 by cstubbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_space(int argc, char **argv)
{
	int		c_count;
	int		v_index;

	c_count = 1;
	v_index = 0;
	while (c_count < argc)
	{
		while (argv[c_count][v_index] != '\0')
		{
			if (ft_isspace(argv[c_count][v_index]))
			{
				return (1);
			}
			v_index++;
		}
		v_index = 0;
		c_count++;
	}
	return (0);
}
