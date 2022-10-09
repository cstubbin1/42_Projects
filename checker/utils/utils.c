/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 09:17:29 by cstubbin          #+#    #+#             */
/*   Updated: 2022/08/31 12:45:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	display(t_stack *stack_a, t_stack *stack_b)
{
	t_stack	*a;
	t_stack	*b;

	a = stack_a;
	b = stack_b;
	while (a || b)
	{
		if (a)
			ft_putnbr_fd(a->value, 1);
		else
			ft_putstr_fd(" ", 1);
		ft_putstr_fd("	", 1);
		if (b)
			ft_putnbr_fd(b->value, 2);
		else
			ft_putstr_fd(" ", 1);
		ft_putchar_fd('\n', 1);
		if (a)
			a = a->next;
		if (b)
			b = b->next;
	}
	ft_putstr_fd("_	_\na	b\n", 1);
}

int	issorted(t_stack *stack)
{
	while (stack->next)
	{
		if (stack ->value > stack->next->value)
			return (0);
		stack = stack->next;
	}
	return (1);
}

size_t	stack_size(t_stack *lst)
{
	size_t	size;

	size = 0;
	while (lst)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}

t_stack	*get_lowest(t_stack *stack)
{
	t_stack	*temp;

	temp = stack;
	while (stack)
	{
		if (stack->value < temp->value)
			temp = stack;
		stack = stack->next;
	}
	return (temp);
}

void	get_lowest_top(t_stack **a, int index, int i)
{
	if (index == 0)
		return ;
	else if (index == 1)
	{
		rotate(a, 'a');
		return ;
	}
	else if (index == 2)
	{
		rotate(a, 'a');
		rotate(a, 'a');
		return ;
	}
	else if (index == 3 - i)
	{
		reverse_rotate(a, 'a');
		reverse_rotate(a, 'a');
		return ;
	}
	if (index == 4 - i)
	{
		reverse_rotate(a, 'a');
		return ;
	}
}
