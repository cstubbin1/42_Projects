/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 10:28:05 by marvin            #+#    #+#             */
/*   Updated: 2022/08/31 10:28:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
    t_stack	*stack_c;
	t_stack	*stack_d;
	char	*line;

	argv++;
	argc--;
	if (argc == 0)
		return (0);
	stack_c = NULL;
	stack_d = NULL;
	ft_putstr_fd("Checker Works\n", 1);
	argv = split_and_check_args(argc, argv);
	argc = counter(argv);
	create_stack(&stack_c, &argv[0], argc);
	ft_putstr_fd("Post stack creation\n", 1);
	while (get_next_line(0, &line))
	{
		do_commands(line, &stack_c, &stack_d);
		ft_strdel(&line);
	}
	display(stack_c, stack_d);
	if (issorted(stack_c))
	{
		ft_putstr_fd("OK\n", 1);
	}
	else
	{
		ft_putstr_fd("KO\n", 1);
	}
	clear_elements(&stack_c, &stack_d);
	return (0);
}

void	print_checker_res(t_stack **stack_a, t_stack **stack_b)
{
	if (!(stack_is_sorted(*stack_a)) && !(*stack_b))
		ft_putstr_fd("OK\n", 1);
	else
		ft_putstr_fd("KO\n", 1);
	if (*stack_a || *stack_b)
		clear_elements(stack_a, stack_b);
}

int	stack_is_sorted(t_stack *stack_a)
{
	t_stack	*stack;

	stack = stack_a;
	while (stack->next)
	{
		if (stack->value >= stack->next->value)
			return (1);
		stack = stack->next;
	}
	return (0);
}

int	return_errors(char **line, t_stack **stack_a, t_stack **stack_b)
{
	ft_strdel(line);
	if (*stack_a || *stack_b)
		clear_elements(stack_a, stack_b);
	ft_putstr_fd("Error\n", 1);
	return (0);
}

int	do_commands(char *line, t_stack **stack_a, t_stack **stack_b)
{
	if (!(ft_strcmp(line, "sa")))
		swap(stack_a, 'a');
	if (!(ft_strcmp(line, "sb")))
		swap(stack_b, 'b');
	if (!(ft_strcmp(line, "ss")))
		swap_both(stack_a, stack_b);
	if (!(ft_strcmp(line, "pb")))
		push(stack_a, stack_b, 'b');
	if (!(ft_strcmp(line, "pa")))
		push(stack_b, stack_a, 'a');
	if (!(ft_strcmp(line, "ra")))
		rotate(stack_a, 'a');
	if (!(ft_strcmp(line, "rb")))
		rotate(stack_b, 'b');
	if (!(ft_strcmp(line, "rr")))
		rotate_both(stack_a, stack_b);
	if (!(ft_strcmp(line, "rra")))
		reverse_rotate(stack_a, 'a');
	if (!(ft_strcmp(line, "rrb")))
		reverse_rotate(stack_b, 'b');
	if (!(ft_strcmp(line, "rrr")))
		reverse_rotate_both(stack_a, stack_b);
	return (1);
}
