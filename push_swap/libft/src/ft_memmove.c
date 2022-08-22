/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstubbin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 10:37:01 by cstubbin          #+#    #+#             */
/*   Updated: 2022/02/22 10:46:40 by cstubbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*ph1;
	unsigned char	*ph2;

	ph1 = dst;
	ph2 = (unsigned char *)src;
	if (dst < src)
		return (ft_memcpy(dst, src, n));
	if (dst > src)
		while (n--)
			ph1[n] = ph2[n];
	return (dst);
}

// DESCRIPTION
// Copies n character from src to dst, but for overlapping memory blocks, 
// memmove is a safer approach then memcpy.

// PARAMETERS
// dst - A pointer to the destination array to be copied.
// src - A pointer to the source of data to be copied.
// n - Number of bytes to be copied.

// RETURN
// Returns a pointer to the destination (dst).
