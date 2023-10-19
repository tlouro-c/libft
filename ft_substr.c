/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouro-c <tlouro-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:16:44 by tlouro-c          #+#    #+#             */
/*   Updated: 2023/10/04 17:14:27 by tlouro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME
	ft_substr

SYNOPSIS
	 char *
	 ft_substr(char const *s, unsigned int start, size_t len);

DESCRIPTION
	 Allocates (with malloc(3)) and returns a substring from the string ’s’.
	 The substring begins at index ’start’ and is of maximum size ’len’.

RETURN VALUES
	 The substring. NULL if the allocation fails.
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	j;
	size_t	i;

	if (start >= (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	substr = (char *)malloc ((len + 1) * sizeof(char));
	if (substr == NULL)
		return (NULL);
	j = 0;
	i = start;
	while (s[i] != '\0' && j < len)
		substr[j++] = s[i++];
	substr[j] = '\0';
	return (substr);
}
