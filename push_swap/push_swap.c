/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstubbin <cstubbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 09:09:14 by cstubbin          #+#    #+#             */
/*   Updated: 2022/08/19 11:33:12 by cstubbin         ###   ########.fr       */
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
	stack_b = NULL;
	argv = split_and_check_args(argc, argv);
	argc = counter(argv);
	create_stack(&stack_a, &argv[0], argc);
	display(stack_a, stack_b);
	sort(&stack_a, &stack_b);
	display(stack_a, stack_b);
	clear_elements(&stack_a, &stack_b);
	return (0);
}
