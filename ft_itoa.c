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
void	itoa_isnegative(int *n, int *negative)
{
	if (*n < 0)
	{
		*n *= -1;
		*negative = 1;
	}
}

char	*ft_itoa(int n)
{
	int		tmpn;
	int		len;
	int		negative;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	tmpn = n;
	len = 2;
	negative = 0;
	itoa_isnegative(&n, &negative);
	while (tmpn /= 10)
		len++;
	len += negative;
	if ((str = (char*)malloc(sizeof(char) * len)) == NULL)
		return (NULL);
	str[--len] = '\0';
	while (len--)
	{
		str[len] = n % 10 + '0';
		n = n / 10;
	}
	if (negative)
		str[0] = '-';
	return (str);
}
