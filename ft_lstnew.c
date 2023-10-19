/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouro-c <tlouro-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:18:54 by tlouro-c          #+#    #+#             */
/*   Updated: 2023/10/05 14:35:22 by tlouro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME
	 ft_lstnew

SYNOPSIS
	 t_list *ft_lstnew(void *content);

DESCRIPTION
	 Allocates (with malloc(3)) and returns a new node.
	 The member variable ’content’ is initialized with
	 the value of the parameter ’content’. The variable
	 ’next’ is initialized to NULL.

RETURN VALUES
	 The new node
*/

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (new == NULL)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
