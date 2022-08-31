/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 12:11:21 by cstubbin          #+#    #+#             */
/*   Updated: 2022/08/31 12:43:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack **stack, char stack_letter)
{
	rotate_2(stack);
	ft_putchar_fd('r', 1);
	ft_putchar_fd(stack_letter, 1);
	ft_putchar_fd('\n', 1);
}

void	rotate_2(t_stack **stack)
{
	t_stack	*tmp;
	int		first;

	tmp = *stack;
	first = tmp->value;
	if (!tmp || !tmp->next)
		return ;
	while (tmp->next != NULL)
	{
		tmp->value = tmp->next->value;
		tmp = tmp->next;
	}
	tmp->value = first;
}
