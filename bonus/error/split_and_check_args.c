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

#include "push_swap.h"

char	**split_and_check_args(int argc, char **argv)
{
	if (argc == 1)
	{
		argv = aug_split(argc, argv);
	}
	argc = counter(argv);
	argc--;
	check_alpha(argc, argv);
	check_int(argc, argv);
	check_dups(argc, argv);
	return (argv);
}
