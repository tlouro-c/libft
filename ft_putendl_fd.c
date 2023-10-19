/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouro-c <tlouro-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:37:15 by tlouro-c          #+#    #+#             */
/*   Updated: 2023/10/03 11:51:10 by tlouro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME
	 ft_putendl_fd

SYNOPSIS
	 void ft_putendl_fd(char *s, int fd);

DESCRIPTION
	 Outputs the string ’s’ to the given file
	 descriptor, followed by a newline.
	 
RETURN VALUES
	 None
*/

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	write (fd, s, len);
	write (fd, "\n", 1);
}
