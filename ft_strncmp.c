/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouro-c <tlouro-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 03:11:48 by tlouro-c          #+#    #+#             */
/*   Updated: 2023/09/05 03:13:22 by tlouro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME
	 strcmp, strncmp – compare strings

SYNOPSIS
	 #include <string.h>

	 int
	 strncmp(const char *s1, const char *s2, size_t n);

DESCRIPTION
	 The strcmp() and strncmp() functions lexicographically compare 
	 the null-terminated strings s1 and s2.

	 The strncmp() function compares not more than n characters.  
	 Because strncmp() is designed for comparing strings rather than binary data,
	 characters that appear after a ‘\0’ character are not compared.

RETURN VALUES
	 The strcmp() and strncmp() functions
	 return an integer greater than, equal to, or less than 0, according as
	 the string s1 is greater than, equal to, or less than the string s2.
	 The comparison is done using unsigned characters,
	 so that ‘\200’ is greater than ‘\0’.
*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
