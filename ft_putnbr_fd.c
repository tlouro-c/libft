/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouro-c <tlouro-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:50:39 by tlouro-c          #+#    #+#             */
/*   Updated: 2023/10/03 12:12:56 by tlouro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME
	 ft_putnnbr_fd

SYNOPSIS
	 void ft_putnbr_fd(int n, int fd);

DESCRIPTION
	 Outputs the integer ’n’ to the given file
	 descriptor.
	 
RETURN VALUES
	 None
*/

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	c;

	if (n == -2147483648)
		write (fd, "-2147483648", 11);
	else if (n < 0)
	{
		write (fd, "-", 1);
		ft_putnbr_fd(n * -1, fd);
	}
	else if (n < 10)
	{
		c = n + 48;
		write (fd, &c, 1);
	}
	else
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
}
