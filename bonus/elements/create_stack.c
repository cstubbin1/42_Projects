/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstubbin <cstubbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 10:32:49 by cstubbin          #+#    #+#             */
/*   Updated: 2022/08/12 09:46:32 by cstubbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	create_stack(t_stack **lst, char **arg, int argc)
{
	int	count;

	count = argc - 1;
	while (count >= 0)
	{
		*lst = add_element(ft_atol(arg[count]), *lst);
		count--;
	}
}
