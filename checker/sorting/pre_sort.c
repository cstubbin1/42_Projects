/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pre_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 16:27:33 by marvin            #+#    #+#             */
/*   Updated: 2022/08/31 16:27:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pre_sort(t_stack **stack)
{
	t_stack	*temp;

	int_index(*stack);
	get_lowest(*stack)->index = 0;
	temp = *stack;
	give_index(temp, stack);
	temp = *stack;
	while (temp)
	{
		temp->value = temp->index;
		temp = temp->next;
	}
}
