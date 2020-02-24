/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 19:00:02 by upopov            #+#    #+#             */
/*   Updated: 2020/02/21 09:30:08 by upopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*duplicate;

	len = 0;
	while (s1[len])
		len++;
	duplicate = (char*)malloc(len + 1);
	if (duplicate == NULL)
		return (NULL);
	len = 0;
	while (s1[len])
	{
		duplicate[len] = s1[len];
		len++;
	}
	duplicate[len] = '\0';
	return (duplicate);
}
