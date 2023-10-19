/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouro-c <tlouro-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:50:35 by tlouro-c          #+#    #+#             */
/*   Updated: 2023/10/04 11:01:48 by tlouro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME
	 ft_striteri

SYNOPSIS
	 void ft_striteri(char *s, void (*f)(unsigned int,
	 char*));

DESCRIPTION
	 Applies the function ’f’ on each character of
	 the string passed as argument, passing its index
	 as first argument.  Each character is passed by
	 address to ’f’ to be modified if necessary.

RETURN VALUES
	 None
*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int		i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
