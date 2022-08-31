/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstubbin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 08:35:16 by cstubbin          #+#    #+#             */
/*   Updated: 2022/02/22 08:52:58 by cstubbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*ph;

	ph = (unsigned char *)str;
	while (n > 0)
	{
		*ph = (unsigned char)c;
		ph++;
		n--;
	}
	return (str);
}

// DESCRIPTION
// Copies the character c (an unsigned char) to the first n characters of the 
// string pointed to, by str.

// PARAMETERS
// str - A pointer to the block of memory to fill.
// c - The value to be set. Passed as an int, but the function fills the block 
// of memory using the unsigned char conversion of this value.
// n - Number of bytes to be set to the value.

// RETURNS
// Returns a pointer to the memory area str.
