/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 17:32:49 by upopov            #+#    #+#             */
/*   Updated: 2020/02/20 15:03:37 by upopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t				i;
	unsigned char		*p;

	i = 0;
	p = b;
	while (i < len)
	{
		p[i] = (unsigned char)c;
		++i;
	}
	return (b);
}
