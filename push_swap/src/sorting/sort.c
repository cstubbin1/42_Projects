/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstubbin <cstubbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 10:25:25 by cstubbin          #+#    #+#             */
/*   Updated: 2022/08/22 09:23:48 by cstubbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	sort(t_stack **stack_a, t_stack **stack_b)
{
	size_t	length;

	(void)stack_b;
	length = stack_size(*stack_a);
	if (issorted(*stack_a))
		return ;
	if (length == 2)
		swap(stack_a, 'a');
	else if (length == 3)
		sort3(stack_a);
	else if (length <= 5)
		sort5(stack_a, stack_b);
	/* else
		sort_bigger(stack_a, stack_b); 
		*/
}

void	sort3(t_stack **stack_a)
{
	int	top;
	int	mid;
	int	bot;

	top = (*stack_a)->value;
	mid = (*stack_a)->next->value;
	bot = (*stack_a)->next->next->value;
	if (top > mid && mid > bot && top > bot)
	{
		swap(stack_a, 'a');
		rr(stack_a, 'a');
	}
	else if (top > mid && bot > mid && top > bot)
		r(stack_a, 'a');
	else if (top < mid && mid > bot && top < bot)
	{
		swap(stack_a, 'a');
		r(stack_a, 'a');
	}
	else if (top < mid && mid > bot && top > bot)
		rr(stack_a, 'a');
}

void	sort5(t_stack **stack_a, t_stack **stack_b)
{
	if (stack_size(*stack_a) == 5)
	{
		optimise(stack_a, 0);
		push(stack_a, stack_b, 'b');
		optimise(stack_a, 1);
		push(stack_a, stack_b, 'b');
		sort3(stack_a);
		push(stack_b, stack_a, 'a');
		push(stack_b, stack_a, 'a');
		if (!issorted(*stack_a))
			r(stack_a, 'a');
	}
	else
	{
		optimise(stack_a, 0);
		push(stack_a, stack_b, 'b');
		sort3(stack_a);
		push(stack_b, stack_a, 'a');
	}
}

/* void	sort_bigger(t_stack **stack_a, t_stack **stack_b)
{
} */

void	optimise(t_stack **a, int i)
{
	int			lowest;
	int			index;
	t_stack		*tmp;

	tmp = (*a);
	index = 0;
	lowest = get_lowest(*a)->value;
	while (tmp)
	{
		if (tmp->value == lowest)
			break ;
		index++;
		tmp = tmp->next;
	}
	get_lowest_top(a, index, i);
}
