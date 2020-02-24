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

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
/*	const char		*s;
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
*/
		unsigned int	i;
	unsigned int	j;
	unsigned int	res;

	i = 0;
	while (dest[i] != '\0')
		++i;
	res = 0;
	while (src[res] != '\0')
		++res;
	if (size <= i)
		res += size;
	else
		res += i;
	j = 0;
	while (src[j] != '\0' && i + 1 < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (res);
}
