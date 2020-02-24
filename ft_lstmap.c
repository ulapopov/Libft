/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 16:58:15 by upopov            #+#    #+#             */
/*   Updated: 2020/02/23 21:54:04 by upopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *curr;
	t_list *prev;
	t_list *head;
	t_list *f_node;

	if (lst && f)
	{
		f_node = f(lst);
		if (!(head = ft_lstnew(f_node->content, f_node->content_size)))
			return (NULL);
		prev = head;
		lst = lst->next;
		while (lst)
		{
			f_node = f(lst);
			if (!(curr = ft_lstnew(f_node->content, f_node->content_size)))
				return (NULL);
			prev->next = curr;
			lst = lst->next;
			prev = curr;
		}
		return (head);
	}
	return (NULL);
}
