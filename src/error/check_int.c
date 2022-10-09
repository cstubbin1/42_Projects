/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstubbin <cstubbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 09:34:51 by cstubbin          #+#    #+#             */
/*   Updated: 2022/08/19 09:09:00 by cstubbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_int(int argc, char **argv)
{
	int	c_count;
	int	v_index;

	c_count = 0;
	v_index = 0;
	while (c_count <= argc)
	{
		while (argv[c_count][v_index] != '\0')
		{
			if (argv[c_count][v_index] == '-' && v_index == 0)
			{
				v_index++;
			}
			v_index++;
		}
		if ((ft_atol(argv[c_count])) > MAX || (ft_atol(argv[c_count])) < MIN)
		{
			exit_error();
		}
		v_index = 0;
		c_count++;
	}
	return (1);
}
