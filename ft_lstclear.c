/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouro-c <tlouro-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 18:12:37 by tlouro-c          #+#    #+#             */
/*   Updated: 2023/10/04 18:22:14 by tlouro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME
	 ft_lstclear

SYNOPSIS
	 void ft_lstclear(t_list **lst, void (*del)(void *));
	 
DESCRIPTION
	 Deletes and frees the given node and every
	 successor of that node, using the function ’del’
	 and free(3).
	 Finally, the pointer to the list must be set to
	 NULL.

RETURN VALUES
	 None
*/

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*next;

	tmp = *lst;
	while (tmp != NULL)
	{
		next = tmp->next;
		del(tmp->content);
		free(tmp);
		tmp = next;
	}
	*lst = NULL;
}
