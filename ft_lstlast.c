/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouro-c <tlouro-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:35:38 by tlouro-c          #+#    #+#             */
/*   Updated: 2023/10/04 16:52:38 by tlouro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME
	 ft_lstlast

SYNOPSIS
	 t_list *ft_lstlast(t_list *lst);
	 
DESCRIPTION
	 Returns the last node of the list.

RETURN VALUES
	 Last node of the list
*/

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last;

	last = lst;
	while (last != NULL)
	{
		if (last->next == NULL)
			return (last); 
		last = last->next;
	}
	return (NULL);
}
