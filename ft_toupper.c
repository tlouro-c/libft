/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouro-c <tlouro-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 03:17:52 by tlouro-c          #+#    #+#             */
/*   Updated: 2023/09/05 03:19:08 by tlouro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME
	 toupper, toupper_l – lower case to upper case letter conversion

SYNOPSIS
	 #include <ctype.h>

	 int
	 toupper(int c);

DESCRIPTION
	 The toupper() function converts a lower-case letter
	 to the corresponding upper-case letter.
	 The argument must be representable as an unsigned char or the value of EOF.

RETURN VALUES
	 If the argument is a lower-case letter, the toupper() function returns
	 the corresponding upper-case letter if there is one; otherwise,
	 the argument is returned unchanged.
*/

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
