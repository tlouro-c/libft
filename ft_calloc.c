/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouro-c <tlouro-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 02:53:37 by tlouro-c          #+#    #+#             */
/*   Updated: 2023/09/05 02:54:12 by tlouro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME
     calloc, free, malloc, realloc, reallocf, valloc, aligned_alloc 
	 – memory allocation

SYNOPSIS
     #include <stdlib.h>

     void *
     calloc(size_t count, size_t size);

DESCRIPTION
     The malloc(), calloc(), valloc(), realloc(), and reallocf() functions
	 allocate memory.  The allocated memory is aligned such that it can 
	 be used for any data type, including AltiVec- and SSE-related types. 
	 The aligned_alloc() function allocates memory with the requested alignment.
	 The free() function frees allocations that were created via the preceding
	 allocation functions.

     The calloc() function contiguously allocates enough space for count objects
	 that are size bytes of memory each and returns a pointer to the 
	 allocated memory. The allocated memory is filled with bytes of value zero.

RETURN VALUES
     If successful, calloc(), malloc(), realloc(), reallocf(), valloc(), 
	 and aligned_alloc() functions return a pointer to allocated memory.
	 If there is an error, they return a NULL pointer and set errno to ENOMEM.

     In addition, aligned_alloc() returns a NULL pointer and sets errno to EINVAL
	 if size is not an integral multiple of alignment, or if alignment is not 
	 a power of 2 at least as large as sizeof(void *).

     For realloc(), the input pointer is still valid if reallocation failed.
	 For reallocf(), the input pointer will have been freed if reallocation failed.

     The free() function does not return a value.
*/

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char			*pointer;
	unsigned long	i;

	pointer = (char *)malloc(count * size);
	if (pointer != NULL)
	{
		i = 0;
		while (i < (count * size))
		{
			pointer[i] = 0;
			i++;
		}
	}
	return (pointer);
}
