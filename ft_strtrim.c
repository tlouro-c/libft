/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouro-c <tlouro-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:27:20 by tlouro-c          #+#    #+#             */
/*   Updated: 2023/10/04 10:33:45 by tlouro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME
	 ft_strtrim

SYNOPSIS
	 char *ft_strtrim(char const *s1, char const *set);

DESCRIPTION
	 Allocates (with malloc(3)) and returns a copy of
	 ’s1’ with the characters specified in ’set’ removed
	 from the beginning and the end of the string.

RETURN VALUES
	 The trimmed string. NULL if the allocation fails.
*/

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	int		start;
	int		end;
	int		j;

	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] != '\0' && ft_strchr(set, s1[start]) != NULL)
		start++;
	while (end >= 0 && end > start && ft_strchr(set, s1[end]) != NULL)
		end--;
	trimmed = (char *)malloc((end - start + 2) * sizeof(char));
	if (trimmed == NULL)
		return (NULL);
	j = 0;
	while (start <= end)
	{
		trimmed[j] = s1[start];
		start++;
		j++;
	}
	trimmed[j] = '\0';
	return (trimmed);
}
