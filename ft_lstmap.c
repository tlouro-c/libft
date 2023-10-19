/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouro-c <tlouro-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 18:30:00 by tlouro-c          #+#    #+#             */
/*   Updated: 2023/10/05 13:54:42 by tlouro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME
	 ft_lstmap

SYNOPSIS
	 t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
	 
DESCRIPTION
	 Iterates the list ’lst’ and applies the function
	 ’f’ on the content of each node. Creates a new
	 list resulting of the successive applications of
	 the function ’f’. The ’del’ function is used to
	 delete the content of a node if needed.

RETURN VALUES
	 The new list.
	 NULL if the allocation fails.
*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*modlst;
	t_list	*iterator1;
	t_list	*new;

	modlst = NULL;
	iterator1 = lst;
	while (iterator1 != NULL)
	{
		new = ft_lstnew(f(iterator1->content));
		if (new == NULL)
		{
			ft_lstclear(&modlst, del);
			return (NULL);
		}
		ft_lstadd_back(&modlst, new);
		iterator1 = iterator1->next;
	}
	return (modlst);
}
