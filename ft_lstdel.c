/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 16:39:52 by upopov            #+#    #+#             */
/*   Updated: 2020/02/23 21:53:32 by upopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *tmp;
	t_list *cur;

	cur = *alst;
	while (cur)
	{
		tmp = cur;
		ft_lstdelone(&cur, del);
		cur = tmp->next;
	}
	*alst = NULL;
}
