/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouro-c <tlouro-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:23:07 by tlouro-c          #+#    #+#             */
/*   Updated: 2023/10/03 11:26:16 by tlouro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME
     strlcpy, strlcat – size-bounded string copying and concatenation

SYNOPSIS
     #include <string.h>

     size_t
     strlcat(char * restrict dst, const char * restrict src, size_t dstsize);

DESCRIPTION
     The strlcpy() and strlcat() functions copy and concatenate strings with 
	 the same input parameters and output result as snprintf(3).  They are 
	 designed to be safer, more consistent, and less error prone replacements for
     the easily misused functions strncpy(3) and strncat(3).

     strlcpy() and strlcat() take the full size of the destination buffer 
	 and guarantee NUL-termination if there is room.  Note that room for the NUL 
	 should be included in dstsize.  Also note that strlcpy() and strlcat() only
     operate on true ''C'' strings. This means that for strlcpy() src must be 
	 NUL-terminated and for strlcat() both src and dst() must be NUL-terminated.

     strlcat() appends string src to the end of dst.  It will append 
	 at most dstsize - strlen(dst) - 1 characters. It will then NUL-terminate,
	 unless dstsize is 0 or the original dst string was longer than dstsize 
	 (in practice this should not happen as it means that either dstsize is 
	 incorrect or that dst is not a proper string).

RETURN VALUES
     Besides quibbles over the return type (size_t versus int) and signal 
	 handler safety (snprintf(3) is not entirely safe on some systems), 
	 the following two are equivalent:

           n = strlcpy(dst, src, len);
           n = snprintf(dst, len, "%s", src);

     Like snprintf(3), the strlcpy() and strlcat() functions return the 
	 total length of the string they tried to create.  For strlcpy() 
	 that means the length of src.  For strlcat() that means the 
	 initial length of dst plus the length of src.

     If the return value is >= dstsize, the output string has been truncated.
	 It is the caller's responsibility to handle this.
*/

#include "libft.h"

size_t	ft_strlcat(char	*dst, const char	*src, size_t dstsize)
{
	size_t	limit;
	size_t	dstlen;
	size_t	srclen;
	size_t	i;
	size_t	j;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstlen >= dstsize)
		return (dstsize + srclen);
	limit = dstsize - dstlen - 1;
	i = dstlen;
	j = 0;
	while (src[j] != '\0' && j < limit)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (srclen + dstlen);
}
