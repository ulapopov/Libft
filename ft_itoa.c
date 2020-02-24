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
#include "libft.h"
/*
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
*/
static int	isnegative(int *n)
{
	if (*n < 0)
	{
		*n = -(*n);
		return (1);
	}
	return (0);
}

char	*ft_itoa(int n)
{
	int		tmp;
	int		len;
	int		negative;
	char	*s;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	tmp = n;
	len = 2;
	negative = isnegative(&n);
	while (tmp /= 10)
		len++;
	len += negative;
	if ((s = (char*)malloc(sizeof(char) * len)) == NULL)
		return (NULL);
	s[--len] = '\0';
	while (len--)
	{
		s[len] = n % 10 + '0';
		n = n / 10;
	}
	if (negative)
		s[0] = '-';
	return (s);
}
