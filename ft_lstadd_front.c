/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouro-c <tlouro-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:26:34 by tlouro-c          #+#    #+#             */
/*   Updated: 2023/10/05 15:05:15 by tlouro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME
	 ft_lstadd_front

SYNOPSIS
	 void ft_lstadd_front(t_list **lst, t_list *new);

DESCRIPTION
	Adds the node ’new’ at the beginning of the list.

RETURN VALUES
	 None
*/

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
