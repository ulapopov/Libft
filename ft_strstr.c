/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 07:09:40 by upopov            #+#    #+#             */
/*   Updated: 2020/02/21 19:25:25 by upopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t len_needle;

	if (ft_strlen(needle) == 0)
		return ((char*)haystack);
	len_needle = ft_strlen(needle);
	while (*haystack)
		if (!ft_memcmp(haystack++, needle, len_needle))
			return ((char*)haystack - 1);
	return (NULL);
}
