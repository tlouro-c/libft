/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouro-c <tlouro-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 02:48:14 by tlouro-c          #+#    #+#             */
/*   Updated: 2023/10/05 13:55:53 by tlouro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME
	 atoi, atoi_l – convert ASCII string to integer

SYNOPSIS
	 #include <stdlib.h>

	 int
	 atoi(const char *str);

DESCRIPTION
	 The atoi() function converts the initial portion of the string 
	 pointed to by str to int representation.
*/

int	ft_atoi(const char *str)
{
	unsigned int	negative;
	unsigned int	i;
	int				atoi;

	atoi = 0;
	negative = 0;
	i = 0;
	while (str[i] == 32 || (str[i] > 8 && str[i] < 14))
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		negative++;
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9') && str[i] != '\0')
	{
		atoi = (atoi * 10) + (str[i] - 48);
		i++;
	}
	if (negative)
		return (atoi * -1);
	return (atoi);
}
