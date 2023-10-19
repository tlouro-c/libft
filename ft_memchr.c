/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouro-c <tlouro-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 02:33:38 by tlouro-c          #+#    #+#             */
/*   Updated: 2023/09/05 02:47:41 by tlouro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
     memchr - locate byte in byte string

SYNOPSIS
     #include <string.h>

     void *
	 memchr(const void *s, int c, size_t n);

DESCRIPTION
     The memchr() function locates the first occurrence of c 
	 (converted to an unsigned char) in string s.

RETURN VALUES
     The memchr() function returns a pointer to the byte located, 
	 or NULL if no such byte exists within n bytes.
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	size_t				i;

	p = s;
	i = 0;
	while (i < n)
	{
		if (p[i] == (unsigned char)c)
			return ((char *)&p[i]);
		i++;
	}
	return (NULL);
}
