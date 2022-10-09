/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstubbin <cstubbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 12:11:21 by cstubbin          #+#    #+#             */
/*   Updated: 2022/09/01 14:38:20 by cstubbin         ###   ########.fr       */
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

	if (!*stack || !(*stack)->next)
		return ;
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
