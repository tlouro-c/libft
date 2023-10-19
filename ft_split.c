/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouro-c <tlouro-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 03:04:46 by tlouro-c          #+#    #+#             */
/*   Updated: 2023/09/05 03:04:59 by tlouro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME
	 ft_split

SYNOPSIS
	 char **
	 ft_split(char const *s, char c);

DESCRIPTION
	 Allocates (with malloc(3)) and returns an array
	 of strings obtained by splitting ’s’ using the
	 character ’c’ as a delimiter. The array must be
	 ended by a NULL pointer.

RETURN VALUES
	 The array of new strings resulting from the split.
	 NULL if the allocation fails.
*/

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	counter;
	int	i;

	counter = 0;
	i = 0;
	if (s[i] == '\0')
		return (counter);
	if (s[i] != c)
		counter++;
	i++;
	while (s[i] != '\0')
	{
		if (s[i] != c && s[i - 1] == c)
			counter++;
		i++;
	}
	return (counter);
}

static char	*mod_strdup(char const *s, char c)
{
	char	*s2;
	int		i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	s2 = (char *)malloc((i + 1) * sizeof(char));
	if (!s2)
		return (s2);
	i = 0;
	while (s[i] != c && s[i] != '\0')
	{
		s2[i] = s[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

static char	**freeall(char ***sarray, int j)
{
	while (j >= 0)
	{
		free((*sarray)[j]);
		(*sarray)[j] = NULL;
		j--;
	}
	free(*sarray);
	*sarray = NULL;
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**sarray;
	int		j;
	int		i;

	sarray = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!sarray)
		return (NULL);
	j = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if ((i == 0 && s[0] != c && s[0] != '\0')
			|| (i > 0 && s[i] != c && s[i - 1] == c))
		{
			sarray[j] = mod_strdup(&s[i], c);
			if (!sarray[j])
				return (freeall(&sarray, j));
			j++;
		}
		i++;
	}
	sarray[j] = NULL;
	return (sarray);
}
