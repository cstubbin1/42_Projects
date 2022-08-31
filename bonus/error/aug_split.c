/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aug_split.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstubbin <cstubbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 10:27:49 by cstubbin          #+#    #+#             */
/*   Updated: 2022/08/19 10:15:07 by cstubbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**aug_split(int argc, char **argv)
{
	int	c_count;
	int	v_index;

	c_count = 0;
	v_index = 0;
	while (c_count <= argc)
	{
		while (argv[c_count][v_index] != '\0')
		{
			if (ft_isspace(argv[c_count][v_index]))
			{
				argv = ft_split(argv[0], ' ');
			}
			v_index++;
		}
		v_index = 0;
		c_count++;
	}
	return (argv);
}
