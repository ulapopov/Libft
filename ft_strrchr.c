/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 07:02:41 by upopov            #+#    #+#             */
/*   Updated: 2020/02/21 13:45:06 by upopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

char	*ft_strrchr(const char *s, int c)
{
	char *pos;

	pos = NULL;
	while (*s)
	{
		if (*s == c)
			pos = (char*)s;
		s++;
	}
	if (pos != NULL)
		return (pos);
	if (c == '\0')
		return ((char*)s);
	return (NULL);
}
