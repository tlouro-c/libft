/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouro-c <tlouro-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 02:59:48 by tlouro-c          #+#    #+#             */
/*   Updated: 2023/09/05 03:00:05 by tlouro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME
	 itoa - convert integer to string

SYNOPSIS
	 #include <stdlib.h>

	 char *
	 itoa(int n);

DESCRIPTION
	Allocates (with malloc(3)) and returns a string representing 
	the integer received as an argument. Negative numbers must be handled.

RETURN VALUES
	 The string representing the integer. NULL if the allocation fails.
*/

#include "libft.h"

static int	int_len(int n)
{
	int	len;

	len = 1;
	while (n > 9 || n < -9)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static char	*fill_itoa(char *s, int n, int i)
{
	if (n == -2147483648)
	{
		s[0] = '-';
		s[1] = '2';
		n = 147483648;
		i++;
	}
	else if (n < 0)
	{
		s[0] = '-';
		n = n * -1;
		i++;
	}
	s[i + 1] = '\0';
	while (n > 0)
	{
		s[i] = (n % 10) + 48;
		n /= 10;
		i--;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		signal;
	int		i;

	signal = n < 0;
	s = (char *)malloc((int_len(n) + 1 + signal) * sizeof(char));
	if (s == NULL)
		return (NULL);
	i = int_len(n) - 1;
	if (n == 0)
	{
		s[0] = '0';
		s[1] = '\0';
		return (s);
	}
	return (fill_itoa(s, n, i));
}
