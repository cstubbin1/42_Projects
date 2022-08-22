/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstubbin <cstubbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 12:11:21 by cstubbin          #+#    #+#             */
/*   Updated: 2022/08/19 12:22:29 by cstubbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	r(t_stack **stack, char stack_letter)
{
	r2(stack);
	ft_putchar_fd('r', 1);
	ft_putchar_fd(stack_letter, 1);
	ft_putchar_fd('\n', 1);
}

void	r2(t_stack **stack)
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
