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
	char	*instr;

	argv++;
	argc--;
	if (argc == 0)
		return (0);
	stack_c = NULL;
	stack_d = NULL;
	argv = split_and_check_args(argc, argv);
	argc = counter(argv);
	create_stack(&stack_c, &argv[0], argc);
	instr = get_next_line(0);
	while (instr)
	{
		do_commands(instr, &stack_c, &stack_d);
		ft_strdel(&instr);
		instr = get_next_line(0);
	}
	print_checker_res(&stack_c, &stack_d);
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

void	do_commands(char *line, t_stack **stack_a, t_stack **stack_b)
{
	if (!(ft_strcmp(line, "sa\n")))
		return (swap(stack_a, 'a'));
	if (!(ft_strcmp(line, "sb\n")))
		return (swap(stack_b, 'b'));
	if (!(ft_strcmp(line, "ss\n")))
		return (swap_both(stack_a, stack_b));
	if (!(ft_strcmp(line, "pb\n")))
		return (push(stack_a, stack_b, 'b'));
	if (!(ft_strcmp(line, "pa\n")))
		return (push(stack_b, stack_a, 'a'));
	if (!(ft_strcmp(line, "ra\n")))
		return (rotate(stack_a, 'a'));
	if (!(ft_strcmp(line, "rb\n")))
		return (rotate(stack_b, 'b'));
	if (!(ft_strcmp(line, "rr\n")))
		return (rotate_both(stack_a, stack_b));
	if (!(ft_strcmp(line, "rra\n")))
		return (reverse_rotate(stack_a, 'a'));
	if (!(ft_strcmp(line, "rrb\n")))
		return (reverse_rotate(stack_b, 'b'));
	if (!(ft_strcmp(line, "rrr\n")))
		return (reverse_rotate_both(stack_a, stack_b));
	exit_error();
}
