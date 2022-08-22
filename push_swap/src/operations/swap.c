/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstubbin <cstubbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 11:34:23 by cstubbin          #+#    #+#             */
/*   Updated: 2022/08/19 11:34:54 by cstubbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	swap(t_stack **stack, char stack_letter)
{
	int	tmp;

	if (stack_size(*stack) < 2)
		return ;
	tmp = (*stack)->value;
	(*stack)->value = (*stack)->next->value;
	(*stack)->next->value = tmp;
	ft_putchar_fd('s', 1);
	ft_putchar_fd(stack_letter, 1);
	ft_putchar_fd('\n', 1);
}
