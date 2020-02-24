/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 18:10:15 by upopov            #+#    #+#             */
/*   Updated: 2020/02/20 20:25:33 by upopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

static int		word_count(const char *s, char c)
{
	int			i;

	i = 0;
	while (*s)
	{
		if (*s == c)
			i++;
		s++;
	}
	return (i);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t		start;
	char		**arr;
	size_t		i;
	int			j;
	int			wc;

	i = 0;
	start = 0;
	j = 0;
	wc = word_count(s, c);
	if (!(arr = (char**)malloc(sizeof(char*) * wc)))
		return (NULL);
	while (s[i])
	{
		if (s[i] == c)
		{
			if (!(arr[j] = ft_memalloc(i - start)))
				return (NULL);
			else
				ft_strncpy(arr[j++], &s[start], i - start);
			start = i + 1;
		}
		i++;
	}
	return (arr);
}
