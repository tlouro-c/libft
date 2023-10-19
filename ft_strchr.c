/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouro-c <tlouro-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 03:06:15 by tlouro-c          #+#    #+#             */
/*   Updated: 2023/09/05 03:06:16 by tlouro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME
	 strchr, strrchr – locate character in string

SYNOPSIS
	 #include <string.h>

	 char *
	 strchr(const char *s, int c);

DESCRIPTION
	 The strchr() function locates the first occurrence of c (converted to a char)
	 in the string pointed to by s.  The terminating null character is considered
	 to be part of the string; therefore if c is ‘\0’, the functions 
	 locate the terminating ‘\0’.

RETURN VALUES
	 The functions strchr() and strrchr() return a pointer to the located 
	 character, or NULL if the character does not appear in the string.
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (unsigned char)c)
		return ((char *)&s[i]);
	return (NULL);
}
