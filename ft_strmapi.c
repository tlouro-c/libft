/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouro-c <tlouro-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:30:33 by tlouro-c          #+#    #+#             */
/*   Updated: 2023/10/04 10:58:01 by tlouro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME
	 ft_strmapi

SYNOPSIS
	 char *ft_strmapi(char const *s, char (*f)(unsigned
	 int, char));

DESCRIPTION
	 Applies the function ’f’ to each character of the
	 string ’s’, and passing its index as first argument
	 to create a new string (with malloc(3)) resulting
	 from successive applications of ’f’.

RETURN VALUES
	 The string created from the successive applications of ’f’.
	 Returns NULL if the allocation fails.
*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*changes;
	int		i;

	changes = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (changes == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		changes[i] = f(i, s[i]);
		i++;
	}
	changes[i] = '\0';
	return (changes);
}
