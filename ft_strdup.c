/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouro-c <tlouro-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 03:06:32 by tlouro-c          #+#    #+#             */
/*   Updated: 2023/09/05 03:06:53 by tlouro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME
	 strdup, strndup – save a copy of a string

SYNOPSIS
	 #include <string.h>

	 char *
	 strdup(const char *s1);

DESCRIPTION
	 The strdup() function allocates sufficient memory for a copy of the string s1,
	 does the copy, and returns a pointer to it.  The pointer may subsequently
	 be used as an argument to the function free(3).

	 If insufficient memory is available, NULL is returned and errno 
	 is set to ENOMEM.
*/

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		i;

	i = 0;
	while (s1[i] != '\0')
		i++;
	s2 = malloc((i + 1) * sizeof(char));
	if (s2 == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
