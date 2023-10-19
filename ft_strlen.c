/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouro-c <tlouro-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 03:11:33 by tlouro-c          #+#    #+#             */
/*   Updated: 2023/09/05 03:11:34 by tlouro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME
	 strlen, strnlen – find length of string

SYNOPSIS
	 #include <string.h>

	 size_t
	 strlen(const char *s);

DESCRIPTION
	 The strlen() function computes the length of the string s.
	 The strnlen() function attempts to compute the length of s,
	 but never scans beyond the first maxlen bytes of s.

RETURN VALUES
	 The strlen() function returns the number of characters that precede
	 the terminating NUL character.  The strnlen() function
	 returns either the same result as strlen() or maxlen, whichever is smaller.
*/

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
