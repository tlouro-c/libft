/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouro-c <tlouro-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 03:02:08 by tlouro-c          #+#    #+#             */
/*   Updated: 2023/09/05 03:03:52 by tlouro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME
     memcpy – copy memory area

SYNOPSIS
     #include <string.h>

     void *
     memcpy(void *restrict dst, const void *restrict src, size_t n);

DESCRIPTION
     The memcpy() function copies n bytes from memory area src 
	 to memory area dst.
	 If dst and src overlap, behavior is undefined.
     Applications in which dst and src might overlap 
	 should use memmove(3) instead.

RETURN VALUES
     The memcpy() function returns the original value of dst.
*/

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const unsigned char	*p1;
	unsigned char		*p2;
	size_t				i;

	p1 = src;
	p2 = dst;
	if (p1 == NULL && p2 == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		p2[i] = p1[i];
		i++;
	}
	return (dst);
}
