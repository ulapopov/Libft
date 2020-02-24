/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 18:35:53 by upopov            #+#    #+#             */
/*   Updated: 2020/02/21 19:19:57 by upopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

static int		length(int n)
{
	int				len;
	unsigned int	val;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	val = (unsigned int)n;
	while (val > 0)
	{
		val = val / 10;
		len++;
	}
	return (len);
}

char			*ft_itoa(int n)
{
	int				len;
	char			*s;
	unsigned int	val;

	len = length(n);
	if (!(s = (char*)malloc(len + 1)))
		return (NULL);
	if (n < 0)
		s[0] = '-';
	if (n == 0)
		s[0] = '0';
	s[len] = '\0';
	len--;
	val = (unsigned int)n;
	while (val > 0)
	{
		s[len] = (val % 10) + '0';
		val = val / 10;
		len--;
	}
	return (s);
}
