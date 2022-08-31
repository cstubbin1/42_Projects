/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_both.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 12:36:31 by marvin            #+#    #+#             */
/*   Updated: 2022/08/31 12:36:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    reverse_rotate_both(t_stack **stack_a, t_stack **stack_b)
{
    reverse_rotate_2(stack_a);
    reverse_rotate_2(stack_b);
    ft_putstr_fd("rrr\n", 1);
}
