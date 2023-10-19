/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouro-c <tlouro-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 03:00:40 by tlouro-c          #+#    #+#             */
/*   Updated: 2023/09/05 03:01:47 by tlouro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME
     memcmp – compare byte string

SYNOPSIS
     #include <string.h>

     int 
	 memcmp(const void *s1, const void *s2, size_t n);

DESCRIPTION
     The memcmp() function compares byte string s1 against byte string s2.
	 Both strings are assumed to be n bytes long.

RETURN VALUES
     The memcmp() function returns zero if the two strings are identical,
	 otherwise returns the difference between the first two differing bytes 
	 (treated as unsigned char values, so that ‘\200’ is greater than ‘\0’,
	 for example).  Zero-length strings are always identical.
     This behavior is not required by C and portable code should only depend
	 on the sign of the returned value.
*/

#include "libft.h"
#include "stdio.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	size_t				i;

	if (n == 0)
		return (0);
	p1 = s1;
	p2 = s2;
	i = 0;
	while (i < n && p1[i] == p2[i])
		i++;
	if (i == n)
		return (0);
	else
		return (p1[i] - p2[i]);
}
