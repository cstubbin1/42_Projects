/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_both.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 12:33:17 by marvin            #+#    #+#             */
/*   Updated: 2022/08/31 12:33:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    rotate_both(t_stack **stack_a, t_stack  **stack_b)
{
    rotate_2(stack_a);
    rotate_2(stack_b);
    ft_putstr_fd("rr\n", 1);
}
