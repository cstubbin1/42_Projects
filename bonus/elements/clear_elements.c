/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_elements.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstubbin <cstubbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 10:05:14 by cstubbin          #+#    #+#             */
/*   Updated: 2022/07/14 10:16:39 by cstubbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	clear_elements(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;

	if (*stack_a)
	{
		while (*stack_a)
		{
			tmp = (*stack_a)->next;
			free(*stack_a);
			*stack_a = tmp;
		}
		*stack_a = NULL;
	}
	if (*stack_b)
	{
		tmp = *stack_b;
		if (!tmp)
			return ;
		while (*stack_b)
		{
			tmp = (*stack_b)->next;
			free(*stack_b);
			*stack_b = tmp;
		}
		*stack_b = NULL;
	}
}
