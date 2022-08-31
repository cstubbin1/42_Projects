/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 09:13:50 by cstubbin          #+#    #+#             */
/*   Updated: 2022/08/31 16:25:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack **from, t_stack **to, char letter)
{
	t_stack	*temp;
	t_stack	*element;

	if (!*from)
		return ;
	element = (*from)->next;
	temp = *from;
	temp->next = *to;
	*to = temp;
	*from = element;
	ft_putchar_fd('p', 1);
	ft_putchar_fd(letter, 1);
	ft_putchar_fd('\n', 1);
}
