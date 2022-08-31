/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 11:34:23 by cstubbin          #+#    #+#             */
/*   Updated: 2022/08/31 12:43:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack **stack, char stack_letter)
{
	swap_2(stack);
	ft_putchar_fd('s', 1);
	ft_putchar_fd(stack_letter, 1);
	ft_putchar_fd('\n', 1);
}

void	swap_2(t_stack **stack)
{
	int	tmp;

	if (stack_size(*stack) < 2)
		return ;
	tmp = (*stack)->value;
	(*stack)->value = (*stack)->next->value;
	(*stack)->next->value = tmp;
}
