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
/*
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
*/
static int		word_count(const char *str, char c)
{
	int word;

	word = 0;
	if (*str != c && *str)
	{
		str++;
		word++;
	}
	while (*str)
	{
		while (*str == c)
		{
			str++;
			if (*str != c && *str)
				word++;
		}
		str++;
	}
	return (word);
}

static int		length(const char *str, char c)
{
	int i;

	i = 0;
	while (*str != c && *str)
	{
		i++;
		str++;
	}
	return (i);
}

char			**ft_strsplit(char const *s, char c)
{
	int		j;
	int		i;
	char	**arr;

	j = 0;
	if (!s || (!(arr = (char **)malloc(sizeof(char *) * (word_count(s, c) + 1)))))
		return (NULL);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		i = 0;
		if (*s != c && *s)
		{
			if (!(arr[j] = (char *)malloc(length(s, c) + 1)))
				return (NULL);
			while (*s && *s != c)
				arr[j][i++] = (char)*s++;
			arr[j][i] = '\0';
			j++;
		}
	}
	arr[j] = NULL;
	return (arr);
}
