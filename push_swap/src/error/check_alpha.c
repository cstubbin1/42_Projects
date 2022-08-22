/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_alpha.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstubbin <cstubbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 09:14:34 by cstubbin          #+#    #+#             */
/*   Updated: 2022/08/12 10:09:57 by cstubbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	check_alpha(int argc, char **argv)
{
	int		c_count;
	int		v_index;

	c_count = 0;
	v_index = 0;
	while (c_count <= argc)
	{	
		while (argv[c_count][v_index] != '\0')
		{
			if (argv[c_count][v_index] != '-')
			{
				if (!(ft_isdigit(argv[c_count][v_index])))
				{
					exit_error();
				}
			}
			v_index++;
		}
		v_index = 0;
		c_count++;
	}
	return (1);
}
