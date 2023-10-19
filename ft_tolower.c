/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouro-c <tlouro-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 03:16:54 by tlouro-c          #+#    #+#             */
/*   Updated: 2023/09/05 03:17:40 by tlouro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME
	 tolower, tolower_l – upper case to lower case letter conversion

SYNOPSIS
	 #include <ctype.h>

	 int
	 tolower(int c);

DESCRIPTION
	 The tolower() function converts an upper-case letter 
	 to the corresponding lower-case letter.  
	 The argument must be representable as an unsigned char or the value of EOF.

RETURN VALUES
	 If the argument is an upper-case letter, the tolower() function returns
	 the corresponding lower-case letter if there is one; otherwise,
	 the argument is returned unchanged.
*/

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
