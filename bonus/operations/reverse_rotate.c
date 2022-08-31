/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 11:44:31 by cstubbin          #+#    #+#             */
/*   Updated: 2022/08/31 12:43:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_2(t_stack **stack)
{
	t_stack	*front;
	t_stack	*back;
	t_stack	*head;

	head = *stack;
	back = *stack;
	front = *stack;
	if (*stack == NULL)
		return ;
	while (front->next != NULL)
	{
		front = front->next;
		if (front->next != NULL)
			back = back->next;
	}
	if (front->next == NULL)
	{
		front->next = head;
		back->next = NULL;
	}
	*stack = front;
}

void	reverse_rotate(t_stack **stack, char stack_letter)
{
	reverse_rotate_2(stack);
	ft_putstr_fd("rr", 1);
	ft_putchar_fd(stack_letter, 1);
	ft_putchar_fd('\n', 1);
}
