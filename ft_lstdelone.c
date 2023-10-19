/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouro-c <tlouro-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 18:04:54 by tlouro-c          #+#    #+#             */
/*   Updated: 2023/10/05 12:38:23 by tlouro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME
	 ft_lstdelone

SYNOPSIS
	 void ft_lstdelone(t_list *lst, void (*del)(void *));
	 
DESCRIPTION
	 Takes as a parameter a node and frees the memory of
	 the node’s content using the function ’del’ given
	 as a parameter and free the node. The memory of
	 ’next’ must not be freed.

RETURN VALUES
	 None
*/

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}
