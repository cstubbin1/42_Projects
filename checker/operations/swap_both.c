/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_both.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstubbin <cstubbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 11:42:24 by cstubbin          #+#    #+#             */
/*   Updated: 2022/09/01 08:15:21 by cstubbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_both(t_stack **stack_a, t_stack **stack_b)
{
	swap_2(stack_a);
	swap_2(stack_b);
	ft_putstr_fd("ss\n", 1);
}
