/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstubbin <cstubbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 09:15:22 by cstubbin          #+#    #+#             */
/*   Updated: 2022/07/14 09:23:40 by cstubbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

long	ft_atol(const char *str)
{
	long			res;
	int				sign;
	unsigned int	index;

	res = 0;
	sign = 1;
	index = 0;
	while (str[index] == ' ' || str[index] == '\t' || str[index] == '\n'
		|| str[index] == '\r' || str[index] == '\v' || str[index] == '\f')
		index++;
	if (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
				sign = -1;
		index++;
	}
	while (str[index] != '\0' && ft_isdigit(str[index]))
	{
		res = (res * 10) + str[index] - '0';
		index++;
	}
	if (sign == -1)
		return (-res);
	return (res);
}
