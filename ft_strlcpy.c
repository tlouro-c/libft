/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouro-c <tlouro-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 03:10:13 by tlouro-c          #+#    #+#             */
/*   Updated: 2023/09/05 03:10:14 by tlouro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME
	 strlcpy, strlcat – size-bounded string copying and concatenation

SYNOPSIS
	 #include <string.h>

	 size_t
	 strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);

DESCRIPTION
	 The strlcpy() and strlcat() functions copy and concatenate strings 
	 with the same input parameters and output result as snprintf(3).
	 They are designed to be safer, more consistent, and less error prone
	 replacements for the easily misused functions strncpy(3) and strncat(3).

	 strlcpy() and strlcat() take the full size of the destination buffer
	 and guarantee NUL-termination if there is room. Note that room for the NUL
	 should be included in dstsize.  Also note that strlcpy() and strlcat() only
	 operate on true ''C'' strings. This means that for strlcpy() src must be
	 NUL-terminated and for strlcat() both src and dst() must be NUL-terminated.

	 strlcpy() copies up to dstsize - 1 characters from the string src to dst,
	 NUL-terminating the result if dstsize is not 0.

RETURN VALUES
	 Besides quibbles over the return type (size_t versus int) and 
	 signal handler safety (snprintf(3) is not entirely safe on some systems),
	 the following two are equivalent:

		   n = strlcpy(dst, src, len);
		   n = snprintf(dst, len, "%s", src);

	 Like snprintf(3), the strlcpy() and strlcat() functions 
	 return the total length of the string they tried to create.  
	 For strlcpy() that means the length of src.
	 For strlcat() that means the initial length of dst plus the length of src.

	 If the return value is >= dstsize, the output string has been truncated. 
	 It is the caller's responsibility to handle this.
*/

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	int		srclen;

	srclen = 0;
	while (src[srclen] != '\0')
		srclen++;
	if (dstsize == 0)
		return (srclen);
	i = 0;
	while (src[i] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (srclen);
}
