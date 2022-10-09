/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstubbin <cstubbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 09:09:14 by cstubbin          #+#    #+#             */
/*   Updated: 2022/09/01 14:34:24 by cstubbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	argv++;
	argc--;
	if (argc == 0)
		return (0);
	stack_a = NULL;
	stack_b = NULL;
	argv = split_and_check_args(argc, argv);
	argc = counter(argv);
	create_stack(&stack_a, &argv[0], argc);
	sort(&stack_a, &stack_b);
	clear_elements(&stack_a, &stack_b);
	return (0);
}
