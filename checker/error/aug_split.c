/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aug_split.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstubbin <cstubbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 10:27:49 by cstubbin          #+#    #+#             */
/*   Updated: 2022/09/01 13:51:54 by cstubbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**aug_split(char **argv)
{
	int	c_count;
	int	v_index;

	c_count = 0;
	v_index = 0;
	while (argv[c_count][v_index] != '\0')
	{
		if (ft_isspace(argv[0][v_index]) == 1)
		{
			argv = ft_split(argv[0], ' ');
		}
		v_index++;
	}
	return (argv);
}
