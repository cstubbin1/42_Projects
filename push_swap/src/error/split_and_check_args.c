/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_and_check_args.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstubbin <cstubbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 09:16:25 by cstubbin          #+#    #+#             */
/*   Updated: 2022/08/19 10:11:05 by cstubbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

char	**split_and_check_args(int argc, char **argv)
{
	int	count;
	int	c_count;
	int	v_index;

	c_count = 0;
	v_index = 0;
	count = 0;
	if (argc == 1)
	{
		/*while (c_count < argc)
		{
			while (argv[c_count][v_index] != '\0')
			{
				if (ft_isspace(argv[c_count][v_index]))
				{
					argv = ft_split(argv[0], ' ');
					while (argv[count + 1])
					{
						count++;
					}
				}
				v_index++;
			}
			v_index = 0;
			c_count++;
		}
	argc = count; */
		argv = aug_split(argc, argv);
	}
	argc = counter(argv);
	argc--;
	check_alpha(argc, argv);
	check_int(argc, argv);
	check_dups(argc, argv);
	return (argv);
}
