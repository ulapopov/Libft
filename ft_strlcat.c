/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 19:43:20 by upopov            #+#    #+#             */
/*   Updated: 2020/02/23 21:52:39 by upopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	const char		*s;
	size_t			n;
	size_t			dlen;

	s = src;
	dlen = ft_strlen(dst);
	n = size - dlen;
	if (n == 0)
		return (dlen + ft_strlen(s));
	dst = dst + dlen;
	while (*s)
	{
		if (n > 1)
		{
			*dst++ = *s;
			n--;
		}
		s++;
	}
	*dst = '\0';
	return (dlen + (s - src));
}
