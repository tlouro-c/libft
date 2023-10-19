/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouro-c <tlouro-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 03:13:42 by tlouro-c          #+#    #+#             */
/*   Updated: 2023/10/03 10:40:55 by tlouro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME
	 strstr, strcasestr, strnstr – locate a substring in a string

SYNOPSIS
	 #include <string.h>

	 char *
	 strnstr(const char *haystack, const char *needle, size_t len);

DESCRIPTION
	 The strnstr() function locates the first occurrence of the null-terminated
	 string needle in the string haystack, where not more than len characters
	 are searched.  Characters that appear after a ‘\0’ character are not searched.
	 Since the strnstr() function is a FreeBSD specific API,
	 it should only be used when portability is not a concern.

RETURN VALUES
	 If needle is an empty string, haystack is returned; if needle occurs
	 nowhere in haystack, NULL is returned;
	 otherwise a pointer to the first character of the first occurrence 
	 of needle is returned.
*/

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	if (needle[0] == '\0')
		return ((char *)haystack);
	else if (len == 0)
		return (NULL);
	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		k = i;
		while (needle[j] == haystack[k] && needle[j] != '\0' && k < len)
		{
			j++;
			k++;
		}
		if (needle[j] == '\0')
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
