/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_both.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 11:42:24 by cstubbin          #+#    #+#             */
/*   Updated: 2022/08/31 16:26:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_both(t_stack  **stack_a, t_stack  **stack_b)
{
    swap_2(stack_a);
    swap_2(stack_b);
    ft_putstr_fd("ss\n", 1);
}