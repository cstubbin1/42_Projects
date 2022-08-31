/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 13:56:05 by marvin            #+#    #+#             */
/*   Updated: 2022/08/30 13:56:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	int_index(t_stack *stack)
{
	while (stack)
	{
		stack->index = -1;
		stack = stack->next;
	}
}

void	give_index(t_stack	*temp, t_stack **stack)
{
	int	i;
	int	current;
	int	previous;

	i = 1;
	while (temp)
	{
		if (!get_by_index(*stack, i - 1))
		{
			temp = temp->next;
			continue ;
		}
		previous = get_by_index(*stack, i - 1)->value;
		current = get_next_index(stack, previous);
		if (!get_by_value(*stack, current))
		{
			temp = temp->next;
			continue ;
		}
		get_by_value(*stack, current)->index = i;
		temp = temp->next;
		i++;
	}
}

t_stack	*get_by_index(t_stack *stack, int index)
{
	while (stack)
	{
		if (stack->index >= 0 && stack->index == index)
			return (stack);
		stack = stack->next;
	}
	return (NULL);
}

int	get_next_index(t_stack **stack, int previous)
{
	t_stack	*temp;
	int		current;

	temp = *stack;
	current = -200000000;
	while (temp)
	{
		if (temp->value > previous
			&& ((current == -200000000 && temp->value != -200000000)
				|| temp->value < current))
			current = temp->value;
		temp = temp->next;
	}
	return (current);
}

t_stack	*get_by_value(t_stack *stack, int value)
{
	while (stack)
	{
		if (stack->value == value)
			return (stack);
		stack = stack->next;
	}
	return (NULL);
}
