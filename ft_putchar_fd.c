/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouro-c <tlouro-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:29:50 by tlouro-c          #+#    #+#             */
/*   Updated: 2023/10/03 11:39:02 by tlouro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME
	 ft_putchar_fd

SYNOPSIS
     void ft_putchar_fd(char c, int fd);

DESCRIPTION
	 Outputs the character ’c’ to the given file
	 descriptor.
RETURN VALUES
	 None
*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
