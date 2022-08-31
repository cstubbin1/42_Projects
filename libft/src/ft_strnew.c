/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 15:28:27 by marvin            #+#    #+#             */
/*   Updated: 2022/08/31 15:28:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strnew(size_t size)
{
	char	*string;

	string = (char*)malloc(sizeof(char) * (size + 1));
	if (string == NULL)
		return (NULL);
	ft_bzero(string, (size + 1));
	return (string);
}