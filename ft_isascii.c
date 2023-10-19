/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouro-c <tlouro-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 02:57:46 by tlouro-c          #+#    #+#             */
/*   Updated: 2023/09/05 02:57:48 by tlouro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME
	  isascii – test for ASCII character

SYNOPSIS
	 #include <ctype.h>

	 int
	 isascii(int c);

DESCRIPTION
	 The isascii() function tests for an ASCII character, which is 
	 any character between 0 and octal 0177 inclusive.
*/

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
