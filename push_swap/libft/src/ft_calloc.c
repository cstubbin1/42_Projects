/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstubbin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 08:31:30 by cstubbin          #+#    #+#             */
/*   Updated: 2022/02/25 13:19:28 by cstubbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*mem;
	size_t	i;

	i = count * size;
	mem = malloc(i);
	if (!mem)
		return (NULL);
	ft_bzero(mem, i);
	return (mem);
}
