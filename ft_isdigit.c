/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouro-c <tlouro-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 02:58:08 by tlouro-c          #+#    #+#             */
/*   Updated: 2023/09/05 02:58:37 by tlouro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME
	  isdigit, isnumber – decimal-digit character test

SYNOPSIS
	 #include <ctype.h>

	 int
	 isdigit(int c);

DESCRIPTION
	 The isdigit() function tests for a decimal digit character.
	 Regardless of locale, this includes the following characters only:

	 ``0''``1''``2''``3''``4''
	 ``5''``6''``7''``8''``9''

RETURN VALUES
	 The isdigit() and isnumber() functions return zero if the character
	 tests false and return non-zero if the character tests true.
*/

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
