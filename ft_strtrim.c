/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 17:58:04 by upopov            #+#    #+#             */
/*   Updated: 2020/02/23 21:40:18 by upopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s)
{
/*	int		i;
	char	*copy;
	int		len;
	int		size;

	len = ft_strlen(s);
	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (s[len] == ' ' || s[len] == '\n' || s[len] == '\t')
		len--;
	size = len - i;
	if (!(copy = ft_memalloc((size_t)(size + 1))))
		return (NULL);
	ft_strncpy(copy, (char*)s + i, size);
	copy[size] = '\0';
	return (copy);
*/

/*	int		i;
	int		len;
	char	*copy;

	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	while (s[len - 1] == ' ' || s[len - 1] == '\t' || s[len - 1] == '\n')
		len--;
	i = -1;
	while (s[++i] == ' ' || s[i] == '\t' || s[i] == '\n')
		len--;
	if (len <= 0)
		len = 0;
	if (!(copy = (char*)malloc(sizeof(char) * (len + 1)))
		return (NULL);
	ft_strncpy(copy, (char*)s + i, len);
	copy[i] = '\0';
	return (copy);
	*/
			int		i;
	int		len;
	char	*copy;

	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	while (s[len - 1] == ' ' || s[len - 1] == '\t' || s[len - 1] == '\n')
		len--;
	i = -1;
	while (s[++i] == ' ' || s[i] == '\t' || s[i] == '\n')
		len--;
	if (len <= 0)
		len = 0;
	if (!(copy = (char*)malloc(sizeof(char) * (len + 1)))
		return (NULL);
	ft_strncpy(copy, (char*)s + i, len);
	copy[i] = '\0';
	return (copy);
}
