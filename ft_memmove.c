/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouro-c <tlouro-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 23:06:51 by tlouro-c          #+#    #+#             */
/*   Updated: 2023/10/02 23:07:10 by tlouro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME
     memmove – copy byte string

SYNOPSIS
     #include <string.h>

     void *
     memmove(void *dst, const void *src, size_t len);

DESCRIPTION
     The memmove() function copies len bytes from string src to string dst.  
	 The two strings may overlap; the copy is always done in a
     non-destructive manner.

RETURN VALUES
     The memmove() function returns the original value of dst.
*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const unsigned char	*p1;
	unsigned char		*p2;
	size_t				i;

	p1 = (const unsigned char *)src;
	p2 = (unsigned char *)dst;
	if (p1 == NULL && p2 == NULL)
		return (NULL);
	if (p2 > p1)
	{
		while (len-- > 0)
			p2[len] = p1[len];
	}
	else
	{
		i = 0;
		while (i < len)
		{
			p2[i] = p1[i];
			i++;
		}
	}
	return (dst);
}
