/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 07:16:02 by upopov            #+#    #+#             */
/*   Updated: 2020/02/21 18:32:18 by upopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t len_needle;

	if (needle == NULL)
		return ((char*)haystack);
	len_needle = ft_strlen(needle);
	while (*haystack && len--)
	{
		if (!ft_memcmp(haystack, needle, len_needle))
			return ((char*)haystack);
		haystack++;
	}
	return (NULL);
}
