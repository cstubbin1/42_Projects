/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstubbin <cstubbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 09:13:50 by cstubbin          #+#    #+#             */
/*   Updated: 2022/08/22 09:18:37 by cstubbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	push(t_stack **from, t_stack **to, char letter)
{
	t_stack	*tmp;
	t_stack	*element;

	if (!*from)
		return ;
	element = (*from)->next;
	tmp = *from;
	tmp->next = *to;
	*to = tmp;
	*from = element;
	ft_putchar_fd('p', 1);
	ft_putchar_fd(letter, 1);
	ft_putchar_fd('\n', 1);
}