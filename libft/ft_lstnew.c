/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 08:26:31 by lspohle           #+#    #+#             */
/*   Updated: 2022/12/29 18:57:37 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Note
//  Prototyped as t_list *ft_lstnew(void *content)
//  -> content: the content to create the node with
//  -> allocates (with malloc(3)) and returns a new node
//  -> member variable ’content’ is initialized with value of parameter
//     ’content’
//  -> the variable ’next’ is initialized to NULL
//  -> external functs: malloc
//  -> return: the new node

// Links
//  -> structs (video): https://www.youtube.com/watch?v=dqa0KMSMx2w
//  -> linked lists (video): https://www.youtube.com/watch?v=VOpjAHCee7c
//  -> linked lists: https://www.learn-c.org/en/Linked_lists

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *) malloc (sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
